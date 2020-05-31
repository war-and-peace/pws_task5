#include <iostream>
#include "Service.h"

#include <string>
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
//#include "ServiceSvc.h"

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "advapi32.lib")



int main()
{
	Service service;
	service.run();

    //HANDLE hToken, hNewToken;
    //if (!OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &hToken)) {
    //    std::cout << "get current process failed, error code: " << WSAGetLastError() << std::endl;
    //    return 1;
    //}
    //if (!DuplicateTokenEx(hToken, MAXIMUM_ALLOWED, nullptr, SecurityImpersonation, TokenPrimary, &hNewToken)) {
    //    std::cout << "could not duplicate handle, error code: " << WSAGetLastError() << std::endl;
    //    return 1;
    //}

    ///*if (!SetPrivilege2(hNewToken, SE_TCB_NAME, true)) {
    //    std::cout << "could not enable tcb privilege, error code" << WSAGetLastError() << std::endl;
    //    std::cin.get();
    //    return 1;
    //}
    //*/

    //DWORD dwSessionId = 2;
    //if (!SetTokenInformation(hNewToken, TokenSessionId, &dwSessionId, sizeof(DWORD))) {
    //    std::cout << "session info change failed, error code: " << WSAGetLastError() << std::endl;
    //    std::cin.get();
    //    return 1;
    //}

    //STARTUPINFOW si;
    //PROCESS_INFORMATION pi;
    //memset(&si, 0, sizeof(si));
    //si.cb = sizeof(si);
    //memset(&pi, 0, sizeof(pi));
    //wchar_t cmdline[] = L"cmd.exe";

    //if (!CreateProcessAsUserW(hNewToken, NULL, cmdline, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi)) {
    //    std::cout << "create process failed, error code: " << WSAGetLastError() << std::endl;
    //    return 1;
    //}
	return 0;
}