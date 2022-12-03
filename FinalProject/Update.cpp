#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (state == State::PLAYING)
	{
		player1.update(dtAsSeconds);
		// Update Bob
		player2.update(dtAsSeconds);
	}
}