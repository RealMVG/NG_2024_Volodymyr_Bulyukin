#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    short height, anim = 1, sleep;

    cout << "Type Tringle height: ";
    cin >> height;
    cout << "Type Speed of animation (ms): ";
    cin >> sleep;


    if (height > 0) {
        system("cls");
        do
            switch(anim) {
            case 1:
                for (int i = 0; i < height; i++) {

                    // for (int j = 0; j < height - i - 1; j++) {
                    //     cout << ' ';
                    // }

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
                Sleep(sleep); system("cls");
        }
        while (true);
    }
    else {
        cout << "No, no, no. Without sighted numbers, pls!" << endl;
    }
}
