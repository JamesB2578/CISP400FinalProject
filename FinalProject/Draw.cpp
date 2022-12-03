#include "Engine.h"

void Engine::draw()
{
	m_Window.clear(Color::White);

	if (state == State::PLAYING)
	{
		m_Window.draw(m_BackgroundSprite);
		m_Window.draw(player1.getSprite());
		m_Window.draw(player2.getSprite());
	}

	if (state == State::CharacterSelect1)
	{
		m_Window.draw(m_Hud.getSelectText());
	}

	if (state == State::CharacterSelect2)
	{
		m_Window.draw(m_Hud.getPausedText());
	}

	if (state == State::PAUSED)
	{
		m_Window.draw(m_Hud.getPausedText());
	}

	if (state == State::GAME_OVER)
	{
		m_Window.draw(m_Hud.getEndText());
	}

	m_Window.display();
}