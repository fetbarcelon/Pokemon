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

	// Pofessor Oak's intermediate dialogue
	cout << "Well done, Trainer!\n";
	cout << "But… wait, you think your journey ends with just choosing a Pokémon?";
	cout << "No, no, no!";
	cout << "You need to confirm your choice and see how the game reacts!";

	// Step 4: Confirm the Choice
	if (choice == 1) {
		cout << "You chose Bulbasaur! A wise choice.\n";
	}
	else if (choice == 2) {
		cout << "You chose Charmander! A Fire choice.\n";
	}
	else if (choice == 3) {
		cout << "You chose Squirtle! A cool choice.\n";
	}
	else if (choice == 4) {
		cout << "You chose Pikachu! An Electric choice.\n";
	}
	else {
		cout << "Invalid choice.Please restart the game.\n";
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
