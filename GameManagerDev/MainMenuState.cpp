#include "MainMenuState.h"

MainMenuState::MainMenuState()
{
	main_menu_texture.loadFromFile("../GameManagerDev/images/MainMenu/menu.png");
	main_menu_sprite.setTexture(main_menu_texture);
}

void MainMenuState::processInput(const sf::Event& event)
{
	if (event.key.code == sf::Keyboard::Space && (event.type == sf::Event::KeyPressed))
	{
		std::cout << "Event MAIN MENU on space\n";
	}
}

void MainMenuState::update(const float& delta_time)
{

}

void MainMenuState::render(sf::RenderWindow& window)
{
	window.draw(main_menu_sprite);
}
