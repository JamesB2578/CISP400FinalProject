#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"
#include "SoundManager.h"
#include "Player1.h"
#include "Player2.h"
#include "MainHud.h"
#include "P1Projectile.h"
#include "P2Projectile.h"
#include "SelectScreenHud.h"
#include "EndHud.h"
using namespace sf;
class Engine
{
private:
	bool m_Playing = false;
	EndHud m_EndHud;
	int m_FramesSinceLastHUDUpdate = 0;
	int m_TargetFramesPerHUDUpdate = 10;
	PlayerOne player1;
	PlayerTwo player2;
	PlayerOneProjectile P1projectile;
	PlayerTwoProjectile P2projectile;
	TextureHolder th;
	Sprite m_SelectSprite, m_BackgroundSprite, m_EndSprite;
	SelectHud m_SelectHud1;
	Texture m_SelectTexture, m_BackgroundTexture, m_EndTexture;
	enum class State { PAUSED, CharacterSelect1, CharacterSelect2, GAME_OVER, PLAYING };
	State state = State::CharacterSelect1;
	bool Character1Picked = false;
	bool Character2Picked = false;
	void input();
	void update(float dtAsSeconds);
	void draw();
	SoundManager m_SM;
	RenderWindow m_Window;
	Hud m_Hud;
	Clock clock;
	void InputPollEvent(), InputCharacterSelect1(), InputCharacterSelect2(), HandleMovement();
	void drawPlaying(), drawCharacterSelect();
	//void
	void detectWallCollisions(PlayableCharacter& character, RenderWindow& window);
	bool detectProjectileCollisions(PlayableCharacter& character, Projectile& projectile);
	Time m_GameTimeTotal;
public:
	Engine();
	void run();
	Time GetGameTimeTotal();
};