#pragma once

class CommunicationMonitor
{
  private:
    int noDataCount_;//已经丢了多少帧
    int timeoutFrames_; // 丢帧阈值
  public:
    CommunicationMonitor(int timeoutFrames):timeoutFrames_(timeoutFrames)
    {
        noDataCount_ = 0;
    }

    void update(bool received);

    bool isTimeout() const;
};