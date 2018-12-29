#pragma once
#include "Scene.h"
class GameScene:public Scene
{
public:
	GameScene();
	~GameScene();
	void Init()override;
	void Update(float dt) override;
	void Render(RenderWindow &window)override;
private:
	int m_isScore;

};

