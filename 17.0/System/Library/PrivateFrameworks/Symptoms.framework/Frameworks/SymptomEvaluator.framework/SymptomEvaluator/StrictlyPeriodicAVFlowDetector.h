@interface StrictlyPeriodicAVFlowDetector : AVFlowDetector {
    double _maxPeriodicAVTCPFlowBusyInterval;
    double _minPeriodicAVTCPFlowCycleTime;
    double _maxPeriodicAVTCPFlowCycleTime;
    double _maxPeriodicAVTCPFlowCycleVariance;
    unsigned long long _minPeriodicAVTCPFlowCyclesToConsider;
    unsigned long long _maxPeriodicAVTCPFlowCyclesToConsider;
    double _maxPeriodicAVUDPFlowBusyInterval;
    double _minPeriodicAVUDPFlowCycleTime;
    double _maxPeriodicAVUDPFlowCycleTime;
    double _maxPeriodicAVUDPFlowCycleVariance;
    unsigned long long _minPeriodicAVUDPFlowCyclesToConsider;
    unsigned long long _maxPeriodicAVUDPFlowCyclesToConsider;
    unsigned int _scoreBaselinePass;
    unsigned int _scorePerCycleIncrement;
    unsigned int _scoreTCIncrement;
    unsigned int _scoreMax;
}

- (id)init;
- (int)setConfiguration:(id)a0;
- (void)setDefaults;
- (id)getState:(BOOL)a0;
- (int)possibleAVFlowScore:(id)a0 result:(struct AVFlowDetectionResult { int x0; double x1; id x2; } *)a1;

@end
