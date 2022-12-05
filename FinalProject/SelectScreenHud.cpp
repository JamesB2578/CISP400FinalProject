#include "SelectScreenHud.h"

void setCenter(Vector2u res, Text text, float xSclaler, float yScaler)
{
    FloatRect textRect1 = text.getLocalBounds();
    text.setOrigin(textRect1.left +
        textRect1.width / 2.0f,
        textRect1.top +
        textRect1.height / 2.0f);
    text.setPosition(
        res.x / xSclaler, res.y / yScaler);
}
void setTextBox(Text text, Font font, int characterSize, String words)
{
    text.setFont(font);
    text.setCharacterSize(characterSize);
    text.setFillColor(Color::Black);
    text.setString(words);
}

SelectHud::SelectHud()
{

    Vector2u resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Font.loadFromFile("fonts/font.ttf");

    setTextBox(m_Title, m_Font, 100, "Player 1: Choose a character!");
    setCenter(resolution, m_Title, 2.0, 9.0);
    setTextBox(m_PeteText, m_Font, 100, "Pete");
    setCenter(resolution, m_PeteText, 4.0f, 6.0f);
    setTextBox(m_OgreText, m_Font, 100, "Clopsy");
    setCenter(resolution, m_OgreText, 6.0f, 6.0f);
    setTextBox(m_SwordmanText, m_Font, 100, "Legend");
    setCenter(resolution, m_SwordmanText, 8.0f, 6.0f);
    setTextBox(m_ArcherText, m_Font, 100, "Kyle");
    setCenter(resolution, m_ArcherText, 10.0f, 6.0f);
}

Text SelectHud::getText()
{
    return m_Title;
}