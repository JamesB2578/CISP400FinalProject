#include "Player1.h"
#include "TextureHolder.h"

void PlayerOne::setCharacterType(float gravity, float jumpDuration, String sprite, float health, float speed)
{
    m_Gravity = gravity;
    m_JumpDuration = jumpDuration;
    m_Sprite = Sprite(TextureHolder::GetTexture(sprite));
    m_health = health;
    m_Speed = speed;
}