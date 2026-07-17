#pragma once

#include <memory>



enum class TabModeType
{
    Idle,
    Live,
    LivePaper,
    HistoricalPaper
};

class TabMode
{
public:
    virtual ~TabMode() = default;
    virtual void Update() = 0;
    virtual void Shutdown() = 0;
    virtual void Startup() = 0;
};

enum class TabState
{
    Running,
    Paused
};

class Tab
{
private:

    std::unique_ptr<TabMode> m_Mode;
    TabModeType m_CurMode;
    const uint64_t m_TabId;
    TabState m_State;

public:

    Tab(uint64_t id);
    ~Tab() = default;
    void SetState(TabState State);
    void Update();
    void SetMode(TabModeType mode);
    void Shutdown();
    const TabModeType GetMode();
    uint64_t GetID() const
    {
        return m_TabId;
    }
};

