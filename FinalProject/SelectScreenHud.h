#pragma once
#include "ParentHud.h"
using namespace sf;
class SelectHud: public ParentHud
{
private:
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


};
