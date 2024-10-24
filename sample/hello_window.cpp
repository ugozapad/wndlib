#include <cstddef>

#include "wndlib.h"

WindowHandle_t g_window = NULL;
bool g_shouldClose = false;

static bool WindowProc(const WndProcData_t* procData)
{
	switch (procData->event)
	{
	case WND_EVENT_CLOSE:
		g_shouldClose = true;
		return true;

	default:
		break;
	}

	return false;
}

int main() {
	WND_Init(&WindowProc);

	g_window = WND_CreateWindow(0, 0, 800, 600, "Test");

	while (!g_shouldClose)
	{
		WND_ProcessEvents();
	}

	WND_DestroyWindow(g_window);

	WND_Shutdown();

	return 0;
}