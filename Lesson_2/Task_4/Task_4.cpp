#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    string something;
    cout << "Write something: "; cin >> something;
    cout << "Count of symbols at ur message: "<< something.length() << endl;
}
