@interface VCRateControlAlgorithmSparseNOWRD : VCRateControlAlgorithmBase {
    double _pauseStartTime;
    unsigned short _previousTimestamp;
    unsigned int _timestampWrapAroundCounter;
    double _statisticsArrivalTime;
    double _previousStatisticsArrivalTime;
    double _lastCongestionTime;
    double _lastRampUpTime;
    double _lastAllowRampUpTime;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _expectedBitrate;
    int _recentTierWindow[256];
    unsigned int _recentTierWindowSize;
    unsigned int _recentTierWindowIndex;
    unsigned int _totalTierNumbersInWindow;
    double _recentAverageTier;
    double _lastTimeDetectNoOscillation;
    BOOL _isTargetBitrateOscillating;
    int _deviationChangeCount;
    unsigned int _totalPacketSent;
    unsigned int _roundTripTimeTick;
    double _averageRoundTripTime;
    double _basebandNotificationArrivalTime;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNormalizedBDCD;
    double _basebandNormalizedQueuingDelay;
    BOOL _isWaitingForBasebandRampDown;
    double _lastBasebandRampDownTime;
    double _lastHighNBDCDTime;
    double _lastEmergencyBasebandRampDownTime;
    int _basebandAdditionalTiersForRampUp;
}

@property (readonly, nonatomic) BOOL basebandAdaptationEnabled;

- (id)init;
- (BOOL)setUpVTable;

@end
