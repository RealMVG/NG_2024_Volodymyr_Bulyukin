#include <iostream>

using namespace std;

int main (){
    double a, b;
    char operation;

    cout << "Calculator :3" << endl;

    cout << "Write what u want to do in format like: 1+1;\nSupported chars (+, -, *, /)" << endl;
    cin >> a; cin >> operation; cin >> b;

    switch(operation){
        case '+':
            cout << "Result: " << (a+b) << endl;
            break;
        case '-':
            cout << "Result: " << (a-b) << endl;
            break;
        case '*':
           cout << "Result: " << (a*b) << endl;
            break;
        case '/':
           cout << "Result: " << (a/b) << endl;
            break;
    }
        return 0;
}
