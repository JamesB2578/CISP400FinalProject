#include "Player1.h"
#include "TextureHolder.h"
#include <iostream>
#include "Engine.h"
using namespace std;

PlayerOne::PlayerOne()
{
	m_JumpDuration = 0;
}

bool PlayerOne::handleInput()
{
    m_JustJumped = false;
    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        // Start a jump if not already jumping
        // but only if standing on a block (not falling)
        if (!m_IsJumping && !m_IsFalling)
        {
            m_IsJumping = true;
            m_TimeThisJump = 0;
            m_JustJumped = true;
        }
    }
    else
    {
        m_IsJumping = false;
        m_IsFalling = true;
    }
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_LeftPressed = true;
    }
    else
    {
        m_LeftPressed = false;
    }
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_RightPressed = true;;
    }
    else
    {
        m_RightPressed = false;
    }


    return m_JustJumped;
}
