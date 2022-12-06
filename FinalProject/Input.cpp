#include "Engine.h"
#include "SoundManager.h"
#include "Player1.h"
#include "Player2.h"

void Engine::input()
{
	InputPollEvent();

	if (state == State::CharacterSelect1)
	{


		InputCharacterSelect1();

	}

	if (state == State::CharacterSelect2)
	{
		InputCharacterSelect2();
	}

	HandleMovement();
	
}


