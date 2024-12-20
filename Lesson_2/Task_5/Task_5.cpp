#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    string input = "234Hello&*&#world#$%a";
    cout << "Input line: " << input << endl;

    int word_count = 0;
    bool in_word = false;

    for (char ch : input) {
        if (isalpha(ch)) { // if this line will be "if(isalpha(ch) && !inword)"
            if (!in_word) { // Result will be uncorrect for some reason.
                in_word = true;
                ++word_count;
            }
        } else {
            in_word = false;
        }
    }

    cout << "Words count: " << word_count << endl;

    return 0;
}
