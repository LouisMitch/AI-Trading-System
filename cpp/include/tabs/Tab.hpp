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
};

class Tab
{
private:

    std::unique_ptr<TabMode> m_Mode;

    const uint64_t m_TabId;

public:

    Tab(uint64_t id);
    void Update();
    void SetMode(TabModeType mode);
    void Shutdown();
    uint64_t GetID() const
    {
        return m_TabId;
    }
};

