#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "Player1.h"
#include "Player2.h"
#include "MainHud.h"
using namespace sf;

class Engine
{
private:
	PlayerOne player1;
	PlayerOne player2;
	TextureHolder th;
	enum class State { PAUSED, CharacterSelect, GAME_OVER, PLAYING };
	State state = State::CharacterSelect;
	bool Character1Picked = false;
	void input();
	void update(float dtAsSeconds);
	void draw();
	RenderWindow m_Window;
	Hud m_Hud;
	View m_mainView;
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;
	Clock clock;
public:
	// The Engine constructor
	Engine();

	// Run will call all the private functions
	void run();

};