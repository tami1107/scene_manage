#include "DxLib.h"

#include "SceneMain.h"
#include "SceneTitle.h"
#include "SceneTest.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;
}

SceneBase* SceneMain::update()
{
	// 文字の移動
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 300)
	{
		m_textPosX = 300;
		m_textVecX = -4;
	}

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_2)
	{
		PlaySoundFile("sound/cursor1.mp3", DX_PLAYTYPE_NORMAL);
	}
	if (padState & PAD_INPUT_3)
	{
		return (new SceneTitle);
	}

	return this;
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0, "メイン画面", GetColor(255, 255, 255));
}