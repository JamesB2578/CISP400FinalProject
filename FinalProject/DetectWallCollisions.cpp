#include "Engine.h"
void Engine::detectWallCollisions(PlayableCharacter& character, RenderWindow& window)
{
	if ((character.getPosition().top + character.getPosition().height) > (window.getSize().y-300.0))
	{
		character.stopFalling(window.getSize().y-200);
	}

}