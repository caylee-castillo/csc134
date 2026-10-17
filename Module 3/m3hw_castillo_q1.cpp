// CSC 134
// M3HW2 - Gold
// Caylee Castillo
// 10/17/2026

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable to store user input
    string response;

    // Greeting and question
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    // Read user response
    cin >> response;

    // Conditional statements to match the response
    if (response == "yes" || response == "Yes") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    } else if (response == "no" || response == "No") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    } else {
        cout << "If you’re not sure... that’s OK." << endl;
    }

    return 0;
}