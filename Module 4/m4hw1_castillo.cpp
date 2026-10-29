// CSC 134
// M4HW1
// Caylee Castillo
// 10/29/2026

#include <iostream>
using namespace std;

int main() {

    /* Bronze
    //declare variables
    int firstNum, secondNum, answer;
    firstNum = 5;

    for (int i=1; i<= 12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " << i << " is " <<
        answer << endl;

    }
}
    */

    /* Silver

    int userNum; 
    cout << "Enter a number from 1 to 12 ";
    cin >> userNum;

    for (int i=1; i<=12; i++) {
        cout << userNum << " times " << i << " is " << userNum * i << "." << endl;

    }

    return 0;
}  
    */

    // Gold 
    int userNum;

    cout << "Enter a number from 1 to 12 ";
    cin >> userNum;

    // Input validation loop
    while (userNum < 1 || userNum > 12) {
        cout << "Invalid entry. Please enter a number from 1 to 12: ";
        cin >> userNum;
    }

    for (int i = 1; i <= 12; i++) {
        cout << userNum << " times " << i << " is " << userNum * i << "." << endl;
    }
}