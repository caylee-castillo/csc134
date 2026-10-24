// CSC 134
// M4Lab1
// Caylee Castillo
// 10/24/2026

#include <iostream>
using namespace std;

int main() {
    int height, width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "*" << " ";
    }
    cout << endl;

    cout << "One column" << endl;
    for (int i=0; i < height; i++) {
        cout << "*" << endl;
    }
    
    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        for (int i=0; i < width; i++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
    


