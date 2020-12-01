#include "Application.h"
#include "raylib.h"
#include "Gameobject.h"
#include <iostream>


Application::Application(int windowWidth, int windowHeight, const char* title)
{
	m_windowHeight = windowHeight;
	m_windowWidth = windowWidth;
    m_windowTitle = title;
}
Application::~Application()
{

}
void Application::Run()
{
	InitWindow(m_windowWidth, m_windowHeight, m_windowTitle);
    SetTargetFPS(60);
    Load();

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();
        Update(deltaTime);
        Draw();
    }
   
    UnLoad();   

    CloseWindow();
}
void Application::Update(float deltaTime)
{
   
}
void Application::Load()
{
   
}
void Application::UnLoad()
{
   
}
void Application::Draw()
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    
    EndDrawing();
}
void Application::LoadTextures()
{
    
}

void Application::LoadPlayer()
{
    
}
