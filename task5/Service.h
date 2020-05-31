#pragma once
#include <string>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include "ServiceSvc.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "advapi32.lib")

class Service {
private:
	static LPWSTR name;
	static SERVICE_STATUS          gSvcStatus;
	static SERVICE_STATUS_HANDLE   gSvcStatusHandle;
	static HANDLE                  ghSvcStopEvent;
	static HANDLE                  hThreadStopEvent;
	static HANDLE                  hThread;

	//static VOID worker();
	static VOID SvcInstall(void);
	static VOID WINAPI SvcCtrlHandler(DWORD);
	static VOID WINAPI SvcMain(DWORD, LPTSTR*);
	static void* createMainThread();
	static VOID ReportSvcStatus(DWORD, DWORD, DWORD);
	static VOID SvcInit(DWORD, LPTSTR*);
	static VOID SvcReportEvent(LPTSTR);
public:
	Service() {};
	int WINAPI run();

};
