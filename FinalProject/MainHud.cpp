#include "MainHud.h"
Hud::Hud()
{
    p1_healthBar.setFillColor(Color::Red);
    p1_healthBar.setPosition(30, 30);
    p2_healthBar.setFillColor(Color::Blue);
    p2_healthBar.setPosition(1450, 30);
    setTextBox(paused, "PAUSED: Press Return To Continue");
    setCenter(paused, 2.0f, 2.0f);
    setTextBox(p1_Name, "Player 1:");
    setCenter(p1_Name, 7.0f, 8.0f);
    setTextBox(p2_Name, "Player 2:");
    setCenter(p2_Name, 1.1f, 8.0f);
}
Text Hud::getP1NameText(){
    return p1_Name;
}
Text Hud::getP2NameText(){
    return p2_Name;
}
Text Hud::getPausedText(){
    return paused;
}
RectangleShape Hud::getP1HealthBar()
{
    return p1_healthBar;
}
RectangleShape Hud::getP2HealthBar()
{
    return p2_healthBar;
}
void Hud::setP1HealthBar(float health)
{
    p1_healthBar.setSize(Vector2f(health * 1.1, 50));
}
void Hud::setP2HealthBar(float health)
{
    p2_healthBar.setSize(Vector2f(health * 1.1, 50));
}
void Hud::setP1Name(String text1)
{
    p1_Name.setString(text1);
}
void Hud::setP2Name(String text2)
{
    p2_Name.setString(text2);
}