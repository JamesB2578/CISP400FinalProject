#include "PlayableCharacter.h"
#include "TextureHolder.h"
#include <iostream>
using namespace std;

void PlayableCharacter::spawn(Vector2f startPosition) {
    // Place the player at the starting point
    m_Position.x = startPosition.x;
    m_Position.y = startPosition.y;
    // Move the sprite in to position
    m_Sprite.setPosition(m_Position);
}

void PlayableCharacter::stopFalling(float position) {
    if (!m_IsJumping)  ///***prevent interrupting jump if touching floor
    {
        m_Position.y = position - getPosition().height;
        m_Sprite.setPosition(m_Position);
        m_IsFalling = false;
    }
}
void PlayableCharacter::stopRight(float position) {
    m_Position.x = position - m_Sprite.getGlobalBounds().width;
    m_Sprite.setPosition(m_Position);
}
void PlayableCharacter::stopLeft(float position) {
    m_Position.x = position + m_Sprite.getGlobalBounds().width;
    m_Sprite.setPosition(m_Position);
}
void PlayableCharacter::stopJump() {
    // Stop a jump early 
    m_IsJumping = false;
    m_IsFalling = true;
}

