#pragma once
#include "IState.h"

class GameMainState : public IState
{
public:
	sf::Texture game_menu_texture;
	sf::Sprite game_menu_sprite;

	GameMainState();

	void processInput(const sf::Event& event);
	void update(const float& delta_time);
	void render(sf::RenderWindow& window) override;

};

