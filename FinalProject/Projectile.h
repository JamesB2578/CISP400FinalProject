#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Projectile
{
private:
	Vector2f m_Position;
	
	bool m_InFlight = false;
	float m_ProjectileSpeed = 1000;
	float m_ProjectileDistanceX;
	float m_ProjectileDistanceY;
	float m_fireRate = 6;
	int m_currentBullet = 0;
	Time m_lastPressed;
	//int angle = 0; if we can the bullet to travel in a curve

	float m_MaxX;
	float m_MinX;
	float m_MaxY;
	float m_MinY;
protected:
	Sprite m_Sprite;
	float m_damage;

public:
	Projectile::Projectile();
	bool virtual handleInput() = 0;
	void stop();
	bool isInFlight();
	void launch(float startX, float startY);
	FloatRect getPosition();
	void update(float elapsedTime);
	void virtual setProjectileType(int type) = 0;
	Sprite getSprite();
	float getFireRate();
	float getCurrentBullet();
	void setLastPressed(Time time);
	Time getLastPressed();
};