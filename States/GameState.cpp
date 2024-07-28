#include "GameState.hpp"
#include "Definitions.hpp"
#include <sstream>
#include <iostream>

namespace Ethan
{

    GameState::GameState( GameDataRef data) : _data(data)
    {
        
    }
    
    void GameState::Init()
    {
        gameState = RUNNING;
        turn = PLAYER_DECK;

        _background.setTexture(this->_data->assets.GetTexture("Background"));

    }

    void GameState::HandleInput() {
        sf::Event event;

        while (this->_data->window.pollEvent(event))
        {
            if (sf::Event::Closed == event.type)
            {
                this->_data->window.close();
            }

        }
    }

    void GameState::Update(float dt) {
        HandleInput();
    }

    void GameState::Draw(float dt) {

        this->_data->window.clear();

        this->_data->window.draw(this->_background);

        this->_data->window.display();

    }

}
