#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Character 
{
public:
	Character();
	sf::Sprite& getSprite();
private:
	sf::Vector2<float> position;
	sf::Sprite sprite;
	sf::Texture tex;


};

#endif