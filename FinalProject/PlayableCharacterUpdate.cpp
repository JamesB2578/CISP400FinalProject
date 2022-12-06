#include "PlayableCharacter.h"

void PlayableCharacter::update(float elapsedTime) {
    if (m_RightPressed) {
        m_Position.x += m_Speed * elapsedTime;
    }
    if (m_LeftPressed) {
        m_Position.x -= m_Speed * elapsedTime;
    }
    // Handle Jumping
    if (m_IsJumping) {
        // Update how long the jump has been going
        m_TimeThisJump += elapsedTime;
        // Is the jump going upwards
        if (m_TimeThisJump < m_JumpDuration) {
            // Move up at twice gravity
            m_Position.y -= m_Gravity * 2 * elapsedTime;
        }
        else {
            m_IsJumping = false;
            m_IsFalling = true;
        }
    }
    // Apply gravity
    if (m_IsFalling) {
        m_Position.y += m_Gravity * elapsedTime;
    }

    m_Sprite.setPosition(m_Position);
}