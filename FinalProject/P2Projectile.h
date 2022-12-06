#pragma once
#include "Projectile.h"
#include "TextureHolder.h"

class PlayerTwoProjectile : public Projectile
{
public:
	bool virtual handleInput();
	void virtual setProjectileType(int type);
};
