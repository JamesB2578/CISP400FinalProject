#pragma once
#include "PlayableCharacter.h"
class PlayerOne : public PlayableCharacter
{
public: 
	PlayerOne();
	bool virtual handleInput();
};

