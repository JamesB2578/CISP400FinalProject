#include "MainHUD.h"
Hud::Hud()
{
    Vector2u resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Font.loadFromFile("fonts/font.ttf");

    m_selectText.setFont(m_Font);
    m_selectText.setCharacterSize(100);
    m_selectText.setFillColor(Color::Black);
    m_selectText.setString("Selection Screen");

    FloatRect textRect1 = m_selectText.getLocalBounds();
    m_selectText.setOrigin(textRect1.left +
        textRect1.width / 2.0f,
        textRect1.top +
        textRect1.height / 2.0f);
    m_selectText.setPosition(
        resolution.x / 2.0f, resolution.y / 2.0f);

    m_endText.setFont(m_Font);
    m_endText.setCharacterSize(100);
    m_endText.setFillColor(Color::Black);
    m_endText.setString("End");

    FloatRect textRect2 = m_endText.getLocalBounds();
    m_endText.setOrigin(textRect2.left +
        textRect2.width / 2.0f,
        textRect2.top +
        textRect2.height / 2.0f);
    m_endText.setPosition(
        resolution.x / 2.0f, resolution.y / 2.0f);

    m_pausedText.setFont(m_Font);
    m_pausedText.setCharacterSize(100);
    m_pausedText.setFillColor(Color::Black);
    m_pausedText.setString("Select 2");

    FloatRect textRect3 = m_pausedText.getLocalBounds();
    m_pausedText.setOrigin(textRect3.left +
        textRect3.width / 2.0f,
        textRect3.top +
        textRect3.height / 2.0f);
    m_pausedText.setPosition(
        resolution.x / 2.0f, resolution.y / 2.0f);
}

Text Hud::getSelectText()
{
    return m_selectText;

}

Text Hud::getEndText()
{
    return m_endText;

}

Text Hud::getPausedText()
{
    return m_pausedText;

}