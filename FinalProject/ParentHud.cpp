#include "ParentHud.h"

void ParentHud::setCenter(Text& text, float xScaler, float yScaler)
{
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    FloatRect textRect1 = text.getLocalBounds();
    text.setOrigin(textRect1.left +
        textRect1.width / 2.0f,
        textRect1.top +
        textRect1.height / 2.0f);
    text.setPosition(
        resolution.x / xScaler, resolution.y / yScaler);
}
void ParentHud::setTextBox(Text& text, String words)
{
    m_Font.loadFromFile("fonts/font.ttf");
    text.setFont(m_Font);
    text.setCharacterSize(100);
    text.setFillColor(Color::Black);
    text.setString(words);
}