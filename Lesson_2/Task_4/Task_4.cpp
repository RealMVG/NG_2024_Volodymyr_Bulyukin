#include <iostream>
#include <string>

using namespace std;

int main() {
    const int ASCII_SIZE = 128;
    int char_count[ASCII_SIZE] = {0};

    string input = "Hello, world!";

    for (char ch : input) {
        if (ch < ASCII_SIZE) {
            char_count[(unsigned char)ch]++;
        }
    }

    for (int i = 0; i < ASCII_SIZE; ++i) {
        if (char_count[i] > 0) {
            cout << "'" << (char)i << "' : " << char_count[i] << '\n';
        }
    }

    return 0;
}
