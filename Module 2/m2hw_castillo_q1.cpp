// CSC 134
// M2HW - Gold
// Caylee Castillo
// 10/04/2026

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string accountName;
    int accountNumber = 234567;
    double startingBalance = 0.0;
    double depositAmount = 0.0;
    double withdrawalAmount = 0.0;
    double finalBalance = 0.0;

    // Ask user for their name
    cout << "Enter the name on the account ($): " << endl;
    getline(std::cin, accountName);

    // Ask for revelant banking information
    cout << "Enter starting account balance ($): " << endl;
    cin >> startingBalance;

    cout << "Enter amount of deposit ($): " << endl;
    cin >> depositAmount;

    cout << "Enter amount of withdrawl ($): " << endl;
    cin >> withdrawalAmount;

    // Final balance calculation
    finalBalance = startingBalance + depositAmount - withdrawalAmount;

    // Display account information
    cout << "=========================================" << endl;
    cout << "             Account Summary     " << endl;
    cout << "=========================================" << endl;
    cout << "Name on the account: " << accountName << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << setprecision(2) << fixed;
    cout << "Final account balance: $" << finalBalance << endl;
    cout << "=========================================" << endl;


    return 0;
}