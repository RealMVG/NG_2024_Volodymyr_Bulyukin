#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    const int SIZE = 20; int number[SIZE];int max_value = 0; int actual_size = 0;


    for (int count = 0; count < SIZE; count++){
        cout << "Enter value " << count + 1 << ": "; cin >> number[count];
        if (number[count] > max_value){
            max_value = number[count];
        }
        if (number[count] == 0){
            break;
        }
        actual_size++;
    }
    for (int row = 0; row < actual_size; row++) {
        for (int space = 0; space < (max_value - number[row]); space++) {
            cout << " ";
        }
        for (int col = 0; col < number[row]; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
