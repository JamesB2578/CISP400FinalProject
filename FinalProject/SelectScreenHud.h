#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class SelectHud
{
private:
    String m_titleW;
    Font m_Font;
    Text m_PeteText;
    Text m_ArcherText;
    Text m_SwordmanText;
    Text m_OgreText;
    Text m_Title;


public:
    SelectHud();
    Text getText();

};

void setCenter(Vector2u res, Text text, float xSclaler, float yScaler);
void setTextBox(Text text, Font font, int characterSize, String words);