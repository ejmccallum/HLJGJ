#include <iostream>
#include "Definitions.hpp"
#include "Game.hpp"


int main()
{
    Ethan::Game(SCREEN_WIDTH, SCREEN_HEIGHT, "HLJGJ");

    std::cout << "Screen Width: " << SCREEN_WIDTH << std::endl;
    std::cout << "Screen Height: " << SCREEN_HEIGHT << std::endl;
 
    return EXIT_SUCCESS;
}