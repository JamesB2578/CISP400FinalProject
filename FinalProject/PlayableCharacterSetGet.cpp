#include "PlayableCharacter.h"

FloatRect PlayableCharacter::getPosition() {
    return m_Sprite.getGlobalBounds();
}

FloatRect PlayableCharacter::getLeft() {
    return m_Left;
}
FloatRect PlayableCharacter::getRight() {
    return m_Right;
}
Sprite PlayableCharacter::getSprite() {
    return m_Sprite;
}

Vector2f PlayableCharacter::getCenter() {
    return Vector2f(
        m_Position.x + m_Sprite.getGlobalBounds().width / 2,
        m_Position.y + m_Sprite.getGlobalBounds().height / 2
    );
}

void PlayableCharacter::setPosition(Vector2f pos)
{
    m_Position = pos;
    m_Sprite.setPosition(m_Position);
}

void PlayableCharacter::SetCharacterName(String name)
{
    m_CharacterTypeName = name;
}
String PlayableCharacter::getCharacterName()
{
    return m_CharacterTypeName;
}

float PlayableCharacter::getHealth()
{
    return m_health;
}

void PlayableCharacter::setHealth(float health)
{
    m_health = health;
}