#pragma once
#include "raylib.h"

class Graph2DEditor;
class GameObject;
class Application
{
public:
	Application(int windowWidth, int windowHeight, const char* title);
	~Application();
	void Run();
	void Update(float deltaTime);
	void Draw();
	void Load();
	void UnLoad();
	void LoadTextures();
	void LoadPlayer();
	

	
protected:
private:

	
	
	int m_windowWidth;
	int m_windowHeight;
	const char* m_windowTitle;
};