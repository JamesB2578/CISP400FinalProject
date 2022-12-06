#include "Engine.h"

bool Engine::detectProjectileCollisions(PlayableCharacter& character, Projectile& projectile)
{
	bool Hit = false;
	if (projectile.getPosition().intersects(character.getPosition()))
	{
		Hit = true;
	}

	return Hit;
}