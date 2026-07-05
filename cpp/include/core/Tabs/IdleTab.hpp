#pragma once
#include "Tab.hpp"

class IdleTab : public Tab
{
public:

    IdleTab();
    void Shutdown() override;
    void Update() override;

};

IdleTab::IdleTab()
{
}
