#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class ParentHud
{
private:
    Vector2u resolution;
    Font m_Font;
protected:
    void setCenter(Text& text, float xScaler, float yScaler);
    void setTextBox(Text& text, String words);
};

