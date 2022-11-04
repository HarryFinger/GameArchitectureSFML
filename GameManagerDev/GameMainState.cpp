#include "GameMainState.h"

GameMainState::GameMainState()
{
	game_menu_texture.loadFromFile("../GameManagerDev/images/GameState/game.png");
	game_menu_sprite.setTexture(game_menu_texture);
}

void GameMainState::processInput(const sf::Event& event)
{
	if (event.key.code == sf::Keyboard::Enter && (event.type == sf::Event::KeyPressed))
	{
		std::cout << "Event GAME MAIN STATE on ENTER\n";
	}
}

void GameMainState::update(const float& delta_time)
{

}

void GameMainState::render(sf::RenderWindow& window)
{
	window.draw(game_menu_sprite);
}