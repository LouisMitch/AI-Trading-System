#pragma once
#include "Tab.hpp"

class IdleTab : public TabMode
{
public:

    IdleTab();
    void Shutdown() override;
    void Update() override;
    void Startup() override;

private:



};

