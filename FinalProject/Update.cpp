#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (state == State::PLAYING)
	{
		player1.update(dtAsSeconds);
		player2.update(dtAsSeconds);
		P1projectile.update(dtAsSeconds);
		P2projectile.update(dtAsSeconds);
	}
}