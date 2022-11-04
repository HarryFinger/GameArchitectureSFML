#pragma once
#include <memory>
#include <SFML/Graphics.hpp>
#include <iostream>

#include "IState.h"
#include "GameMainState.h"
#include "MainMenuState.h"

//class State; ??????



class Manager
{
private:
	enum class StateType
	{
		MAIN_MENU_STATE,
		GAME_MAIN_STATE
	};

	StateType state_type = StateType::MAIN_MENU_STATE;

public:
	std::unique_ptr<IState> current_state;
	sf::RenderWindow* window;

	Manager();

	void processInput(const sf::Event& event);
	void update(const float& delta_time);
	void render(sf::RenderWindow& window);
	
	//void setState();
private:
	void switchState();
};