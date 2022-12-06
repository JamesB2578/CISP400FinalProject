#include "Engine.h"

void Engine::draw()
{
	m_Window.clear(Color::Cyan);

	drawPlaying();

	drawCharacterSelect();

	if (state == State::PAUSED)
	{
		m_Window.draw(m_Hud.getPausedText());
		m_Window.draw(player1.getSprite());
		m_Window.draw(player2.getSprite());
		m_Window.draw(m_Hud.getP1NameText());
		m_Window.draw(m_Hud.getP2NameText());
	}

	if (state == State::GAME_OVER)
	{
		m_Window.draw(m_EndSprite);
		m_Window.draw(m_EndHud.getWinnerText());
		player1.setPosition(Vector2f(820, 311));
		player2.setPosition(Vector2f(1050, 450));
		m_Window.draw(player1.getSprite());
		m_Window.draw(player2.getSprite());
		m_Window.draw(m_EndHud.getPlayAgainText());
	}
	m_Window.display();
}