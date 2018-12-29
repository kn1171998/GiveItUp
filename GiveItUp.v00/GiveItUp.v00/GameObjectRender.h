#pragma once
#include "GameObject.h"
class GameObjectRender:public GameObject
{
public:
	void Init(const char * textureName, int x, int y)override;
protected:
	sf::Texture texture;
	sf::Sprite sprite;
	

};

