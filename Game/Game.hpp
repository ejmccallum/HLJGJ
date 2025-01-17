#pragma once

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "StateMachine.hpp"
#include "AssetManager.hpp"
#include "InputManager.hpp"

namespace Ethan
{
    struct GameData
    {
        StateMachine machine;
        sf::RenderWindow window;
        AssetManager assets;
        InputManager input;
    };

    typedef std::shared_ptr<GameData> GameDataRef;

    class Game
    {
        public:
            Game(int w, int h, std::string title);
        
        private:
            const float dt = 1.0f / 60.0f;
            sf::Clock _clock;

            GameDataRef _data = std::make_shared<GameData>();

            void Run();
    };
}