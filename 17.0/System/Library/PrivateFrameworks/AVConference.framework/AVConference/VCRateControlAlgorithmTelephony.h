@interface VCRateControlAlgorithmTelephony : VCRateControlAlgorithmBase {
    short _currentRSRP;
    unsigned char _currentUplinkBLER;
    unsigned int _nwConnectionAvgDelay;
    unsigned int _nwConnectionAvgThroughput;
    double _lastTimeBLERBelowRampDownThreshold;
    double _lastTimeBLERAboveRampUpThreshold;
}

- (id)init;
- (BOOL)setUpVTable;

@end
