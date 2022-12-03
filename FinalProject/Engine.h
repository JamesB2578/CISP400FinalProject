#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "SoundManager.h"
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
	enum class State { PAUSED, CharacterSelect1, CharacterSelect2, GAME_OVER, PLAYING };
	State state = State::GAME_OVER;
	bool Character1Picked = false;
	bool Character2Picked = false;
	void input();
	void update(float dtAsSeconds);
	void draw();
	SoundManager m_SM;
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