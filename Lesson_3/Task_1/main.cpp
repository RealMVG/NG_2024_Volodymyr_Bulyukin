#include <iostream>
#include <windows.h>

using namespace std;

void PrintSpaces(int spaces) {
    if (spaces > 0) {
        cout << ' ';
        PrintSpaces(spaces - 1);
    }
}


void PrintStars(int stars) {
    if (stars > 0) {
        cout << '*';
        PrintStars(stars - 1);
    }
}

void DrawTree(int stars, int spaces, int height) {
    if (height > 0) { 
        PrintSpaces(spaces);
        PrintStars(stars);
        cout << endl;
        DrawTree(stars + 2, spaces - 1, height - 1);
    } else { 
        PrintSpaces((stars - 2) / 2);
        cout << "*" << endl;
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    short height;
    cout << "Type height Yelki: ";
    cin >> height;

    if (height <= 0) {
        cout << "No, no, no. Without sighted numbers, pls!" << endl;
    } else {
        DrawTree(1, height - 1, height);
    }
}
