#pragma once
#include "ParentHud.h"
using namespace sf;
class EndHud: public ParentHud
{
private:
    Text m_WinnerText;
    Text m_PlayAgainText;
public:
    EndHud();
    Text getWinnerText();
    Text getPlayAgainText();
    void setWinnerText(String Text);


};