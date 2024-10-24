#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include <assert.h>

#include "wndlib.h"

// Windowing

static int s_shouldWrapMouse = FALSE;
static bool s_wndclassRegistered = FALSE;
static const char* s_wndclassName = "DumbWindowClass";
static wndProc_t s_wndProc;
static int g_mousex = 0;
static int g_mousey = 0;
static RECT g_rect = { 0, 0, 0, 0 };

static LRESULT CALLBACK WND_WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	assert(s_wndProc);
	
	WndProcData_t wndProcData;
	memset(&wndProcData, 0, sizeof(wndProcData));
	
	switch (uMsg)
	{
	case WM_CLOSE:
		wndProcData.event = WND_EVENT_CLOSE;
		break;

	/* Keyboard keys */

	case WM_KEYDOWN:
		wndProcData.event = WND_EVENT_KEYBOARDKEY_DOWN;
		wndProcData.key = GetKeyFromWin32((Win32Keys::Keys)wParam);
		break;
	case WM_KEYUP:
		wndProcData.event = WND_EVENT_KEYBOARDKEY_UP;
		wndProcData.key = GetKeyFromWin32((Win32Keys::Keys)wParam);
		break;

	/* Mouse buttons pressing */

	case WM_LBUTTONDOWN:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_DOWN;
		wndProcData.mousebutton = MouseButton_Left;
		break;
	case WM_MBUTTONDOWN:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_DOWN;
		wndProcData.mousebutton = MouseButton_Middle;
		break;
	case WM_RBUTTONDOWN:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_DOWN;
		wndProcData.mousebutton = MouseButton_Right;
		break;

	/* Mouse buttons release */

	case WM_LBUTTONUP:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_UP;
		wndProcData.mousebutton = MouseButton_Left;
		break;
	case WM_MBUTTONUP:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_UP;
		wndProcData.mousebutton = MouseButton_Middle;
		break;
	case WM_RBUTTONUP:
		wndProcData.event = WND_EVENT_MOUSEBUTTON_UP;
		wndProcData.mousebutton = MouseButton_Right;
		break;
		
	/* Mouse cursor */

	case WM_MOUSEHOVER:
		ShowCursor(FALSE);
		break;

	case WM_MOUSELEAVE:
		ShowCursor(TRUE);
		break;

	case WM_MOUSEMOVE:
	{
		if (s_shouldWrapMouse)
		{
			GetClientRect(hwnd, &g_rect); // Get window dimension

			g_rect.right -= 12; // right offset
			g_rect.left += 12; // left offset

			g_mousex = LOWORD(lParam); // Get mouse X pos
			g_mousey = HIWORD(lParam); // Get mouse Y pos

			if (g_mousex >= g_rect.right)
			{
				SetCursorPos(g_rect.left, g_mousey);
			}
			else if (g_mousex <= g_rect.left)
			{
				SetCursorPos(g_rect.right, g_mousey);
			}
			
			wndProcData.event = WND_EVENT_MOUSEMOVE;
			wndProcData.mouseX = g_mousex;
			wndProcData.mouseY = g_mousey;
		}
		else
		{
			g_mousex = LOWORD(lParam); // Get mouse X pos
			g_mousey = HIWORD(lParam); // Get mouse Y pos
			
			wndProcData.event = WND_EVENT_MOUSEMOVE;
			wndProcData.mouseX = g_mousex;
			wndProcData.mouseY = g_mousey;
		}
	}
	break;
	
	default:
		break;
	}
	
	bool result = s_wndProc( &wndProcData );
	if (result)
		return 0;
	
	return DefWindowProcA(hwnd, uMsg, wParam, lParam);
}

void WND_Init(wndProc_t wndProc)
{
	s_wndProc = wndProc;
	
	// Register class
	WNDCLASSA wc;
	memset(&wc, 0, sizeof(wc));
	wc.lpfnWndProc = WND_WindowProc;
	wc.hInstance = GetModuleHandleA(0);
	wc.lpszClassName = s_wndclassName;
	RegisterClassA(&wc);
}

void WND_Shutdown()
{
	UnregisterClassA(s_wndclassName, GetModuleHandleA(0));
	
	s_wndProc = NULL;
}

WindowHandle_t WND_CreateWindow(int x, int y, int width, int height, const char* title)
{
	// Window Style
	DWORD dwWindowStyle = WS_OVERLAPPEDWINDOW ^ (WS_THICKFRAME | WS_MAXIMIZEBOX);

	// Rect
	RECT rc = { 0, 0, width, height };
	AdjustWindowRect(&rc, dwWindowStyle, FALSE);

	HWND hWnd = CreateWindowA(s_wndclassName, title, dwWindowStyle,
		x, y, (rc.right - rc.left), (rc.bottom - rc.top),
		NULL, NULL, GetModuleHandleA(0), NULL);

	assert(hWnd != INVALID_HANDLE_VALUE);

	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	return hWnd;
}

void WND_DestroyWindow(WindowHandle_t window)
{
	DestroyWindow((HWND)window);
}

void WND_GetWindowSize(WindowHandle_t window, int* x, int* y)
{
	RECT rc;
	memset(&rc, 0, sizeof(rc));

	GetClientRect((HWND)window, &rc);

	*x = (rc.right - rc.left);
	*y = (rc.bottom - rc.top);
}

bool WND_GetWindowGrab(WindowHandle_t window)
{
	return GetFocus() == (HWND)window;
}

void HELPER_GetWindowPos(HWND hWnd, int* x, int* y)
{
	RECT rect = { NULL };
	if (GetWindowRect(hWnd, &rect))
	{
		*x = rect.left;
		*y = rect.top;
	}
}

void WND_SetWindowSize(WindowHandle_t window, int x, int y)
{
	int posX = 0, posY = 0;
	HELPER_GetWindowPos((HWND)window, &posX, &posY);
	MoveWindow((HWND)window, posX, posY, x, y, TRUE);
	UpdateWindow((HWND)window);
}

void WND_SetRelativeMouseMode(int value)
{
	s_shouldWrapMouse = value;
}

void WND_ProcessEvents()
{
	MSG msg;
	memset(&msg, 0, sizeof(msg));
	while (PeekMessageA(&msg, 0, 0, 0, PM_REMOVE))
	{
		TranslateMessage(&msg);
		DispatchMessageA(&msg);
	}
}
