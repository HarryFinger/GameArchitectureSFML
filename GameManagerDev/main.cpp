#include <SFML/Graphics.hpp>
#include "Manager.h"
#include <iostream>

int main()
{
    std::cout << "Press SPACE when you into MAIN MENY STATE lvl to interact\n";
    std::cout << "Press ENTER when you into GAME MAIN STATE lvl to interact\n";
    std::cout << "Press F1 to switch between lvl's\n";

    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");

    Manager manager;

    sf::Clock main_clock;
    float prev_time = main_clock.getElapsedTime().asSeconds();

    while (window.isOpen())
    {
        //delta time calc
        float current_time = main_clock.getElapsedTime().asSeconds();
        float delta_time = current_time - prev_time;
        prev_time = current_time;

        sf::Event event;
        
        //event state
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            manager.processInput(event);
        }

        //update state
        manager.update(delta_time);

        //render state
        window.clear();
        manager.render(window);


        //window.draw(shape);

        window.display();
    }

    return 0;
}