#pragma once
#include <memory>
#include <vector>

#include "tabs/Tab.hpp"

class TabManager
{
private:

    std::vector<std::unique_ptr<Tab>> m_Tabs;

public:

    TabManager() = default;
    ~TabManager() = default;
    void Update();
    Tab& CreateTab();
    void DeleteTab(Tab& tab);
    void GetTab(Tab& tab);
    void Shutdown();
};

