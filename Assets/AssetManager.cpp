#include "AssetManager.hpp"

namespace Ethan
{
    void AssetManager::LoadTexture(std::string name, std::string fileName)
    {
        sf::Texture tx;

        if(tx.loadFromFile(fileName))
        {
            this->_textures[name] = tx;
        }
    }

    sf::Texture &AssetManager::GetTexture(std::string name)
    {
        return this->_textures.at(name);
    }

    void AssetManager::LoadFont(std::string name, std::string fileName)
    {
        sf::Font ft;

        if(ft.loadFromFile(fileName))
        {
            this->_fonts[name] = ft;
        }
    }

    sf::Font &AssetManager::GetFont(std::string name)
    {
        return this->_fonts.at(name);
    }

}