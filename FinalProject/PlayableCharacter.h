#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "Projectile.h"
using namespace sf;
class PlayableCharacter
{
protected:
	Sprite m_Sprite;
	float m_JumpDuration;
	bool m_IsJumping;
	bool m_IsFalling;
	bool m_LeftPressed;
	bool m_RightPressed;
	float m_TimeThisJump;
	bool m_JustJumped = false;
	float m_Gravity;
	float m_Speed;
	Vector2f m_Position;
	FloatRect m_Right;
	FloatRect m_Left;
	float m_health;
public:
	void spawn(Vector2f startPosition);
	bool virtual handleInput() = 0;
	FloatRect getPosition();
	FloatRect getRight();
	FloatRect getLeft();
	Sprite getSprite();
	void stopFalling(float position);
	void stopRight(float position);
	void stopLeft(float position);
	void stopJump();
	Vector2f getCenter();
	void setCharacterType(float gravity, float jumpDuration, String sprite, float health, float speed);
	void update(float elapsedTime);

};

