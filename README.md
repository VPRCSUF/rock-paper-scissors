# Rock-Paper-Scissors
(9/27/2019)

Play rock, paper, scissors with your computer and see who is the better player!

ABOUT THIS PROJECT:

  My project started out as a basic "one and done" program. The program would go through one game and that was it. When you play your friends in rock, paper, scissors, you two would usually play more than one game. "Best two out of three!...Okay best three out of five!...Okay best 4 out of seven!" and so on.
  
  So I thought, why not have this program ask to play you again after every game. And so I made the program do exactly that using a good 'ol Do-While Loop! For as long as you, the user, continue to say "yes" to the computer when it asks if you want to play again, the program will loop through the main game until you say otherwise.
  
  Now the program was running as if you were playing rock, paper, scissors with someone in real life! How could I step this up a notch? Why don't we see the total wins you have and the total wins the computer has? Also, how many draws occured? Wow, it's been three hours...how many games were played? Well, you guessed it, I made that happen too. Now after every game, the program will record who won, if the game was a draw, and will add on to the total amount of games played. 
  
  These features are great and all, but there was one problem. What happens when the user exits the program? All of that data would get lost and everything will start at zero! All of those games played in those three hours are no lost! Well, I came up with a solution to that! Why don't I just have the program save that data? After figuring out how <fstream> works and how to write to files using <ofstream> and read from files using <ifstream>, I was now able to save all of that data. So now, when the user exits the program and comes back, the program can now load that data upon the game startup. You also have the option to start over and set all of that data back to zero.
  
  This project was very simple at first, but I wanted to take it even further. I learned a lot from this simple project. I am now more comfortable with do-while loops, fstream, ofstream, and ifstream, and if if-else else statements. I can't wait to see what else I can do with C++ and the many other ways I can utilize the tools used in this program in future programs.
  
  Hope you enjoy my game!
  
  -Vincent Phillip Rodrigez
