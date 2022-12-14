#include "Projectile.h"
#include <cmath>
#include "TextureHolder.h"

Projectile::Projectile(){
    int damage = 0;
}
bool Projectile::isInFlight(){
    return m_InFlight;
}
void Projectile::launch(float startX, float startY){
    m_InFlight = true;
    m_Position.x = startX;
    m_Position.y = startY;
    float range = 1000;
    m_MinX = startX - range;
    m_MaxX = startX + range;
    m_MinY = startY - range;
    m_MaxY = startY + range;
    m_Sprite.setPosition(m_Position);
}
void Projectile::stop(){
    m_InFlight = false;
}
FloatRect Projectile::getPosition(){
    return m_Sprite.getGlobalBounds();
}
Sprite Projectile::getSprite(){
    return m_Sprite;
}

float Projectile::getFireRate(){
    return m_fireRate;
}

float Projectile::getCurrentBullet(){
    return m_currentBullet;
}

void Projectile::setLastPressed(Time time){
    m_lastPressed = time;
}
Time Projectile::getLastPressed(){
    return m_lastPressed;
}
float Projectile::getDamage()
{
    return m_damage;
}