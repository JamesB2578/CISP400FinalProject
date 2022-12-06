#include "Engine.h"
void Engine::detectWallCollisions(PlayableCharacter& character, RenderWindow& window)
{
	if ((character.getPosition().top + character.getPosition().height) > (window.getSize().y-300.0))
	{
		character.stopFalling(window.getSize().y-200);
	}

	if (character.getPosition().left < 200)
	{
		character.stopLeft(75);
	}
	else if(character.getPosition().left + character.getPosition().width > window.getSize().x - 200)
	{
		character.stopLeft(1460);
	}

}