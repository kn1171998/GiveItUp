#pragma once
#include "Scene.h"
class GameScene: public Scene
{
public:
	GameScene();
	~GameScene();
	void Init();
	void Update(float dt) ;
	void Render(RenderWindow &window);
private:
	int m_isScore;

};

