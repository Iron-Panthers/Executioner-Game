#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP
#include "Character.hpp"
#include <vector>

class GameState
{
public:
	void update();
	void draw();
	void handleInput();
	sf::RenderWindow& getWindow();

	GameState();

	TextureManager* getTextureMgr();

private:
	sf::RenderWindow window;
	std::vector<Character> characters;

	TextureManager textureMgr;

};

#endif