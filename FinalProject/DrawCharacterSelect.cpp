#include "Engine.h"

void Engine::drawCharacterSelect()
{
	if (state == State::CharacterSelect1)
	{
		m_Window.draw(m_SelectSprite);
		m_Window.draw(m_SelectHud1.getTitle1Text());
		m_Window.draw(m_SelectHud1.getOgreText());
		m_Window.draw(m_SelectHud1.getArcherText());
		m_Window.draw(m_SelectHud1.getPeteText());
		m_Window.draw(m_SelectHud1.getSwordmanText());

	}

	if (state == State::CharacterSelect2)
	{
		m_Window.draw(m_SelectSprite);
		m_Window.draw(m_SelectHud1.getTitle2Text());
		m_Window.draw(m_SelectHud1.getOgreText());
		m_Window.draw(m_SelectHud1.getArcherText());
		m_Window.draw(m_SelectHud1.getPeteText());
		m_Window.draw(m_SelectHud1.getSwordmanText());
	}
}