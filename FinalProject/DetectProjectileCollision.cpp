#include "Engine.h"

bool Engine::detectProjectileCollisions(PlayableCharacter& character, Projectile& projectile)
{
	bool P1_winner = false;
	if (projectile.getPosition().intersects(character.getPosition()))
	{
		P1_winner = true;
	}

	return P1_winner;
}