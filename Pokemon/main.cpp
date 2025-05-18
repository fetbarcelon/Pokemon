#include <iostream>
using namespace std;
int main() {
    
	//Step 1: Greet the Player
    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "Ah, it's so exciting to meet a new Trainer!\n\n";
	//Step 2: Display the Pokémon Choices
	

	cout << "You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur, 2. Charmander, 3. Squirtle\n";
	
	cout << "Which Pokémon would you like to choose? Enter the number (1-3):";
	// Step 3: Capture the Player’s Choice
	int choice;
	cin >> choice;
	cout << "\n";

	switch (choice)
	{
	case 1:
		std::cout << "Professor Oak: A fiery choice! Charmarder is your!" << std::endl;
		break;

	case 2: 
		std::cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!" << std::endl;
		break;
	case 3:
		std::cout << "Professor Oak : Splendid!Squirtle will keep you cool under pressure!" << std::endl;
		break;
	default:
		std::cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!" << std::endl;
		break;
	}
	

	// Pofessor Oak's Final Words
	cout << "Ah, an excellent choice!\n";
	cout << "But beware, Trainer,";
	cout << "this is only the beginning.";
	cout << "Your journey is about to unfold.";
	cout << "Now let’s see if you’ve got what it takes to keep going!";
	cout << "Good luck, and remember… Choose wisely!";

	return 0;
}
