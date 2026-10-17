/*
CSC 134
M3HW Gold
Caylee Castillo
10/17/2026
*/

#include <iostream>
#include <iomanip> // for 2 decimal places
using namespace std;

int main() {
    // Declare variables
    double meal_price;
    int order_type;             // 1 for Dine In, 2 for to go
    double tax_percent = 0.08;  // 8% tax
    double tip_percent = 0.15;  // 15% tip for dine in
    double tax_amount;          // tax in dollars
    double tip_amount = 0.0;    // tip in dollars
    double total;               // price + tax + tip

    // Greet user
    cout << "Welcome to our CSC 134 Restaurant!" << endl;

    // Prompt for the meal price
    cout << "Please enter the price of your meal: $";
    cin >> meal_price;

    // Prompt for order type
    cout << "Is your order for dine in or to go?" << endl;
    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> order_type;

    // Calculate tax
    tax_amount = meal_price * tax_percent;

    // Calculate tip if dine in
    if (order_type == 1) {
        tip_amount = meal_price * tip_percent;
    }

    // Calculate total price
    total = meal_price + tax_amount + tip_amount;

    // Print the receipt
    cout << setprecision(2) << fixed << endl;
    cout << "Thank you for dining with us!" << endl;
    cout << "==============================" << endl;
    cout << "Meal Price\t$" << meal_price << endl;
    cout << "Tax (8%)\t$" << tax_amount << endl;
    
    // Display tip as 0.00 if the order is to go
    cout << "Tip (15%)\t$" << tip_amount << endl;
    cout << "==============================" << endl;
    cout << "Total\t\t$" << total << endl;
    cout << endl;

    return 0; 
}