// GiveItUp.v00.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "define.h"
#include "SceneManager.h"
#include <Windows.h>


int main()
{
	srand(time(NULL));
	sf::RenderWindow window(sf::VideoMode(WINDOWS_W, WINDOWS_H), "GiveItUp");
	window.setFramerateLimit(200);
	SceneManager::GetInstance()->Init();
	DWORD start, end;
	DWORD deltatime;
	start = GetTickCount();
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		end = GetTickCount();
		deltatime = end - start;
		//Update-------------------------------------------------------Update
		SceneManager::GetInstance()->Update((float)deltatime / 1000.0f);
		//Draw----------------------------------------------------------Draw
		window.clear();
		SceneManager::GetInstance()->Render(window);
		//window.draw(m_spriteBackground);
		window.display();
		start = end;
	}

	return 0;
}

