#pragma once

class Application
{
private:

    void Update();
    void Initialise();
    bool m_Running;
    void Shutdown();
    


public:

    Application();
    void Run();
    ~Application();

};

Application::Application()
    : m_Running(true)
{
}

Application::~Application()
{
}


