#include "tabs/Tab.hpp"
#include "tabs/IdleTab.hpp"
#include <iostream>

Tab::Tab(uint64_t id)
    : m_TabId(id)
{
    SetMode(TabModeType::Idle);
    SetState(TabState::Running);
}

void Tab::Update()
{
    if (m_State == TabState::Running)
    {
        m_Mode->Update();
    }
}

void  Tab::Shutdown()
{
    m_Mode->Shutdown();
}

void Tab::SetMode(TabModeType mode)
{
    if (mode == m_CurMode)
    {
        return;
    }

    if (m_Mode)
    {
        m_Mode->Shutdown();
    }

    std::unique_ptr<TabMode> newMode;

    switch(mode) {
        case TabModeType::Idle:
            newMode = std::make_unique<IdleTab>();

            break;

        case TabModeType::Live:


            break;

        case TabModeType::LivePaper:


            break;
        
        case TabModeType::HistoricalPaper:


            break;

        default:
            return;
    }

    m_Mode = std::move(newMode);
    m_CurMode = mode;
    m_Mode->Startup();
}

void Tab::SetState(TabState state)
{
    m_State = state;
}
