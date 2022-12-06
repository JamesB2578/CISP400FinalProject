#include "Player2.h"
#include "TextureHolder.h"


void PlayerTwo::setCharacterType(int type)
{
	switch (type)
	{
	case 1:
		m_Gravity = 500.0;
		m_JumpDuration = 1.0;
		m_CharacterTypeName = "PETE";
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/pete.png"));
		m_health = 400.0;
		m_Speed = 1000.0;
		break;

	case 2:
		m_Gravity = 500.0;
		m_JumpDuration = 1.0;
		m_CharacterTypeName = "KYLE";
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/archerFlipped.png"));
		m_health = 400.0;
		m_Speed = 1000.0;
		break;

	case 3:
		m_Gravity = 500.0;
		m_JumpDuration = 1.0;
		m_CharacterTypeName = "CLOPSY";
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/ogreFlipped.png"));
		m_health = 400.0;
		m_Speed = 1000.0;
		break;



	case 4:
		m_Gravity = 500.0;
		m_JumpDuration = 1.0;
		m_CharacterTypeName = "LEGEND";
		m_Sprite = Sprite(TextureHolder::GetTexture("graphics/swordmanFlipped.png"));
		m_health = 400.0;
		m_Speed = 1000.0;
		break;
	}
}