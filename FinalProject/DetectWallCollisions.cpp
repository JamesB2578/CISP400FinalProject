#include "Engine.h"
void Engine::detectWallCollisions(PlayableCharacter& character, RenderWindow& window)
{
	if ((character.getPosition().top + character.getPosition().height) > (window.getSize().y-150.0))
	{
		if (character.getCharacterName() == "CLOPSY")
		{
		}
		character.stopFalling(window.getSize().y-150);
	}

	if (character.getPosition().left < 200)
	{
		if (character.getCharacterName() == "CLOPSY")
		{
			character.stopLeft(60);
		}
		else
		{
			character.stopLeft(75);
		}
		
	}
	else if(character.getPosition().left + character.getPosition().width > window.getSize().x - 200)
	{
		if (character.getCharacterName() == "CLOPSY")
		{
			character.stopLeft(1300);
		}
		else
		{
			character.stopLeft(1460);
		}

		
	}

}