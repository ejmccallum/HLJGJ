#include "InputManager.hpp"

namespace Ethan
{

    bool InputManager::IsSpriteClicked(sf::Sprite obj, sf::Mouse::Button button,
                                    sf::RenderWindow &window)
    {
        /*
        if( sf::Mouse::isButtonPressed(button))
        {
            sf::IntRect rect(obj.getPosition().x, 
                             obj.getPosition().y,
                             obj.getGlobalBounds().width,
                             obj.getGlobalBounds().height);
            
            if (rect.contains(sf::Mouse::getPosition(window)))
            {
                return true;
            }
        }
        
        return false;
        */
        sf::IntRect rect(obj.getGlobalBounds());

        return sf::Mouse::isButtonPressed( button ) && 
            rect.contains( sf::Mouse::getPosition( window) );

    }

    sf::Vector2i InputManager::GetMousePostion(sf::RenderWindow &window)
    {
        return sf::Mouse::getPosition(window);
    }

}