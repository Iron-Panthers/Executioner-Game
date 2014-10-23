#include "GameState.hpp"
#include "Character.hpp"
#include <sfml/Window.hpp>
#include <sfml/Graphics.hpp>
#include <algorithm>

GameState::GameState()
	: window(sf::VideoMode(800, 600), "SFML Window")
{
	characters.push_back(Character());
	//characters.push_back(Character());
}


void GameState::update()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
	}

	window.clear(sf::Color (0,0,0));
	std::for_each(characters.begin(), characters.end(),
		[&] (Character& character) {
			window.draw(character.getSprite());
		}
	);
	window.display();
}

sf::RenderWindow& GameState::getWindow()
{
	return window;
}