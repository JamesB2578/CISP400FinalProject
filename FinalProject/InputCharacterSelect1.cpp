#include "Engine.h"

void Engine::InputCharacterSelect1()
{
	if (Keyboard::isKeyPressed(Keyboard::Num1))
	{
		player1.setCharacterType(1);
		Character1Picked = true;
		P1projectile.setProjectileType(1);
		m_SM.playSelect();
		state = State::CharacterSelect2;

	}

	if (Keyboard::isKeyPressed(Keyboard::Num3))
	{
		player1.setCharacterType(3);
		P1projectile.setProjectileType(3);
		state = State::CharacterSelect2;
		m_SM.playSelect();
		Character1Picked = true;

	}

	if (Keyboard::isKeyPressed(Keyboard::Num2))
	{
		player1.setCharacterType(2);
		P1projectile.setProjectileType(2);
		state = State::CharacterSelect2;
		m_SM.playSelect();
		Character1Picked = true;
	}

	if (Keyboard::isKeyPressed(Keyboard::Num4))
	{
		player1.setCharacterType(4);
		P1projectile.setProjectileType(4);
		state = State::CharacterSelect2;
		m_SM.playSelect();
		Character1Picked = true;
	}
}