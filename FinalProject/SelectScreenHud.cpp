#include "SelectScreenHud.h"

void SelectHud::setCenter(Text& text, float xScaler, float yScaler)
{
    FloatRect textRect1 = text.getLocalBounds();
    text.setOrigin(textRect1.left +
        textRect1.width / 2.0f,
        textRect1.top +
        textRect1.height / 2.0f);
    text.setPosition(
        resolution.x / xScaler, resolution.y / yScaler);
}
void SelectHud::setTextBox(Text& text, String words)
{
    text.setFont(m_Font);
    text.setCharacterSize(100);
    text.setFillColor(Color::Black);
    text.setString(words);
}

SelectHud::SelectHud()
{
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
    m_Font.loadFromFile("fonts/font.ttf");
    setTextBox(m_Title1, "Player One: Choose Your Character!");
    setCenter(m_Title1, 2.0f, 9.0f);
    setTextBox(m_Title2, "Player Two: Choose Your Character!");
    setCenter(m_Title2, 2.0f, 9.0f);
    setTextBox(m_PeteText, "Pete");
    setCenter(m_PeteText, 21.0f, 1.25f);
    setTextBox(m_ArcherText, "Kyle");
    setCenter(m_ArcherText, 2.8f, 1.25f);
    setTextBox(m_OgreText, "Clopsy");
    setCenter(m_OgreText, 2.0f, 1.25f);
    setTextBox(m_SwordmanText, "Legend");
    setCenter(m_SwordmanText, 1.25f, 1.25f);
}

Text SelectHud::getTitle1Text()
{
    return m_Title1;
}

Text SelectHud::getOgreText()
{
    return m_OgreText;
}

Text SelectHud::getPeteText()
{
    return m_PeteText;
}

Text SelectHud::getSwordmanText()
{
    return m_SwordmanText;
}

Text SelectHud::getArcherText()
{
    return m_ArcherText;
}

Text SelectHud::getTitle2Text()
{
    return m_Title2;
}