#include <iostream>
#include <windows.h>

int main()
{
    system("color 3");
    system("echo Diskdrive");
    system("wmic diskdrive get serialnumber");
    system("echo Baseboard");
    system("wmic baseboard get serialnumber");
    system("echo Cpu");
    system("wmic cpu get serialnumber");
    system("echo Bios");
    system("wmic bios get serialnumber");
    system("echo Ram");
    system("wmic MEMORYCHIP get serialnumber");
    system("pause");
}

