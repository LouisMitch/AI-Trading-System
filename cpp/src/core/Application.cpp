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
    m_TabManager.CreateTab();
    m_TabManager.Update();

    if (m_UpdateCount >= 6)
    {
        m_TabManager.Shutdown();
        m_Running = false;
    }
}

void Application::Initialise()
{
    std::cout << "Starting Application\n";
    m_Running = true;
    uint64_t IdTest = m_TabManager.CreateTab();
}

void Application::Shutdown()
{
    std::cout << "Shutting Down \n";
    m_TabManager.Shutdown();
}