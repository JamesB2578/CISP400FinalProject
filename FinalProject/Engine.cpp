#include "Engine.h"
#include <iostream>
using namespace std;

Engine::Engine()
{
	// Get the screen resolution and create an SFML window and View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),"Fighting Game",Style::Default);

	// Initialize the full screen view
	//m_mainView.setSize(resolution);

	//m_Window.setView(m_mainView);
	m_SelectTexture = TextureHolder::GetTexture("graphics/selectUpdated.jpg");
	m_BackgroundTexture = TextureHolder::GetTexture("graphics/ArenaTwo.jpg");
	

	// Associate the sprite with the texture
	m_BackgroundSprite.setTexture(m_BackgroundTexture);
	m_SelectSprite.setTexture(m_SelectTexture);
}

void Engine::run()
{


	while (m_Window.isOpen())
	{
		Time dt = clock.restart();
		// Update the total game time
		m_GameTimeTotal += dt;
		// Make a decimal fraction from the delta time
		float dtAsSeconds = dt.asSeconds();
		

		input();
		update(dtAsSeconds);
		draw();

	}
}
Time Engine::GetGameTimeTotal()
{
	return m_GameTimeTotal;
}
