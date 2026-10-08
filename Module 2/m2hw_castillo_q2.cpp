/* CSC 134 
M2HW - Gold
Caylee Castillo
10/04/2026
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    //Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // variables
    double length, // the crates length
            width, // the crates width
            height, // the crates height
            volume, // the volume of the crate
            cost,   // the cost to build the crate
            charge, // the customer charge for the crate
            profit; // the profit made on the crate

        // Set the desired output formatting for numbers.
        cout << setprecision(2) << fixed << showpoint;

        // prompt the user for the crate's length, width, and height
        cout << "Enter the dimensions of the crate (in feet):\n";
        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;

        // Calculate the crates volume, the cost to produce it, 
        // the charge to the customer, and the profit.
        volume = length * width * height;
        cost = volume * COST_PER_CUBIC_FOOT;
        charge = volume * CHARGE_PER_CUBIC_FOOT;
        profit = charge - cost;

        // Display the calculated data 
        cout << "The volume of the crate is ";
        cout << volume << " cubic feet.\n";
        cout << "Cost to build: $" << cost << endl;
        cout << "Charge to customer: $" << charge << endl;
        cout << "Profit: $" << profit << endl;
        return 0;


}
