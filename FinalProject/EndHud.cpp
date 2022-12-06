#include "EndHud.h"

EndHud::EndHud()
{
    setTextBox(m_WinnerText, "Player One Wins!");
    setCenter(m_WinnerText, 2.0f, 9.0f);
    setTextBox(m_PlayAgainText, "Press Return To Play Again");
    setCenter(m_PlayAgainText, 2.0f, 1.18f);
}

Text EndHud::getWinnerText()
{
    return m_WinnerText;
}
Text EndHud::getPlayAgainText()
{
    return m_PlayAgainText;
}
void EndHud::setWinnerText(String text)
{
    m_WinnerText.setString(text);
}