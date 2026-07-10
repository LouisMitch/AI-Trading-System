#pragma once

class Application
{
private:

    void Update();
    void Initialise();
    bool m_Running;
    void Shutdown();
    int m_UpdateCount = 0;
    


public:

    Application();
    void Run();
    ~Application();

};



