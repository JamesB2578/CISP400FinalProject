#pragma once
#include "PlayableCharacter.h"
class PlayerTwo : public PlayableCharacter
{
public:
	PlayerTwo::PlayerTwo();
	bool virtual handleInput();
	void virtual setCharacterType(int type);
};
