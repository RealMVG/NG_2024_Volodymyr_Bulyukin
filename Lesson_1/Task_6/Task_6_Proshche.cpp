#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Console Fix

    short anim = 1, sleep = 500;

    do
        switch(anim) {
        case 1:
            cout << "*\n"
                 << "**\n"
                 << "***\n"
                 << "****\n"
                 << "*****\n";
            Sleep(sleep); system("cls");
        case 2:
            cout << "*****\n"
                 << "****\n"
                 << "***\n"
                 << "**\n"
                 << "*\n";

            Sleep(sleep); system("cls");
        case 3:
            cout << "*****\n"
                 << " ****\n"
                 << "  ***\n"
                 << "   **\n"
                 << "    *\n";
            Sleep(sleep); system("cls");
        case 4:
            cout << "    *\n"
                 << "   **\n"
                 << "  ***\n"
                 << " ****\n"
                 << "*****\n";
            Sleep(sleep); system("cls");
        }
    while (true);

}
