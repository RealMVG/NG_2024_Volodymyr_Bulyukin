#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int number[SIZE];
    for (int count = 0; count<SIZE; count++){
        cout << "Input number " << count + 1 << ": "; cin >> number[count];
    }
    cout << "That's your numbers: "<< endl;
    for (int count = 0; count < SIZE; count++){
        cout << number[count];
        if (count < SIZE - 1) { cout << ", ";} else {cout << "." << endl;}
    }
}
