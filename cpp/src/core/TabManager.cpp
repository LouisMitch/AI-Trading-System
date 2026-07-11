#include <memory>
#include <vector>
#include <algorithm>
#include <iostream>

#include "core/TabManager.hpp"

void TabManager::Update()
{
    for (std::unique_ptr<Tab>& tab : m_Tabs) 
    {
        tab->Update();
    }
}

void TabManager::Shutdown()
{
    for (std::unique_ptr<Tab>& tab : m_Tabs)
    {
        tab->Shutdown();
    }

    m_Tabs.clear();
}

Tab& TabManager::CreateTab()
{
    m_Tabs.push_back(std::make_unique<Tab>());
        return *m_Tabs.back();
}

void TabManager::DeleteTab(Tab& tab)
{
    auto it = std::find_if(
        m_Tabs.begin(),
        m_Tabs.end(),
        [&tab](const std::unique_ptr<Tab>& currentTab)
        {
            return currentTab.get() == &tab;
        }
    );

    if (it != m_Tabs.end())
    {
        (*it)->Shutdown();
        m_Tabs.erase(it);
        std::cout << "Tab deleted\n";
    }
}

void TabManager::GetTab(Tab& tab)
{

}