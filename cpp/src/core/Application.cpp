#include "core/Application.hpp"
#include "core/TabManager.hpp"
#include <iostream>


Application::Application()
    : m_Running(false)
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
    std::cout << "Update: " << m_UpdateCount << "\n";

    ++m_UpdateCount;

    if (m_UpdateCount >= 6)
    {
        m_Running = false;
    }
}

void Application::Initialise()
{
    std::cout << "Starting Application\n";
    m_Running = true;
}

void Application::Shutdown()
{
    std::cout << "Shutting Down\n";
}