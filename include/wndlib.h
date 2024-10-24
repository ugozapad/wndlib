// Render window management
#ifndef WNDLIB_H
#define WNDLIB_H

// enums ...
#include <wndlib_keys.h>

enum WndEventType_t {
	WND_EVENT_NONE,
	
	WND_EVENT_CLOSE,
	
	WND_EVENT_KEYBOARDKEY_DOWN,
	WND_EVENT_KEYBOARDKEY_UP,

	WND_EVENT_MOUSEBUTTON_DOWN,
	WND_EVENT_MOUSEBUTTON_UP,
	
	WND_EVENT_MOUSEMOVE,
	
	WND_EVENT_MAX
};

// Window handle (native handle)
typedef void* WindowHandle_t;

// Window proc data
struct WndProcData_t {
	KeyboardKeys_t key;
	MouseButton_t mousebutton;
	WndEventType_t event;
	int mouseX, mouseY;
};

// Window proc (return true if event is handled, false if not)
typedef bool (*wndProc_t)( const WndProcData_t* procData );

// Initialize the library with custom window proc callback.
void WND_Init(wndProc_t wndProc);

// Shutdown the library
void WND_Shutdown();

// Create window
WindowHandle_t WND_CreateWindow(int x, int y, int width, int height, const char* title);

// Destroy window
void WND_DestroyWindow(WindowHandle_t window);

// Window properties
void WND_GetWindowSize(WindowHandle_t window, int* x, int* y);
bool WND_GetWindowGrab(WindowHandle_t window);
void WND_SetWindowSize(WindowHandle_t window, int x, int y);

// Relative mouse mode
void WND_SetRelativeMouseMode(int value);

// Update window
void WND_ProcessEvents();

#endif // !WNDLIB_H
