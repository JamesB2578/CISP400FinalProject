#pragma once
#include <SFML/Audio.hpp>
using namespace sf;
class SoundManager
{
private:
	SoundBuffer m_JumpBuffer;
	Sound m_JumpSound;

public:
	SoundManager();
	void playJump();
};
