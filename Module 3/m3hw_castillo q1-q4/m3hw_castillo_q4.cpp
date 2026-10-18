/*
CSC 134
M3HW Gold - Question 4
Caylee Castillo
10/17/2026
*/

#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    // Seed the random number generator using current time
    srand(time(0));

    // Generate two random single digit numbers (0 through 9)
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    int correctAnswer = num1 + num2;
    int userAnswer;

    // Display the addition question
    cout << "What is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    // Check if the user's answer matches the correct answer
    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect." << endl;
    }

    return 0;
}