#include "Engine.h"

void Engine::drawPlaying()
{
	if (state == State::PLAYING)
	{

		m_Window.draw(m_BackgroundSprite);
		m_Window.draw(player1.getSprite());
		m_Window.draw(player2.getSprite());
		m_Window.draw(m_Hud.getP1HealthBar());
		m_Window.draw(m_Hud.getP2HealthBar());
		m_Window.draw(m_Hud.getP1NameText());
		m_Window.draw(m_Hud.getP2NameText());
		if (P1projectile.isInFlight())
		{
			m_Window.draw(P1projectile.getSprite());
		}

		if (P2projectile.isInFlight())
		{
			m_Window.draw(P2projectile.getSprite());
		}

	}
}