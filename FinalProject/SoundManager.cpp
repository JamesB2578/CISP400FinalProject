#include "SoundManager.h"
#include <SFML/Audio.hpp>
using namespace sf;
SoundManager::SoundManager()
{
	m_JumpBuffer.loadFromFile("sound/jump.wav");
	m_JumpSound.setBuffer(m_JumpBuffer);

}

void SoundManager::playJump()
{
	m_JumpSound.setRelativeToListener(true);
	m_JumpSound.play();
}