#pragma once
#include "SceneBase.h"

class SceneTest : public SceneBase
{
public:
	SceneTest()
	{
		m_textPosX = 0;
		m_textPosY = 0;
		m_textVecX = 0;
		m_textVecY = 0;
		m_isEnd = false;
	}
	virtual ~SceneTest() {}

	virtual void init() override;
	virtual void end() override {}

	virtual SceneBase* update() override;
	virtual void draw() override;

	virtual bool isEnd() { return m_isEnd; }
private:
	// �e�L�X�g�\���ʒu�ύX
	int m_textPosX;
	int m_textPosY;
	int m_textVecX;
	int m_textVecY;

	bool m_isEnd;
};