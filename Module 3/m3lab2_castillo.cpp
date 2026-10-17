// CSC 134
// M3L2
// Caylee Castillo
// 10/17/2026

#include <iostream>

using namespace std;

int main() {
    // Variable to store the user's numerical input
    double numericalGrade;

    // Prompt the user for input
    cout << "Enter your numerical grade: ";
    cin >> numericalGrade;

    // Determine the letter grade based on ranges
    char letterGrade;

    if (numericalGrade >= 90 && numericalGrade <= 100) {
        letterGrade = 'A';
    } else if (numericalGrade >= 80 && numericalGrade < 90) {
        letterGrade = 'B';
    } else if (numericalGrade >= 70 && numericalGrade < 80) {
        letterGrade = 'C';
    } else if (numericalGrade >= 60 && numericalGrade < 70) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    // Display the result
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}