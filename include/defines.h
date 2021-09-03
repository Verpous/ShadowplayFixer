#ifndef DEFINES_H
#define DEFINES_H

#include <windows.h>

void InitializeWindows(HINSTANCE instanceHandle);
void RegisterMainWindowClass(HINSTANCE instanceHandle);
void UninitializeWindows(HINSTANCE instanceHandle);
LRESULT CALLBACK MainWindowProcedure(HWND windowHandle, UINT msg, WPARAM wparam, LPARAM lparam);
LRESULT ProcessMainWindowCommand(HWND windowHandle, WPARAM wparam, LPARAM lparam);
void AddNotificationIcon(HWND windowHandle);
void RemoveNotificationIcon(HWND windowHandle);

#endif