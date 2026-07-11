#pragma once
#include "core/TabManager.hpp"

class Application
{
private:

    void Update();
    void Initialise();
    bool m_Running;
    void Shutdown();

private:

    TabManager m_TabManager;
    int m_UpdateCount = 0;
    
public:

    Application();
    void Run();
    ~Application();

};



