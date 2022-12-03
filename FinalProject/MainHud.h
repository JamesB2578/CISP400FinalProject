#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Hud
{
private:
    Font m_Font;
    Text m_selectText;
    Text m_endText;
    Text m_pausedText;

public:
    Hud();
    Text getSelectText();
    Text getEndText();
    Text getPausedText();
};
