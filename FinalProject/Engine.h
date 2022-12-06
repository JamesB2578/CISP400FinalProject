#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "SoundManager.h"
#include "Player1.h"
#include "Player2.h"
#include "MainHud.h"
#include "Projectile.h"
#include "SelectScreenHud.h"
using namespace sf;

class Engine
{
private:
	PlayerOne player1;
	PlayerTwo player2;
	Projectile P1projectile;
	Projectile P2projectile;
	TextureHolder th;
	Sprite m_SelectSprite;
	SelectHud m_SelectHud1;
	Texture m_SelectTexture;
	enum class State { PAUSED, CharacterSelect1, CharacterSelect2, GAME_OVER, PLAYING };
	const int GRAVITY = 300;
	State state = State::GAME_OVER;
	bool Character1Picked = false;
	bool Character2Picked = false;
	void input();
	void update(float dtAsSeconds);
	void draw();
	SoundManager m_SM;
	RenderWindow m_Window;
	Hud m_Hud;
	//View m_mainView;
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;
	Clock clock;
	//bool detectWallCollisions(PlayableCharacter& character);
	//bool detectProjectileCollisions(PlayableCharacter& character, Projectile& projectile);
	Time m_GameTimeTotal;
public:
	// The Engine constructor
	Engine();

	// Run will call all the private functions
	void run();

	Time GetGameTimeTotal();
};