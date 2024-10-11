#include <iostream>

using namespace std;

int main (){
    double a, b;
    char operation;

    cout << "Calculator" << endl;

    cout << "Type first number:";
        cin >> a;
    cout << "Type second number:";
        cin >> b;
    cout << "Type what you want to do (+, -, *, /)";
        cin >> operation;

    switch(operation){
        case '+':
            cout << "Result: " << (a+b) << endl;
        case '-':
            cout << "Result: " << (a-b) << endl;
        case '*':
            cout << "Result: " << (a*b) << endl;
        case '/':
            cout << "Result: " << (a/b) << endl;
        default:
            cout << "ya tvoi znaki ne ponimat'";
    }
}
