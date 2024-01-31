@interface ContinuousAVFlowDetector : AVFlowDetector {
    unsigned long long _minUDPFlowSamplesForAudioVideoDetermination;
    double _minUDPFlowElapsedTimeForAudioVideoDetermination;
    double _minUDPFlowDuplexThroughputForAudioVideoDetermination;
    unsigned long long _minTCPFlowSamplesForAudioVideoDetermination;
    double _minTCPFlowElapsedTimeForAudioVideoDetermination;
    double _minTCPFlowDuplexThroughputForAudioVideoDetermination;
}

- (id)init;
- (void)setDefaults;
- (int)possibleAVFlowScore:(id)a0 result:(struct AVFlowDetectionResult { int x0; double x1; id x2; } *)a1;

@end
