#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Console Fix

    short height, anim = 1, sleep, Lstart = 0, Lcount;

    cout << "Tringle Animator\nType Tringle height: ", cin >> height;
    cout << "Type Speed of animation (ms): ", cin >> sleep, cout << "Type how much times animation will play: ", cin >> Lcount;

    if (height > 0 && Lcount > 0 && sleep > 0) {
        system("cls");
        do
            switch(anim) {
            case 1:
                for (int i = 0; i < height; i++) {
                    for (int j = 0; j < i + 1; j++) {
                        cout << "*";
                    }

                    cout << endl;
                }
                Sleep(sleep); system("cls");
            case 2:
                for (int i = height; i > 0; i--) {
                    for (int j = 0; j < i; j++) {
                        cout << "*";
                    }

                    cout << endl;
                }
                Sleep(sleep); system("cls");
            case 3:
                for (int i = height; i > 0; i--) {

                    for (int j = 0; j < height - i; j++) {
                        cout << ' ';
                    }

                    for (int j = 0; j < i; j++) {
                        cout << "*";
                    }

                    cout << endl;
                }
                Sleep(sleep); system("cls");
            case 4:
                for (int i = 0; i < height; i++) {

                    for (int j = 0; j < height - i - 1; j++) {
                        cout << ' ';
                    }

                    for (int j = 0; j < 1 * i + 1; j++) {
                        cout << "*";
                    }

                    cout << endl;
                }
                Lstart++;
                Sleep(sleep); system("cls");
        }
        while (Lstart < Lcount);
        cout << "Animation loop ended success!!! <3\n";
    }
    else {
        cout << "No, no, no. Without sighted numbers, pls! (Error # 1)" << endl;
    }
}