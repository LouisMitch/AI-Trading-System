#include "Application.hpp"
#include "TabManager.hpp"

int main()
{
    Application app;

    app.Run();

}

void Application::Run()
{
    while (m_Running)
    {
        Update();
    }
    
}

void Application::Update()
{
    //need to make tab system
}
