@interface _UIMotionEffectEngineLogger : NSObject {
    long long _motionLevelSamples[8];
    long long _sampleCount;
    long long _updateFreqency;
    double _lastUpdateTimeStamp;
}

- (void)_dumpToAggregated;
- (id)initWithFastUpdateInterval:(double)a0 slowUpdateInterval:(double)a1;
- (void)recordMotionMagnitude:(double)a0 atTimestamp:(double)a1;

@end
