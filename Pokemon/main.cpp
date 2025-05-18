#include <iostream>
#include <string>
using namespace std;

	// Enum class for Pokemon choices || Énumération de classe pour les choix de Pokémon 
enum  class PokemonChoice {
	Charmander,
	Bulbasaur,
	Squirtle,
	InvalidChoice
};

//Enum class for Pokemon types(to be used later) || Énumération de classe pour les types de Pokémon (à utiliser plus tard)
enum class PokemonChoice {
	Fire,
	Electric,
	Water,
	Earth,
	Normal,
};
int main() {
	// Initialize chosen Pokémon with InvalidChoice || Initialiser le Pokémon choisi avec InvalidChoice
	PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
	int player_input = 0;

	// Introduction by the mysterious figure || Introduction par la mystérieuse figure
	cout << "Mysterious Figure: So, you’ve been following Oak’s every word, huh?\n";
	cout << "Cute. But the real battles require more than just basic programming.\n";
	cout << "Today, you're going to clean up some mess in your code.\n";
	cout << "Let's see if you can level up your enums... if you’re ready, of course.\n\n";

	//Present Pokémon choices to the player || Présenter les choix de Pokémon au joueur
	cout << "Choose your Pokémon:\n";
	cout << "1. Charmander - The fire type. A real hothead!\n";
	cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
	cout << "3. Squirtle - The water type. Cool as a cucumber!\n";
	cout << "Enter the number of your choice: ";
	cin >> player_input;

	//Use switch to assign chosen Pokémon based on player input || Utiliser switch pour attribuer le Pokémon choisi en fonction de l'entrée du joueur
	
	switch (player_input)
	{
	case 1:
		chosen_pokemon = PokemonChoice::Charmander;
		cout << "Professor Oak: A fiery choice! Charmarder is your!\n";
		break;

	case 2: 
		chosen_pokemon = PokemonChoice::Bulbasaur;
		cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
		break;
	case 3:
	{
		chosen_pokemon = PokemonChoice::Squirtle;
	
		cout << "Professor Oak : Splendid!Squirtle will keep you cool under pressure!\n";
		break;
	default:
		cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!\n";
		chosen_pokemon = PokemonChoice::Charmander;
		break;
	}
	

	//  Final message announcing the chosen Pokémon || Message final annonçant le Pokémon choisi
	cout << "\nMysterious Figure: You’ve made your choice!\n";
	cout << "Get ready to begin your grand adventure with ";

	//Print personalized message according to the chosen Pokémon || Imprimer un message personnalisé en fonction du Pokémon choisi
	switch (chosen_pokemon) {
		
		case PokemonChoice::Charmander:
			cout << "Charmander! The fiery warrior who burns with passion!";
		case PokemonChoice::Bulbasaur:
			cout << "Bulbasaur! The wise plant guardian ready to grow!";
		break;
		case PokemonChoice::Squirtle:
			cout << "Squirtle! The cool-headed protector of the seas!";
			break;
		default:
			cout << "an unknown Pokémon... hmm, something went wrong!";
			break;
	}
	
	cout << "\n\nMysterious Figure: Now, step into the new era of Pokémon battles...\n";

	return 0;
}
