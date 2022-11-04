#include "Manager.h"

Manager::Manager()
{
	switch (state_type)
	{
	case StateType::MAIN_MENU_STATE:
		current_state = std::make_unique<MainMenuState>();
		break;
	case StateType::GAME_MAIN_STATE:
		current_state = std::make_unique<GameMainState>();
		break;
	default:
		break;
	}
}

void Manager::processInput(const sf::Event& event)
{
	if ((event.key.code == sf::Keyboard::F1) && (event.type == sf::Event::KeyPressed))
	{
		std::cout << "current state " << static_cast<int>(state_type) << " switched \n";
		switchState();
		return;
	}

	current_state->processInput(event);
}

void Manager::update(const float& delta_time)
{
	current_state->update(delta_time);

}
void Manager::render(sf::RenderWindow& window)
{
	current_state->render(window);
}

void Manager::switchState()
{
	switch (state_type)
	{
	case StateType::MAIN_MENU_STATE:
		current_state = std::make_unique<GameMainState>();
		state_type = StateType::GAME_MAIN_STATE;
		break;
	case StateType::GAME_MAIN_STATE:
		current_state = std::make_unique<MainMenuState>();
		state_type = StateType::MAIN_MENU_STATE;
		break;
	default:
		break;
	}

}

//void Manager::update(sf::Time delta_time)
//{
//	current_state->update(delta_time);
//}
//
//void Manager::render()
//{
//	current_state->render();
//}

