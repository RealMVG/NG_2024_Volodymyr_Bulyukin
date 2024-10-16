#include <iostream>

using namespace std;

int main (){
    double a, b; char operation; int result; bool correct = true;

    cout << "Calculator :3" << endl;

    cout << "Write what u want to do in format like: 1+1;\nSupported chars (+, -, *, /)" << endl;
    cin >> a >> operation >> b;

    switch(operation){
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        correct = false;
        cout << "wrong symbol" << endl;
        break;
    }
    if (correct == true){
        cout << result << endl;
    }
}
