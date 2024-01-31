@interface VCStatisticsHistory : NSObject {
    struct VCStatisticsStatsHistoryElement { unsigned char linkID; double statsUpdateTime; unsigned int statsTimestamp; unsigned int totalPacketSent; unsigned int totalPacketReceived; unsigned long long totalByteSent; unsigned long long totalByteReceived; unsigned long long totalByteServerStatsUsed; unsigned int maxBurstyLoss; } _statsHistory[500];
    int _statsHistorySize;
    int _currentStatsHistoryIndex;
    struct VCStatisticsStatsHistoryElement { unsigned char linkID; double statsUpdateTime; unsigned int statsTimestamp; unsigned int totalPacketSent; unsigned int totalPacketReceived; unsigned long long totalByteSent; unsigned long long totalByteReceived; unsigned long long totalByteServerStatsUsed; unsigned int maxBurstyLoss; } _lastStats;
    unsigned char _currentLinkID;
    double _lastHistoryNotEnoughLogTime;
    struct VCStatisticsSendHistoryElement { unsigned int x0; double x1; unsigned int x2; unsigned long long x3; struct VCStatisticsSendHistoryElement *x4; struct VCStatisticsSendHistoryElement *x5; } *_sendHistory;
}

- (void)dealloc;
- (void)clearSendHistory;

@end
