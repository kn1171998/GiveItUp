#include "stdafx.h"
#include "GameObjectRender.h"

void GameObjectRender::Init(const char* textureName, int x, int y){
	texture.loadFromFile(textureName);
	sprite.setTexture(texture);
	sprite.setPosition(x, y);

}
