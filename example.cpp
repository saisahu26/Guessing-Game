//Saikapish Sahu
//9/5/23
//C++ Guessing Game
//Enter a number, see if you guessed the right number!
////Saikapish Sahu
//9/5/23
//C++ Guessing Game
//Enter a number, see if you guessed the right number!
//The 3 rules of C++:
//1. No global variables
//2. No strings (chars and cstrings allowed)
//3. include <iostream> not studio
#include <iostream>
using namespace std;

int main ()
{
  bool play = true; //used to see if player wants to play again
  char again = ' '; //var used for seeing if player wants to play again (y) or not (n)
  while (play) { //master loop
    srand(time(NULL)); //this is a function called from the C++ library that calls a random number between 0 and 100, inclusive

    // The following vars are used to store the random num, the input num, and the turn counter
    int num = (rand() % 100);

    int guess = 0;

    int counter = 1;

    cout << "Enter a number betwwen 0 and 100, inclusive!" << endl;
    
    cin >> guess;
    
    //used to check if you already gussed the number on the first try
    if (guess == num) {
      cout << "You guessed the number!" << endl;
      cout << "Turns used: 1" << endl;
    }
    while (guess != num) { //if not, continue to guess. These loops determine if the guess, is above, below or exact!
      counter++;

      if (guess == num) {
      }

      else if (guess > num) {
	cout << "You're guess is too high! Guess again..." << endl;
	  }

      else if (guess < num) {
	      cout << "You're guess is too low! Guess again..." << endl;
      }

      cin >> guess;
    }

    if (counter > 1) { //Once you guess the right number and break from the loop, AND given that your turn is greater than 1, you won the game!
      cout << "You guessed the number!" << endl;
      cout << "Turns used: " << counter << endl;
    }

    //used to see if the player wants a next game
    
    cout << "Do you want to play again? y or n... " << endl;

    cin >> again;

    cin.clear();
    cin.ignore(100, '\n');
    
    if (again == 'y') {
      counter = 0;
      play = true;
    }

    else if (again == 'n') {
      play = false;
    }

    else {
      cout << "Type in 'y' or 'n'" << endl;
    }
    

  }
	  


	    

    return 0;
  
 
  
}
