#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Projectile
{
private:
	
	float m_ProjectileDistanceX;
	float m_ProjectileDistanceY;
	float m_fireRate = 6;
	int m_currentBullet = 0;
	Time m_lastPressed;
	
protected:
	Sprite m_Sprite;
	float m_damage;
	Vector2f m_Position;
	float m_ProjectileSpeed = 1000;
	float m_MaxX;
	float m_MinX;
	float m_MaxY;
	float m_MinY;
	bool m_InFlight = false;

public:
	Projectile::Projectile();
	bool virtual handleInput() = 0;
	void stop();
	bool isInFlight();
	void launch(float startX, float startY);
	FloatRect getPosition();
	void virtual update(float elapsedTime) = 0;
	void virtual setProjectileType(int type) = 0;
	Sprite getSprite();
	float getFireRate();
	float getDamage();
	float getCurrentBullet();
	void setLastPressed(Time time);
	Time getLastPressed();
};