#include "Engine.h"
#include "SoundManager.h"
#include "Player1.h"
#include "Player2.h"

void Engine::input()
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
				state = State::PAUSED;
			}

			else if (event.key.code == Keyboard::Return && state == State::PAUSED)
			{
				state = State::PLAYING;
				clock.restart();
			}

			else if (event.key.code == Keyboard::Return && state == State::GAME_OVER)
			{
				state = State::CharacterSelect1;
			}

		}
	}

	if (state == State::CharacterSelect1)
	{


		if (Keyboard::isKeyPressed(Keyboard::Num1))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/pete.png", 400.0, 1000.0);
			Character1Picked = true;
			P1projectile.setProjectileType(1);
			state = State::CharacterSelect2;
			
		}

		if (Keyboard::isKeyPressed(Keyboard::Num3))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/ogre.png", 500.0, 1000.0);
			P1projectile.setProjectileType(2);
			state = State::CharacterSelect2;
			Character1Picked = true;

		}

		if (Keyboard::isKeyPressed(Keyboard::Num2))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/archer.png", 400.0, 1000.0);
			P1projectile.setProjectileType(3);
			state = State::CharacterSelect2;
			Character1Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num4))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/swordman.png", 200.0, 1000.0);
			P1projectile.setProjectileType(4);
			state = State::CharacterSelect2;
			Character1Picked = true;
		}

	}

	if (state == State::CharacterSelect2)
	{
		if (Keyboard::isKeyPressed(Keyboard::Num5))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/pete.png", 400.0, 1000.0);
			P2projectile.setProjectileType(1);
			Character2Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num7))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/ogre.png", 500.0, 1000.0);
			P2projectile.setProjectileType(2);
			Character2Picked = true;

		}

		if (Keyboard::isKeyPressed(Keyboard::Num6))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/archer.png", 400.0, 1000.0);
			P2projectile.setProjectileType(3);
			Character2Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num8))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/swordman.png", 200.0, 1000.0);
			P2projectile.setProjectileType(4);
			Character2Picked = true;
		}
	}

	if (Character1Picked == true && Character2Picked == true)
	{
		state = State::PLAYING;
		player1.spawn(Vector2f(480, 500));
		player2.spawn(Vector2f(1440, 500));
	}

	if (state == State::PLAYING)
	{
		if (player2.handleInput())
		{
			// Play a jump sound
			m_SM.playJump();
		}

		else if(Keyboard::isKeyPressed(Keyboard::RControl))
		{
			
			P2projectile.launch(player2.getCenter().x, player2.getCenter().y);
			
		}


		if (player1.handleInput())
		{
			// Play a jump sound
			m_SM.playJump();
		}

		else if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			
			P1projectile.launch(player1.getCenter().x, player1.getCenter().y);
			
		}
	}
}


