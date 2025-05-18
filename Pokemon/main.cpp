#include <iostream>
#include <string>
using namespace std;

	//Step 1: Crear enum PokemonChoice
enum PokemonChoice {
	Bulbasaur = 1,
	Charmander,
	Squirtle,
	InvalidChoice
};
int main() {
    // Step 2: Variable inicializada con InvalidChoice
	PokemonChoice chosen_pokemon = InvalidChoice;
	int player_input = 0;

	// Step 3: Mensaje de introducción de Profesor Oak
	cout << "Professor Oak: Ah! Look at you, Trainer! You’ve come so far, but now…\n";
	cout << "it’s time for a choice that will shape your entire adventure.\n\n";
	cout << "Professor Oak: Choose your Pokémon:\n";
	cout << "1. Charmander - The fire type. A real hothead!\n";
	cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
	cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
	cout << "Enter the number of your choice: ";
	cin >> player_input;

	//Step 4 & 5: switch para asignar elección y manejar opción inválida (con Charmander por defecto)
	
	switch (player_input)
	{
	case 1:
		chosen_pokemon = Charmander;
		cout << "Professor Oak: A fiery choice! Charmarder is your!\n";
		break;

	case 2: 
		chosen_pokemon = Bulbasaur;
		cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
		break;
	case 3:
		chosen_pokemon = Squirtle;
		cout << "Professor Oak : Splendid!Squirtle will keep you cool under pressure!\n";
		break;
	default:
		cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!\n";
		chosen_pokemon = Charmander;
		break;
	}
	

	//  Bonus: Mensaje final motivador
	cout << "\nProfessor Oak: You’ve made your choice!\n";
	cout << "Get ready to begin your grand adventure with ";

	switch (chosen_pokemon) {
		
		case Charmander:
			cout << "Charmander! The fiery warrior who burns with passion!";
		case Bulbasaur:
			cout << "Bulbasaur! The wise plant guardian ready to grow!";
		break;
		case Squirtle:
			cout << "Squirtle! The cool-headed protector of the seas!";
			break;
		default:
			cout << "an unknown Pokémon... hmm, something went wrong!";
			break;
	}
	
	cout << "\n\nProfessor Oak: Now, take your first step into the vast world of Pokémon…\n";
	cout << "Who knows what mysteries await you?\n";

	return 0;
}
