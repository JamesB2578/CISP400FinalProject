#include "Player2.h"
#include "TextureHolder.h"

void PlayerTwo::setCharacterType(float gravity, float jumpDuration, String sprite, float health, float speed)
{
    m_Gravity = gravity;
    m_JumpDuration = jumpDuration;
    m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
    m_health = health;
    m_Speed = speed;

    m_Sprite.rotate(180);
}

void PlayerTwo::setCharacterType(int type)
{
	switch (type)
	{
	case 1:
		m_Gravity = gravity;
		m_JumpDuration = jumpDuration;
		m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
		m_health = health;
		m_Speed = speed;
		break;

	case 2:
		m_Gravity = gravity;
		m_JumpDuration = jumpDuration;
		m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
		m_health = health;
		m_Speed = speed;
		break;

	case 3:
		m_Gravity = gravity;
		m_JumpDuration = jumpDuration;
		m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
		m_health = health;
		m_Speed = speed;
		break;

	case 4:
		m_Gravity = gravity;
		m_JumpDuration = jumpDuration;
		m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
		m_health = health;
		m_Speed = speed;
		break;
	}
}