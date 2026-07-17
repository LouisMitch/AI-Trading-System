#pragma once
#include "tabs/Tab.hpp"

class LivePaperTab : public TabMode
{
public:

    void Shutdown() override;
    void Update() override;
    void Startup() override;

};