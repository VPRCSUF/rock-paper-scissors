//Vincent Phillip Rodriguez (9/27/2019)
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//GLOBAL VARIABLES
int GAMESPLAYED = 0,
    USERWINS = 0,
    COMPUTERWINS = 0,
    DRAWS = 0;
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//SAVE FUNCTIONS

//Saves the total amount of draws
void SaveDraws(int SaveTotalDraws) {
  ofstream myfile;
  myfile.open("totaldraws.sav");
  myfile << SaveTotalDraws;
  myfile.close();
}

//Saves the total amount of wins the computer has
void SaveComputerWins(int ComputerTotalWins) {
  ofstream myfile;
  myfile.open("computerwins.sav");
  myfile << ComputerTotalWins;
  myfile.close();
}

//Saves the total amount of wins the user has
void SaveUserWins(int UserTotalWins) {
  ofstream myfile;
  myfile.open("userwins.sav");
  myfile << UserTotalWins;
  myfile.close();
}

//Saves the total amount of games played
void SaveTotalGames(int TotalGames) {
  ofstream myfile;
  myfile.open("totalgames.sav");
  myfile << TotalGames;
  myfile.close();
}

//Calls on all individual save functions. ***Makes it easier to save data in main***
void SaveGame(int Games, int User, int Computer, int Ties) {
  SaveTotalGames(Games);
  SaveUserWins(User);
  SaveComputerWins(Computer);
  SaveDraws(Ties);
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//LOAD FUNCTIONS

//Loads the total draws
void LoadDraws() {
  ifstream myfile;
  myfile.open("totaldraws.sav");
  myfile >> DRAWS;
  myfile.close();
}

//Loads the total wins the computer has
void LoadComputerWins() {
  ifstream myfile;
  myfile.open("computerwins.sav");
  myfile >> COMPUTERWINS;
  myfile.close();
}

//Loads the total wins the user has
void LoadUserWins() {
  ifstream myfile;
  myfile.open("userwins.sav");
  myfile >> USERWINS;
  myfile.close();
}

//Loads the total amount of games played
void LoadGamesPlayed() {
  ifstream myfile;
  myfile.open("totalgames.sav");
  myfile >> GAMESPLAYED;
  myfile.close();
}

//Calls on all the individual load functions. **Makes it easier to load data in main**
void LoadGame() {
  LoadGamesPlayed();
  LoadUserWins();
  LoadComputerWins();
  LoadDraws();
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//MAIN GAME

int main() {
  //Load saved data
  LoadGame();

  string ReplayOption;

  //Random number generator seed
  srand(time(NULL));

    //Randomly generate Computer Generated Hand
    int ComputerHand = rand() % 3 + 1,
        UserHand;

    cout << "\n-----------------------------------------------------------------";
    cout << "\n***Let's play rock, paper, scissors!***\n";

    //Check if the user has played the computer before
    if (GAMESPLAYED == 0) {
      cout << "It seems like we never played before. Hopefully you're not too good!\n";
    } else {
      //If games have been played before
      cout << "\nWelcome back! Hope you're ready because I sure am!\n";
      cout << "This is where we left off:\n";
      cout << "\nTotal games played: " << GAMESPLAYED << endl;
      cout << "Your total wins: " << USERWINS << endl;
      cout << "Total Computer wins: " << COMPUTERWINS << endl;
      cout << "Total Draws: " << DRAWS << endl;
      //Give Player the option to start over
      cout << "\nWould you like to startover with 0 wins a piece? (y/n)\n";
      string FreshStart;
      cin >> FreshStart;

      if (FreshStart == "y") {
        GAMESPLAYED = 0,
        USERWINS = 0,
        COMPUTERWINS = 0,
        DRAWS = 0;
      }
    }
  //----------------------------------------------------------------------------
  //----------------------------------------------------------------------------
  //START GAME

    //Start game loop using do-while loop
    do {

      //Prompt user to make their choice
      cout << "\n-----------------------------------------------------------------";
      cout << "\nReady? Rock, paper, scissors...\n";
      cout << "1 = ROCK\n";
      cout << "2 = PAPER\n";
      cout << "3 = SCISSORS\n";
      cout << "\nInput your choice!\n";
      cin >> UserHand;
      cout << "\n-----------------------------------------------------------------";

      //Define all possible scenarios, and output proper outcome
      if (UserHand == ComputerHand) {
        cout << "\n***It's a draw!***\n";
        //Add one to Draws
        DRAWS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 1 && ComputerHand == 2) {
        //Paper beats rock
        cout << "\nYou had rock!\n";
        cout << "I had paper!\n";
        cout << "\n***I win!***\n";
        //Add one win to the Computer
        COMPUTERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 1 && ComputerHand == 3) {
        //Rock beats paper
        cout << "\nYou had rock!\n";
        cout << "I had scissors!\n";
        cout << "\n***You win!***\n";
        //Add one win to the User
        USERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 2 && ComputerHand == 1) {
        //Paper beats rock
        cout << "\nYou had paper!\n";
        cout << "I had rock!\n";
        cout << "\n***You win!***\n";
        //Add one win to the User
        USERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 2 && ComputerHand == 3) {
        //Scissors beats paper
        cout << "\nYou had paper!\n";
        cout << "I had scissors!\n";
        cout << "\n***I win!***\n";
        //Add one win to the Computer
        COMPUTERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 3 && ComputerHand == 1) {
        //Rock beats scissors
        cout << "\nYou had scissors!\n";
        cout << "I had rock!\n";
        cout << "\n***I win!***\n";
        //Add one win to the Computer
        COMPUTERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else if (UserHand == 3 && ComputerHand == 2) {
        //Scissors beats paper
        cout << "\nYou had scissors!\n";
        cout << "I had paper!\n";
        cout << "\n***You win!***\n";
        //Add one win to the User
        USERWINS += 1;
        //Add to total games played
        GAMESPLAYED +=1;
      } else {
      //If user inputs a number that is not 1-3
      cout << "\nIt seems like you did not provide a correct hand! Try again.\n";
      }
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//DISPLAY STATS

      //Display total games played, User wins, Computer wins, and Draws
      cout << "\nTotal games played: " << GAMESPLAYED << endl;
      cout << "Your total wins: " << USERWINS << endl;
      cout << "Total Computer wins: " << COMPUTERWINS << endl;
      cout << "Total Draws: " << DRAWS << endl;
      cout << "-----------------------------------------------------------------";

      //Ask user if they want to play again.
      cout << "\nWould you like to play again? (y/n)...\n";
      cin >> ReplayOption;

      //Loop through the game while player keeps inputing "y"
    } while (ReplayOption == "y");

//------------------------------------------------------------------------------
//EXIT MESSAGE

  string SaveOption;

  //Ask user if they want to save the game stats
  cout << "\nWould you like to save your progress? (y/n)...\n";
  cin >> SaveOption;

  //If they want to save, then call on the SaveGame function and save the game stats
  if (SaveOption == "y") {
    SaveGame(GAMESPLAYED, USERWINS, COMPUTERWINS, DRAWS);
    cout << "\n***I had fun! Hope we can play again soon!***\n";
  } else {
  //If they don't, then the game will load from the previous save
    cout << "\n***I had fun! Hope we can play again soon!***\n";
  }

  return 0;
}
