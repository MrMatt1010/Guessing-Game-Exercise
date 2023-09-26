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



}