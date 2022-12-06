#include "P1Projectile.h"

bool PlayerOneProjectile::handleInput()
{
	if (Keyboard::isKeyPressed(Keyboard::Space))
	{
		return true;
	}
}

void PlayerOneProjectile::setProjectileType(int type)
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
}

void PlayerOneProjectile::update(float elapsedTime) {
	m_Position.x += m_ProjectileSpeed * elapsedTime;
	m_Sprite.setPosition(m_Position);
	if (m_Position.x < m_MinX || m_Position.x > m_MaxX ||
		m_Position.y < m_MinY || m_Position.y > m_MaxY) {
		m_InFlight = false;
	}
}