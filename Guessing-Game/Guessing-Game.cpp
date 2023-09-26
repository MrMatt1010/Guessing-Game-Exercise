//This is a guessing game where you get three chances to get the number right

#include <iostream>


int main() {
	// This code is just to add the title of the game and instructions
	std::cout << "\t\t\tGuess Game\n";
	std::cout << "\t\t\t**********\n";

	std::cout << "You will get three chances to guess the number\n ";
	std::cout << "Guess the number between one and ten\n ";


	// This part of the program generates the random number
	srand(time(0));
	int randomNumber = (rand() % (10 - 1)) + 1;
	int guess;

	//This is where the players guesses are made and the correct output is given
	int chancesLeft = 3;
	for (int i = 1; i <= 3; i++) {
		std::cout << "\n\nEnter your guess ";
		std::cin >> guess;
		if (guess == randomNumber) {
			std::cout << " You guessed the right number";
			break;
		}
		else if (guess > randomNumber) {
			std::cout << guess << " Was the wrong guess, try again ";
		}
		chancesLeft--;
		if (chancesLeft == 0) {
			std::cout << "\nBetter luck next time ";
			std::cout << randomNumber << " Was the correct number";
		}
	}
	return(0); 
}