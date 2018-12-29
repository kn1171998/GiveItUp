#pragma once
#include "define.h"
class Scene
{
public:
	Scene();
	~Scene();
	virtual void Update(float deltime);
	virtual void Render(sf::RenderWindow &window);
	virtual void Init();
private:
	char* bacgroundPath;
	sf::Texture m_textureBackground;
	sf::Sprite m_spriteBackground;
	sf::Font font;
	sf::Vector2u m_vecTextureSize;
	sf::Vector2u m_vecWindowSize;
};	

