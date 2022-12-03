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
			player1.setCharacterType(1.0, 1.0, "graphics/pete.png", 1.0, 400);
			Character1Picked = true;
			state = State::CharacterSelect2;
			
		}

		if (Keyboard::isKeyPressed(Keyboard::Num2))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/ogre.png", 1.0, 400);
			state = State::CharacterSelect2;
			Character1Picked = true;

		}

		if (Keyboard::isKeyPressed(Keyboard::Num3))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/archer.png", 1.0, 400);
			state = State::CharacterSelect2;
			Character1Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num4))
		{
			player1.setCharacterType(1.0, 1.0, "graphics/swordman.png", 1.0, 400);
			state = State::CharacterSelect2;
			Character1Picked = true;
		}

	}

	if (state == State::CharacterSelect2)
	{
		if (Keyboard::isKeyPressed(Keyboard::Num5))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/pete.png", 1.0, 400);
			Character2Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num6))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/ogre.png", 1.0, 400);
			Character2Picked = true;

		}

		if (Keyboard::isKeyPressed(Keyboard::Num7))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/archer.png", 0.0, 400);
			Character2Picked = true;
		}

		if (Keyboard::isKeyPressed(Keyboard::Num8))
		{
			player2.setCharacterType(1.0, 1.0, "graphics/swordman.png", 1.0, 400);
			Character2Picked = true;
		}
	}

	if (Character1Picked == true && Character2Picked == true)
	{
		state = State::PLAYING;
		player1.spawn(Vector2f(500, 500));
		player2.spawn(Vector2f(800, 500));
	}

	if (state == State::PLAYING)
	{
		if (player2.handleInput())
		{
			// Play a jump sound
			m_SM.playJump();
		}

		if (player1.handleInput())
		{
			// Play a jump sound
			m_SM.playJump();
		}

	}
}


