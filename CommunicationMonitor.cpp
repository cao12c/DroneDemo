#include "CommunicationMonitor.h"

void CommunicationMonitor::update(bool received)
{
    if (received)
    {
        noDataCount_ = 0;
    }
    else
    {
        noDataCount_++;
    }
}

bool CommunicationMonitor::isTimeout() const
{
    if (noDataCount_ >= timeoutFrames_)
    {
        return true;
    }
    else
    {
        return false;
    }
}