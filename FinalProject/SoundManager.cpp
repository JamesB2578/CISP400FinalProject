#include "SoundManager.h"
#include <SFML/Audio.hpp>
using namespace sf;
SoundManager::SoundManager()
{
	m_JumpBuffer.loadFromFile("sound/jump.wav");
	m_JumpSound.setBuffer(m_JumpBuffer);
	m_SplatBuffer.loadFromFile("sound/death.wav");
	m_SplatSound.setBuffer(m_SplatBuffer);
	m_ThrowBuffer.loadFromFile("sound/whoosh.wav");
	m_ThrowSound.setBuffer(m_ThrowBuffer);
	m_SelectBuffer.loadFromFile("sound/select.wav");
	m_SelectSound.setBuffer(m_SelectBuffer);

}

void SoundManager::playJump()
{
	m_JumpSound.setRelativeToListener(true);
	m_JumpSound.play();
}

void SoundManager::playSplat()
{
	m_SplatSound.setRelativeToListener(true);
	m_SplatSound.play();
}

void SoundManager::playThrow()
{
	m_ThrowSound.setRelativeToListener(true);
	m_ThrowSound.play();
}

void SoundManager::playSelect()
{
	m_SelectSound.setRelativeToListener(true);
	m_SelectSound.play();
}