#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); // Console Fix

    short height, anim = 1, sleep, Lstart = 0, Lcount;

    cout << "Tringle Animator\nType Tringle height: ", cin >> height;
    if (height > 0){
        cout << "Type Speed of animation (ms): ", cin >> sleep;
        if (sleep > 0){
            cout << "Type how much times animation will play: ", cin >> Lcount;
            if (Lcount > 0){
                system("cls");
                do
                    switch(anim) {
                    case 1:
                        for (int Row = 0; Row < height; Row++) {
                            for (int CharInRow = 0; CharInRow < Row + 1; CharInRow++) {
                                cout << "*";
                            }

                            cout << endl;
                        }
                        Sleep(sleep); system("cls");
                    case 2:
                        for (int Row = height; Row > 0; Row--) {
                            for (int CharInRow = 0; CharInRow < Row; CharInRow++) {
                                cout << "*";
                            }

                            cout << endl;
                        }
                        Sleep(sleep); system("cls");
                    case 3:
                        for (int Row = height; Row > 0; Row--) {

                            for (int CharInRow = 0; CharInRow < height - Row; CharInRow++) {
                                cout << ' ';
                            }

                            for (int CharInRow = 0; CharInRow < Row; CharInRow++) {
                                cout << "*";
                            }

                            cout << endl;
                        }
                        Sleep(sleep); system("cls");
                    case 4:
                        for (int Row = 0; Row < height; Row++) {

                            for (int CharInRow = 0; CharInRow < height - Row - 1; CharInRow++) {
                                cout << ' ';
                            }

                            for (int StarsInRow = 0; StarsInRow < 1 * Row + 1; StarsInRow++) {
                                cout << "*";
                            }

                            cout << endl;
                        }
                        Lstart++;
                        Sleep(sleep); system("cls");
                    }
                while (Lstart < Lcount);
                cout << "Animation loop ended success!!! <3\n";
            } else {
                cout << "Error 3: LoopCount < 0\n";
            }
        } else{
            cout << "Error 2: (ms) < 0\n";
        }
    } else {
        cout << "Error 1: Height < 0\n";
    }
}
