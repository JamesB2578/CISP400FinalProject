#include "Engine.h"
#include <iostream>
using namespace std;

bool Engine::detectProjectileCollisions(PlayableCharacter& character, Projectile& projectile)
{
	bool hit = false;
	bool dead = false;
	if (projectile.getPosition().intersects(character.getPosition()))
	{

		cout << "hit" << endl;
		dead = true;
		

	}

	return dead;
}