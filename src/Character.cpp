#include "Character.hpp"

Character::Character(std::string imagePath)
{
	tex.loadFromFile(imagePath);

	sprite.setTexture(tex);
	sprite.setPosition(1, 1);	
}

sf::Sprite& Character::getSprite()
{
	return sprite;
}
