#include "Character.hpp"

Character::Character(GameState* ptr, std::string imagePath)
{
	tex.loadFromFile(imagePath);

	sprite.setTexture(gameState->getTextureMgr()->getTexture(imagePath));
	sprite.setPosition(1, 1);	
}

sf::Sprite& Character::getSprite()
{
	return sprite;
}

	