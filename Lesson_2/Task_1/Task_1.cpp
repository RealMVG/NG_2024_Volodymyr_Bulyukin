#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 5;
    int number[SIZE];
    for (int count = 0; count<SIZE; count++){
        cout << "Imput number " << count + 1 << ": "; cin >> number[count];
    }
    for (int count = 0; count < SIZE; count++){
        cout << "That's your " << count + 1 << " number: " << number[count] << endl;
    }
}
