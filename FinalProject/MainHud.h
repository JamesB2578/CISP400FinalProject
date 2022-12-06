#pragma once
#include "ParentHud.h"
using namespace sf;
class Hud: public ParentHud
{
private:
    RectangleShape p1_healthBar;
    RectangleShape p2_healthBar;
    Text p1_Name;
    Text p2_Name;
    Text paused;

public:
    Hud();
    void setP1Name(String text);
    void setP2Name(String text);
    void setP1HealthBar(float health);
    void setP2HealthBar(float health);
    RectangleShape getP1HealthBar();
    RectangleShape getP2HealthBar();
    Text getP1NameText();
    Text getP2NameText();
    Text getPausedText();
};
