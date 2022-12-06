#pragma once
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;
class SelectHud
{
private:
    Vector2u resolution;
    Font m_Font;
    Text m_PeteText;
    Text m_ArcherText;
    Text m_SwordmanText;
    Text m_OgreText;
    Text m_Title1;
    Text m_Title2;


public:
    SelectHud();
    Text getTitle1Text();
    Text getTitle2Text();
    Text getOgreText();
    Text getPeteText();
    Text getSwordmanText();
    Text getArcherText();
    void setCenter(Text& text, float xScaler, float yScaler);
    void setTextBox(Text& text, String words);

};
