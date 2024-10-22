#include <iostream>

using namespace std;

int main (){
    double FirstN, SecondN; char operation; int result;

    cout << "Calculator :3" << endl;

    cout << "Write what u want to do in format like: 1+1;\nSupported chars (+, -, *, /)" << endl;
    cin >> FirstN >> operation >> SecondN;

    switch(operation){
    case '+':
        result = FirstN + SecondN;
        break;
    case '-':
        result = FirstN - SecondN;
        break;
    case '*':
        result = FirstN * SecondN;
        break;
    case '/':
        result = FirstN / SecondN;
        break;
    default: // is this is capipasta, sir?
        cout << "wrong symbol" << endl;
        break;
    }
    if (operation == '+' || '-' || '*' || '/'){
        cout << result << endl;
    }
}
