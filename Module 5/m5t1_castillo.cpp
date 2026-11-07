// CSC 134
// M5T1
// Caylee Castillo
// 11/7/2026

#include <iostream>
#include <string>
using namespace std;

// Function Declarations
string formatAnswer(int answer);
void printAnswer(string msg);

int main() {
    int answer = 5;
    string message;
    
    message = formatAnswer(answer);
    
    printAnswer(message);
    
    return 0;
}

// Function Definitions

string formatAnswer(int answer) {
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);
    return answerMessage;
}

void printAnswer(string msg) {
    cout << msg << endl;
}