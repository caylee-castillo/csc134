/*
CSC 134
M3HW Gold - Question 3
Caylee Castillo
10/17/2026
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice1, choice2;

    // Introduction & Setting
    cout << "==============================================" << endl;
    cout << "      KINGDOM HEARTS: HALLOWEEN TOWN          " << endl;
    cout << "==============================================" << endl;
    cout << "Spooky lanterns flicker in the graveyard of Halloween Town." << endl;
    cout << "Suddenly, a swarm of Search Ghost Heartless rises from the tombs!\n" << endl;

    // First Choice
    cout << "What do you do?" << endl;
    cout << "1. Inspect the strange glowing tombstone near the entrance." << endl;
    cout << "2. Leap over the iron fence to reach Jack Skellington." << endl;
    cout << "Enter 1 or 2: " << endl;
    cin >> choice1;

    // First Decision
    if (choice1 == 1) {
        // Game Over Path
        cout << "You approach the tombstone, but it opens into a trap door!" << endl;
        cout << "GAME OVER - Locked in Oogie's lair." << endl;
    } 
    else if (choice1 == 2) {
        // Progression Path
        cout << "You vault over the fence and land beside Jack Skellington!" << endl;
        cout << "Jack points toward a giant creeping Shadow Heartless." << endl;
        cout << "On the ground nearby lies a glowing pumpkin bomb.\n" << endl;

        cout << "What do you do next?" << endl;
        cout << "1. Use your Keyblade to launch the pumpkin bomb at the Heartless." << endl;
        cout << "2. Try to pick up the pumpkin bomb with your bare hands." << endl;
        cout << "Enter 1 or 2: " << endl;
        cin >> choice2;

        // Second Decision
        if (choice2 == 1) {
            // Victory Path
            cout << "You strike the pumpkin bomb like a baseball! It explodes into green flames," << endl;
            cout << "banishing the Heartless back into the shadows." << endl;
            cout << "Jack laughs with joy: 'Splendid trick! Halloween is saved!'" << endl;
            cout << "VICTORY - You saved Halloween Town!" << endl;
        } 
        else if (choice2 == 2) {
            // Defeat Path
            cout << "The pumpkin bomb bursts in your hands before you can throw it!" << endl;
            cout << "The explosion leaves you dizzy as the Heartless overwhelm the area." << endl;
            cout << "DEFEAT - Your trick backfired!" << endl;
        } 
    
    }

    return 0;
}