//This is a guessing game where you get three chances to get the number right

#include <iostream>


int main() {

	std::cout << "\t\t\tGuess Game\n";
	std::cout << "\t\t\t**********\n";

	std::cout << "You will get three chances to guess the number\n ";
	std::cout << "Guess the number between one and ten\n ";

	srand(time(0));
	int randomNumber = (rand() % (10 - 1)) + 1;
	int guess;

	int chancesLeft = 3;
	for (int i = 1; i <= 3; i++) {
		std::cout << "\n\nEnter your guess ";
		std::cin >> guess;
		if (guess == randomNumber) {
			std::cout << " You guessed the right number";
			break;
		}
		else if (guess > randomNumber) {
			std::cout << guess << " Sorry wrong guess, try again";
		}
		
	}

}