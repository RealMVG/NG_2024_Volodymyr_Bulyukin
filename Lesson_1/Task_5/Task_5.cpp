#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Type height Yelki: ";
    cin >> height;

    if (height > 0) {
        for (int i = 0; i < height; i++) {

            for (int j = 0; j < height - i - 1; j++) {
                cout << ' '; // spaces
            }

            for (int j = 0; j < 2 * i + 1; j++) {
                cout << '*'; // stars
            }

            cout << endl;
        }

        // trunk
        for (int i = 0; i < height - 1; i++) {
            cout << ' '; // spaces
        }
        cout << '*' << endl;
    } else {
        cout << "No, no, no. Without sighted numbers, pls!" << endl;
    }
}


