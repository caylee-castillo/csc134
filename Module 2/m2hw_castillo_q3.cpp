/*
csc134
M2HW gold q3
Caylee Castillo
10/04/2026
*/

#include <iostream>
using namespace std;

int main () {

    int pizzasOrdered = 0; // number of pizzas ordered
    int slicesPerPizza = 0; // number of slices per pizza
    int visitors = 0; // number of visitors

    const int slicesPerVisitor = 3; // number of slices per visitor

    // prompt the user for the number of pizzas ordered, slices per pizza, and number of visitors
    cout << "How many pizzas were ordered? ";
    cin >> pizzasOrdered;
    cout << "How many slices are in each pizza? ";
    cin >> slicesPerPizza;
    cout << "How many visitors are there? ";
    cin >> visitors;

    // calculate the total number of slices, the total number of slices needed, and the number of slices left over
    int totalSlices = pizzasOrdered * slicesPerPizza;
    int totalSlicesNeeded = visitors * slicesPerVisitor;
    int slicesLeftOver = totalSlices - totalSlicesNeeded;

    // display the results
    cout << "Total slices of pizza: " << totalSlices << endl;
    cout << "Total slices needed: " << totalSlicesNeeded << endl;
    cout << "Slices left over: " << slicesLeftOver << endl;

    return 0;

}