#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5; int number[SIZE]; int max_value = 0;

    for (int count = 0; count < SIZE; count++){
        cout << "Imput number " << count + 1 << ": "; cin >> number[count];
        if (number[count] > max_value){
            max_value = number[count];
        }
    }
    for (int count = 1; count <= max_value; count++) {
        for (int index = 0; index < SIZE; index++) {
            if (number[index] >= count) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
