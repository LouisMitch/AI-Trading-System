#include "tabs/Tab.hpp"
#include <iostream>

Tab::Tab(uint64_t id)
    : m_TabId(id)
{
}



void Tab::Update()
{
    std::cout << "hello im talking from tab: " << m_TabId << "\n";
}

void  Tab::Shutdown()
{
    std::cout << "Tab: " << m_TabId << " Sutting down\n";
}

void Tab::SetMode(TabModeType mode)
{

}

