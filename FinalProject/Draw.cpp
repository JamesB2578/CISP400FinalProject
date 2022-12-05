#include "Engine.h"

void Engine::draw(){
	m_Window.clear(Color::White);

	if (state == State::PLAYING){

		m_Window.draw(m_BackgroundSprite);
		m_Window.draw(player1.getSprite());
		m_Window.draw(player2.getSprite());
		if (P1projectile.isInFlight()){
			m_Window.draw(P1projectile.getSprite());
		}

		if (P2projectile.isInFlight()){
			m_Window.draw(P2projectile.getSprite());
		}

	}

	if (state == State::CharacterSelect1){
		//m_Window.draw(m_SelectSprite);
		m_Window.draw(m_SelectHud.getText());
	}

	if (state == State::CharacterSelect2){
		m_Window.draw(m_SelectSprite);
		m_Window.draw(m_Hud.getPausedText());
	}

	if (state == State::PAUSED){
		m_Window.draw(m_Hud.getPausedText());
	}

	if (state == State::GAME_OVER){
		m_Window.draw(m_Hud.getEndText());
	}

	m_Window.display();
}