// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "stdafx.h"



BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	ZeroMemory(&g_appInfo, sizeof(g_appInfo));
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		g_appInfo.dwCurrentProcessId = GetCurrentProcessId();
		GetModuleFileNameA(NULL, g_appInfo.szCurrentAppPath, MAX_PATH + 1);
	}break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

