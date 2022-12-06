#include "MainHUD.h"
Hud::Hud()
{
    p1_healthBar.setFillColor(Color::Red);
    p1_healthBar.setPosition(30, 30);
    p2_healthBar.setFillColor(Color::White);
    p2_healthBar.setPosition(450, 980);
    setTextBox(paused, "PAUSED: Press Return To Continue");
    setCenter(paused, 2.0f, 2.0f);
    setTextBox(p1_Name, "AAAAAAAAAAAA");
    setCenter(p1_Name, 2.0f, 2.0f);
    setTextBox(p2_Name, "f");
    setCenter(p2_Name, 2.0f, 9.0f);
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
void Hud::setP1Name(String text)
{
    p1_Name.setString(text);
}
void Hud::setP2Name(String text)
{
    p2_Name.setString(text);
}