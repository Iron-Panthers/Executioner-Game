#include "TextureManager.hpp"

void TextureManager::addTexture(const std::string& path)
{
	sf::Texture tex;
	tex.loadFromFile(path);

	textures.emplace(path, tex);
}

sf::Texture& TextureManager::getTexture(const std::string& path)
{
	return textures[path];
}