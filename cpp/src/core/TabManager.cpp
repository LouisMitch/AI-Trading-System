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

uint64_t TabManager::CreateTab()
{
    uint64_t id = m_NextTabID;
    m_Tabs.push_back(std::make_unique<Tab>(id));
    ++m_NextTabID;

    return id;
}

void TabManager::DeleteTab(uint64_t tabId)
{
    Tab* tab = GetTab(tabId);

    if (tab != nullptr)
    {
        tab->Shutdown();
        
        std::vector<std::unique_ptr<Tab>>::iterator it = std::find_if(
            m_Tabs.begin(),
            m_Tabs.end(),
            [tab](const std::unique_ptr<Tab>& storedTab)
        
        {
            return storedTab.get() == tab;
        }
        );

        m_Tabs.erase(it);
    }

    else
    {
        std::cout << "tab dosent exist\n";
    }
}



const Tab* TabManager::GetTab(uint64_t tabId) const
{
    for (const std::unique_ptr<Tab>& tab : m_Tabs)
    {
        if (tab->GetID() == tabId)
        {
            return tab.get();
        }
    }

    std::cout << "tab dosent exist\n";
    return nullptr;
}

Tab* TabManager::GetTab(uint64_t tabId)
{
    for (std::unique_ptr<Tab>& tab : m_Tabs)
    {
        if (tab->GetID() == tabId)
        {
            return tab.get();
        }
    }

    return nullptr;
}