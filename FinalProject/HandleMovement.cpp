#include "Engine.h"

void Engine::HandleMovement()
{
	if (player1.handleInput())
	{
		// Play a jump sound
		m_SM.playJump();
	}

	else if (P1projectile.handleInput() && P1projectile.isInFlight() == false)
	{

		P1projectile.launch(player1.getCenter().x, player1.getCenter().y);
		m_SM.playThrow();

	}

	if (player2.handleInput())
	{
		// Play a jump sound
		m_SM.playJump();
	}

	else if (P2projectile.handleInput() && P2projectile.isInFlight() == false)
	{
		P2projectile.launch(player2.getCenter().x, player2.getCenter().y);
		m_SM.playThrow();
	}
}