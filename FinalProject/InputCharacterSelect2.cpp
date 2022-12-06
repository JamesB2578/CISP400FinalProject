#include "Engine.h"

void Engine::InputCharacterSelect2()
{
	if (Keyboard::isKeyPressed(Keyboard::Num5))
	{
		player2.setCharacterType(1);
		P2projectile.setProjectileType(1);
		m_SM.playSelect();
		Character2Picked = true;
	}

	if (Keyboard::isKeyPressed(Keyboard::Num6))
	{
		player2.setCharacterType(2);
		P2projectile.setProjectileType(2);
		m_SM.playSelect();
		Character2Picked = true;

	}

	if (Keyboard::isKeyPressed(Keyboard::Num7))
	{
		player2.setCharacterType(3);
		P2projectile.setProjectileType(3);
		m_SM.playSelect();
		Character2Picked = true;
	}

	if (Keyboard::isKeyPressed(Keyboard::Num8))
	{
		player2.setCharacterType(4);
		P2projectile.setProjectileType(4);
		m_SM.playSelect();
		Character2Picked = true;
	}
}