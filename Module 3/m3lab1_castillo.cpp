// CSC 134
// M3L1
// Caylee Castillo
// 10/07/2026

#include <iostream>
using namespace std;

void chooseDoor1();
void chooseDoor2();

// beginning of the main() method
int main() {
  
  int choice; 

  // ask the question
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  if (1 == choice) {
    chooseDoor1();
  }
  else if (2 == choice) {
    chooseDoor2();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

void chooseDoor1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Door 1" << endl;
  cout << "You win ... A NEW CAR!" << endl;
}

void chooseDoor2() {
  // this function is called in main if the user chooses 2.
  cout << "You chose Door 2" << endl;
  cout << "You win ... a bottle of floor wax." << endl;
}