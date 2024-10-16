#include <iostream>

using namespace std;

int main (){

    int salary; int salaryCategory = 0;

    cout << "Write your salary, sir:" << endl;
    cin >> salary;

    if (salary < 999) {
        salaryCategory = 1;
    }
    if (salary > 999) {
        if (salary < 999999) {
            salaryCategory = 2;
        }
    }
    if (salary > 999999) {
        salaryCategory = 3;
    }

    switch (salaryCategory) {
    case 1:
        cout << "Work harder!!!" << endl;
        break;
    case 2:
        cout << "Good job!" << endl;
        break;
    case 3:
        cout << "OMG! U Millionare!" << endl;
        break;
    }
}
