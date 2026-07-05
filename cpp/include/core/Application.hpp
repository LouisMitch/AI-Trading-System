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



