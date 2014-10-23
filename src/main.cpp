#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include "Character.hpp"
#include "GameState.hpp"

int main()
{
	GameState gameState;

	while (gameState.getWindow().isOpen())
	{
		gameState.update();
	}

	return EXIT_SUCCESS;

}