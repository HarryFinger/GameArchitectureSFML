#pragma once
#include "IState.h"

class MainMenuState : public IState
{

public:
	MainMenuState();
	void processInput(const sf::Event& event) override;
	void update(const float& delta_time);
	void render(sf::RenderWindow& window) override;

private:
	sf::Texture main_menu_texture;
	sf::Sprite main_menu_sprite;
};

