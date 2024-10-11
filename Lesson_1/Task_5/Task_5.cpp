#include <iostream>

using namespace std;

void drawTree(int height) {
    for (int i = 0; i < height; i++) {

        for (int j = 0; j < height - i - 1; j++) {
            cout << ' '; // Пробелы
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            cout << '*'; // Звёздочки
        }

        cout << endl;
    }


    // Cтвол ёлки
    for (int i = 0; i < height - 1; i++) {
        cout << ' '; // Пробелы
    }
    cout << '*' << endl;
}
int main() {
    int height;

    cout << "Type height Yelki: ";
    cin >> height;

    if (height > 0) {
        drawTree(height);
    } else {
        cout << "No, no, no. Without sighted numbers, pls!" << endl;
    }

    return 0;
}
