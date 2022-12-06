#pragma once
#include "Projectile.h"
#include "TextureHolder.h"

class PlayerOneProjectile : public Projectile
{
	public:
		bool virtual handleInput();
		void virtual setProjectileType(int type);
		void virtual update(float elapsedTime);
};
