#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int number[SIZE];
    for (int i = 0; i<SIZE; i++){
        cout << "Imput number " << i + 1 << ": "; cin >> number[i];
    }
    for (int i = 0; i < SIZE; i++){
        cout << "That's your " << i + 1 << " number: " << number[i] << endl;
    }
}
