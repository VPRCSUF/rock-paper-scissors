#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string replay;
  
  //Start game loop using do-while loop
  do {
    //Random number generator seed
    srand(time(NULL));

    //Randomly generate Computer Generated Hand
    int ComputerHand = rand() % 3 + 1,
        UserHand;
    
    //Introduction and Rules. Prompt user to make their choice
    cout << "\n***************************************";
    cout << "\nLet's play rock, paper, scissors!\n";
    cout << "1 = ROCK\n";
    cout << "2 = PAPER\n";
    cout << "3 = SCISSORS\n";
    cout << "\nInput your choice!\n";

    cin >> UserHand;
    
    //Define all possible scenarios, and output proper outcome
    if (UserHand == ComputerHand) {
      cout << "\nIt's a draw!\n";
    } else if (UserHand == 1 && ComputerHand == 2) {
      cout << "\nI had paper! I win!\n";
    } else if (UserHand == 1 && ComputerHand == 3) {
      cout << "\nI had scissors! I lose!\n";
    } else if (UserHand == 2 && ComputerHand == 1) {
      cout << "\nI had rock! I lose!\n";
    } else if (UserHand == 2 && ComputerHand == 3) {
      cout << "\nI had scissors! I win!\n";
    } else if (UserHand == 3 && ComputerHand == 1) {
      cout << "\nI had rock! I win!\n";
    } else if (UserHand == 3 && ComputerHand == 2) {
      cout << "\nI had paper! I lose!\n";
    } else {
      cout << "\nIt seems like you did not provide a correct hand! Try again.\n"; //If user inputs a number that is not 1-3
    }

    cout << "Would you like to play again? (y/n)...\n";
    cin >> replay;
  } while (replay == "y"); //Will loop through the game while player keeps inputing "y"
  
  //Exit message
  cout << "Good game! Play you again soon!\n";
  return 0;
}
