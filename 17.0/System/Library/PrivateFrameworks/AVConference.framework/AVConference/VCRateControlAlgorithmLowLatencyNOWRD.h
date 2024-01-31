@interface VCRateControlAlgorithmLowLatencyNOWRD : VCRateControlAlgorithmBase {
    unsigned short _echoedTimestamp;
    unsigned short _previousTimestamp;
    unsigned short _queuingDelayTimestamp;
    unsigned int _receiveTimestamp;
    unsigned int _timestampWrapAroundCounter;
    unsigned int _newOWRDSampleCollected;
    double _previousNOWRD;
    double _sendBitrateLimitedStartTime;
    double _sendBitrateStartTime;
    double _lastSendDataTime;
    double _lastRampDownTime;
    double _lastPositiveOWRDTime;
    BOOL _isRampUpSettling;
    unsigned int _actualSendBitrate;
    unsigned int _instantBitrate;
    unsigned int _fastRampDownBitrateRange;
    unsigned int _maxBurstyLoss;
    unsigned int _nwConnectionMaxThroughput;
    unsigned int _nwConnectionAvgThroughput;
    int _nwConnectionRateTrendSuggestion;
    double _nwConnectionAvgDelay;
    BOOL _shouldBlockRampUpForNWConnection;
    unsigned int _nwConnectionOverDelayThresholdCount;
    unsigned int _nwConnectionPacketLossPerFrame;
    BOOL _isStable;
    double _rampUpSettleDuration;
    double _rateChangeSystemTime;
}

- (id)init;
- (BOOL)setUpVTable;

@end
