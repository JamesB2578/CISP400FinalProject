#include "P2Projectile.h"

bool PlayerTwoProjectile::handleInput()
{
	if (Keyboard::isKeyPressed(Keyboard::Space))
	{
		return true;
	}
}

void PlayerTwoProjectile::setProjectileType(int type)
{
	switch (type)
	{
	case 1:
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/peterock.png"));
		m_damage = 10;
		break;

	case 2:
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/ogreweight.png"));
		m_damage = 15;
		break;

	case 3:
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/archerarrow.png"));
		m_damage = 5;
		break;

	case 4:
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/swordmansword.png"));
		m_damage = 1000;
		break;
	}

	m_Sprite.rotate(180);
}