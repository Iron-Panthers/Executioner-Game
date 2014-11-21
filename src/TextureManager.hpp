#ifndef TEXTUREMANAGER_HPP
#define TEXTUREMANAGER_HPP
#include <vector>
#include <utility>
#include <map>

class TextureManager
{
public:
	/**
	 * This function adds a texture to our textures map.
	 */
	void addTexture(const std::string& path);

	/**
	 * Returns a texture according to the path.
	 */
	sf::Texture& getTexture(const std::string& path);

private:
	/**
	 * Stores the textures for retrieval from the sprites.
	 */
	std::map<std::string, sf::Texture> textures;
};

#endif