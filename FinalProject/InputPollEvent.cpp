#include "Engine.h"

void Engine::InputPollEvent()
{
	Event event;
	while (m_Window.pollEvent(event))
	{
		if (event.type == Event::Closed)
		{
			// Quit the game when the window is closed
			m_Window.close();
		}
		if (event.type == Event::KeyPressed)
		{
			// Handle the player quitting
			if (event.key.code == Keyboard::Escape)
			{
				m_Window.close();
			}

			// Handle the player starting the game
			if (event.key.code == Keyboard::Return && state == State::PLAYING)
			{
				m_Playing = false;
				m_SM.playSelect();
				state = State::PAUSED;
			}

			else if (event.key.code == Keyboard::Return && state == State::PAUSED)
			{
				m_SM.playSelect();
				state = State::PLAYING;
				m_Playing = true;
				clock.restart();
			}

			else if (event.key.code == Keyboard::Return && state == State::GAME_OVER)
			{
				Character1Picked = false;
				Character2Picked = false;
				m_Playing = false;
				m_SM.playSelect();
				state = State::CharacterSelect1;

			}

		}
	}
	
}