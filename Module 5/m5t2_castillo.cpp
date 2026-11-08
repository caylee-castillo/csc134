// CSC 134
// M5T2 - More Practice with Functions
// Caylee Castillo
// Partner: Gemini
// 11/7/26

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    // Print the numbers 1 to 10 and their squares.
    for (int i = 1; i <= 10; i++) {
        int sq = square(i);
        printAnswerLine(i, sq);
    }
    return 0;
}

// Return the square of num.
int square(int num) {
    return num * num;
}

// Print one line of the answer, for example: 3 squared is 9
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}