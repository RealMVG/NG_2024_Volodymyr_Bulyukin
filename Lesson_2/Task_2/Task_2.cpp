#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5; int number[SIZE];int max_value = 0;

    for (int i = 0; i < SIZE; i++){
        cout << "Imput number " << i + 1 << ": "; cin >> number[i];
        if (number[i] > max_value){
            max_value = number[i];
        }
    }
    for (int i = 1; i <= max_value; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (number[j] >= i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
