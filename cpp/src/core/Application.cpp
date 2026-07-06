#include "Application.hpp"
#include "TabManager.hpp"
#include <iostream>


Application::Application()
    : m_Running(true)
{
}

Application::~Application()
{
}

void Application::Run()
{

    Initialise();

    while (m_Running)
    {
        Update();
    }
    
    Shutdown();
}

void Application::Update()
{
    std::cout << "UpdateRunning\n";

    for (int i = 0; i < 5; i++)
    {
    std::cout << i << "\n";
    }
    m_Running = false;
}

void Application::Initialise()
{
    std::cout << "Starting Application\n";
}

void Application::Shutdown()
{
    std::cout << "Shutting Down\n";
}