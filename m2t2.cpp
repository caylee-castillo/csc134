/*
CSC 134
M2T2 - Receipt Calculator
Caylee Castillo
09/26/2026
*/

#include <iostream>
#include <iomanip> // for 2 decimal places
using namespace std;

int main() {
    // Purpose - Create a simple receipt
    // should also handle sales tax (8%)

    // Declare variables
    string item = "🍔 Burger";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;          // tax in dollars
    double total;               // price plus tax


    // Greet user and take the order
    cout << "Welcome to our CSC 134 Restaurant!" << endl;
    cout << "You ordered one" << item << "." << endl;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of item
    total = item_price + tax_amount; 



    // Print the receipt
    cout << setprecision(2) << fixed;
    cout << total << endl;

    return 0; // no errors

}
