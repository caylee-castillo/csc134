// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Caylee Castillo
// 11/7/26

#include <iostream>
using namespace std;

// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_trap_door();
void choice_chest_options();

int main() {
    cout << "Welcome to the Choose Your Own Adventure Game!" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

// Main menu with input validation loop
void main_menu() {
    int choice;
    do {
        cout << "\n--- MAIN MENU ---" << endl;
        cout << "1. Enter through the front door" << endl;
        cout << "2. Check out the back door" << endl;
        cout << "3. Go back home" << endl;
        cout << "4. Quit game" << endl;
        cout << "Choose an option (1-4): ";
        cin >> choice;

        if (choice == 1) {
            choice_front_door();
        } else if (choice == 2) {
            choice_back_door();
        } else if (choice == 3) {
            choice_go_home();
        } else if (choice == 4) {
            cout << "Exiting the adventure..." << endl;
        } else {
            cout << "Invalid choice! Please enter 1, 2, 3, or 4." << endl;
        }
    } while (choice != 4);
}

// Function Definitions for Story Branches

// Choice 1: Front Door - Trap Door
void choice_front_door() {
    cout << "\nYou step through the heavy front door." << endl;
    cout << "Suddenly—a hidden trap door falls out from right under your feet!" << endl;
    cout << "You plunge into the dark abyss below..." << endl;
    
    choice_trap_door();
}

// Choice 2: Back Door - Chest with Sword & Shield
void choice_back_door() {
    cout << "\nYou sneak around to the back door and approach the mysterious wooden chest." << endl;
    cout << "You slowly open the chest lid..." << endl;
    cout << "Inside, you find a shining sword and a sturdy steel shield!" << endl;
    
    choice_chest_options();
}

// Choice 3: Go Home - World Shrouded in Darkness
void choice_go_home() {
    cout << "\nYou decide it's not worth the risk and walk back home." << endl;
    cout << "Everything seems completely normal for a few days..." << endl;
    cout << "Then, without warning, darkness shrouds the earth and evil reigns supreme!" << endl;
}

// Sub-choice for Choice 1: Trap Door Arena
void choice_trap_door() {
    int sub_choice;
    cout << "\nYou land in a subterranean arena, facing an evil warrior!" << endl;
    cout << "1. Try to escape and go home" << endl;
    cout << "2. Fight the evil emptyhanded" << endl;
    cout << "Choose an option (1 or 2): ";
    cin >> sub_choice;

    if (sub_choice == 1) {
        choice_go_home();
    } else if (sub_choice == 2) {
        cout << "\nYou charge forward with bare fists! You fight bravely, but fighting emptyhanded proves fatal..." << endl;
    } else {
        cout << "\nIndecision costs you! The enemy strikes while you hesitate." << endl;
    }
}

// Sub-choice for Choice 2: Using the Sword & Shield
void choice_chest_options() {
    int sub_choice;
    cout << "\nWhat would you like to do with your new gear?" << endl;
    cout << "1. Equip the sword and shield and march into the castle" << endl;
    cout << "2. Leave the gear behind and go home" << endl;
    cout << "Choose an option (1 or 2): ";
    cin >> sub_choice;

    if (sub_choice == 1) {
        cout << "\nArmed with steel and courage, you march inside and defeat the forces of darkness!" << endl;
        cout << "You are declared a hero!" << endl;
    } else if (sub_choice == 2) {
        choice_go_home();
    } else {
        cout << "\nYou trip over the gear, making a loud noise that alerts the guards!" << endl;
    }
}