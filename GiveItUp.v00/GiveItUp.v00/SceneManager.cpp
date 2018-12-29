#include "stdafx.h"
#include "SceneManager.h"

SceneManager* SceneManager::m_pInstance = NULL;
SceneManager* SceneManager::GetInstance() {
	if (m_pInstance == NULL)
		m_pInstance = new SceneManager();
	return m_pInstance;
}
SceneManager::SceneManager()
{
}


SceneManager::~SceneManager()
{
	if (m_pInstance != NULL)
		delete SceneManager::GetInstance()->m_pInstance;
	SceneManager::GetInstance()->m_pInstance = 0;
}
Scene* SceneManager::GetCurrentScene() {
	return m_sCurrentScene;
}
