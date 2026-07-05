#pragma once

class Tab
{
public:

virtual ~Tab() = default;
virtual void Update() = 0;
virtual void Shutdown() = 0;

private:

};
