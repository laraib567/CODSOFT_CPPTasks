/* TASK 01
 NUMBER GUESSING GAME
Create a program that generates a random number and asks the user to guess it. Provide
feedback on whether the guess is too high or too low until the user guesses the correct number.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand(time(0));
   int number = rand() % 101;
   int guess;
   int tries = 0;

   do {
      cout << "Guess a number between 0 and 100 : "<<endl;
      cin >> guess;
      tries++;

      if (guess > number) {
         cout << "Too high!! Try again." << endl;
      } else if (guess < number) {
         cout << "Too low!! Try again." << endl;
      } else {
         cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
      }
   } while (guess != number);
    return 0;
}