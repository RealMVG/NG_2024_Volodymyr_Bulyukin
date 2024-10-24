#include <iostream>
#include <windows.h>

using namespace std;
int Animation(){
    short height, anim = 1, sleep, Lstart = 0, Lcount;

    cout << "Tringle Animator\nType Tringle height: ", cin >> height;
    if (height > 0) {
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

                            for (int CharInRow = 0; CharInRow < 1 * Row + 1; CharInRow++) {
                                cout << "*";
                            }

                            cout << endl;
                        }
                        Lstart++;
                        Sleep(sleep); system("cls");
                    }
                while (Lstart < Lcount);
                cout << "Animation loop ended success!!! <3\n";
            } else{
                cout << "Error 3: LoopCount < 0\n";
            }
        } else {
            cout << "Error 2: (ms) < 0\n";
        }
    }
    else {
        cout << "Error 1: Height < 0\n";
        return 0;
    }
    return 0;
}
int main() {
    SetConsoleOutputCP(CP_UTF8); // Console Fix
    char YN;
    do
        if (Animation() == 0){
            cout << "Wanna start again? :3 [Y]/[N]"; cin >> YN;
            switch(YN){
            case 'y' & 'Y':
                system("cls");
                Animation();
                break;
            }
            // if (YN == 'Y' || YN == 'y'){
            //     system("cls");
            //     Animation();
            // }
            // else {
            //     return 0;
            // }
        }
    while (YN != 'N' && YN != 'n');
    return 0;
}
