#pragma once
#include <SFML/Audio.hpp>
using namespace sf;
class SoundManager
{
private:
	SoundBuffer m_JumpBuffer;
	Sound m_JumpSound;
	SoundBuffer m_SelectBuffer;
	Sound m_SelectSound;
	SoundBuffer m_ThrowBuffer;
	Sound m_ThrowSound;
	SoundBuffer m_SplatBuffer;
	Sound m_SplatSound;

public:
	SoundManager();
	void playJump();
	void playSplat();
	void playThrow();
	void playSelect();
};
