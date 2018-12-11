#include <iostream>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "dru_lib_body.h"
#include "dru_lib_weapon.h"
using namespace std;

int main()
{
    minimap *MAP;
    // Set size MAP[n][m]!!!()
    sf::RenderWindow window(sf::VideoMode(1360, 640), "Game");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
