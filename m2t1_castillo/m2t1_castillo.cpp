// CSC 134 
// M2T1 - Product sales
// Caylee Castillo
// 9/17/2026
// We're going to make the simplest possible
// "checkout" machine.
#include <iostream>
#include <iomanip> // for two decimal places
using namespace std;

int main() {

  // Set up all variables
  string first_name, last_name, full_name; // holds customer name
  string product = "video games"; // holds product name
  int amount_purchased; // holds amount of product
  double cost_each = 59.99; // holds product cost
  double total_cost; // holds total cost
  

    // Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What is your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;


    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: set all prices to decimal places
    cout << setprecision(2) << fixed;
    
    // Give the result
    cout << "For " << amount_purchased << " " << product << endl;
    cout << "That will be $" << total_cost << endl;
    cout << "Thank you for shopping with us, " << endl;


    return 0;

}
