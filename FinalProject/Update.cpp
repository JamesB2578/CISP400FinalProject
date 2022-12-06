#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>
#include <iostream>
using namespace std;
using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (state == State::CharacterSelect2 && Character1Picked == true && Character2Picked == true)
	{
		player1.spawn(Vector2f(0, 0));
		player2.spawn(Vector2f(0, 68));
	}

	if (state == State::PLAYING)
	{
		player1.update(dtAsSeconds);
		player2.update(dtAsSeconds);
		//P1projectile.update(dtAsSeconds);
		//P2projectile.update(dtAsSeconds);
	}
}