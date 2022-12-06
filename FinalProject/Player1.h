#pragma once
#include "PlayableCharacter.h"
class PlayerOne : public PlayableCharacter
{
public: 
	PlayerOne::PlayerOne();
	bool virtual handleInput();
	void virtual setCharacterType(int type);
};

