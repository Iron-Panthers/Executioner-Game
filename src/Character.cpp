#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Character.hpp"

Character::Character()

{
	sf::Texture tex;
	tex.loadFromFile("../imgs/bbc.jpeg");

	sprite = sf::Sprite(tex);
	sprite.setPosition(1, 1);	
}

#endif
