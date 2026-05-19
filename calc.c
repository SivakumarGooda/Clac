#include <windows.h>

DWORD WINAPI RunCalc(LPVOID lpParam)
{
    WinExec("calc.exe", SW_SHOW);
    return 0;
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD reason,
    LPVOID reserved
)
{
    if (reason == DLL_PROCESS_ATTACH)
    {
        DisableThreadLibraryCalls(hModule);

        CreateThread(
            NULL,
            0,
            RunCalc,
            NULL,
            0,
            NULL
        );
    }

    return TRUE;
}
