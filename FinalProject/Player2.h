#pragma once
#include "PlayableCharacter.h"
class PlayerTwo : public PlayableCharacter
{
public:
	PlayerTwo();
	bool virtual handleInput();
};
