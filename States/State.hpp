#pragma once

namespace Ethan
{
    class State //Class to handle game states
    {
        public:
            //Intialization
            virtual void Init() = 0;

            //States that change in game
            virtual void HandleInput() = 0;
            virtual void Update(float dt) = 0;
            virtual void Draw(float dt) = 0;

            //Pause and Resume states
            virtual void Pause() {}
            virtual void Resume() {}
    };
}