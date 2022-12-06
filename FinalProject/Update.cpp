#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>
using namespace std;
using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (state == State::CharacterSelect2 && Character1Picked == true && Character2Picked == true)
	{
		player1.spawn(Vector2f(300, 500));
		player2.spawn(Vector2f(1200, 500));
		m_Playing = true;
		state = State::PLAYING;
	}
	if (state == State::PLAYING && m_Playing == true)
	{
		player1.update(dtAsSeconds);
		player2.update(dtAsSeconds);
		detectWallCollisions(player1, m_Window);
		detectWallCollisions(player2, m_Window);
		P1projectile.update(dtAsSeconds);
		P2projectile.update(dtAsSeconds);
		if (detectProjectileCollisions(player2, P1projectile) && m_Playing == true)
		{
			m_EndHud.setWinnerText("PLAYER 1 WINS!");
			P1projectile.stop();
			P2projectile.stop();
			m_Playing = false;
			state = State::GAME_OVER;
		}
		else if (detectProjectileCollisions(player1, P2projectile) && m_Playing == true)
		{
			m_EndHud.setWinnerText("PLAYER 2 WINS!");
			P1projectile.stop();
			P2projectile.stop();
			m_Playing = false;
			state = State::GAME_OVER;
		}
	}
		m_FramesSinceLastHUDUpdate++;
	if (m_FramesSinceLastHUDUpdate > m_TargetFramesPerHUDUpdate)
	{
		m_Hud.setP1Name(player1.getCharacterName());
		m_Hud.setP2Name(player2.getCharacterName());
		m_Hud.setP1HealthBar(player1.getHealth());
		m_Hud.setP2HealthBar(player2.getHealth());
	}
}