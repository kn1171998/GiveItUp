#pragma once
#include "Scene.h"
class SceneManager
{
public:
	SceneManager();
	~SceneManager();
	sf::Vector2u TextureSize;
	sf::Vector2u WindowSize;
	static SceneManager* GetInstance();
	void Update(float deltime);
	void Render(sf::RenderWindow &window);
	void Init();
	Scene* GetCurrentScene();
	
private:
	static SceneManager* m_pInstance;
	Scene *m_sCurrentScene;
	Scene *m_sNewScene;
};

