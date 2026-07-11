#pragma once
#include <memory>
#include <vector>

#include "tabs/Tab.hpp"

class TabManager
{
private:
    std::vector<std::unique_ptr<Tab>> m_Tabs;
    uint64_t m_NextTabID = 0;

//section for private methods
private:

public:

    TabManager() = default;
    ~TabManager() = default;
    void Update();
    uint64_t CreateTab();
    void DeleteTab(uint64_t tab);

    const Tab* GetTab(uint64_t id) const;
    Tab* GetTab(uint64_t id);

    void Shutdown();
};

