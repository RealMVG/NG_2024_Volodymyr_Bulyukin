#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(CP_UTF8);

    int salary;

    cout << "Write your salary, sir:" << endl;
    cin >> salary;

    if (salary < 999) {
        cout << "Work harder!!!" << endl;
    }
    if (salary > 999) {
        if (salary < 999999){
            cout << "Good job!" << endl;
        }
        if (salary > 999999) {
            cout << "OMG! U Millionare!" << endl;
        }
    }
}
