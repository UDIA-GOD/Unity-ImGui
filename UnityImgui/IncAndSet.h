#pragma once
//Includes
#include <Windows.h>
#include <d3d11.h>
#include <gl/GL.h>
#include <dxgi.h>
#include "kiero.h"
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"
#include "iostream"
#include <MinHook.h>
#include <cstdio>
#include <cstdint>

//Defines
typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

//Settings
#define MenuButton VK_INSERT //Toggle Menu Key
#define UnHookButton VK_END //UnHook Key