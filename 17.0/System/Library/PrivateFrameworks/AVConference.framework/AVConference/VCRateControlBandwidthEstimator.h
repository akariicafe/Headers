@class VCRateControlServerBag, SuddenChangeParameters;

@interface VCRateControlBandwidthEstimator : NSObject {
    unsigned int _totalBytesInProbingSequence;
    unsigned int _totalPacketsInProbingSequence;
    double _lastPacketInProbingSequenceArrivalTime;
    double _earlyProbingPacketArrivalTime;
    unsigned int _earlyBytesInProbingSequence;
    unsigned int _earlyPacketsInProbingSequence;
    unsigned int _referencePacketDataSize;
    BOOL _isInitialized;
    BOOL _isFirstBWEstimationReleased;
    unsigned int _lastProbingSequenceTimestamp;
    unsigned int _lastProbingSequenceReferenceTimestamp;
    double _firstDivergeTime;
    int _bandwidthDivergeCount;
    int _suddenChangeBandwidthBufferIndex;
    double _suddenChangeBandwidthBuffer[30];
    unsigned int _overRangePacketsCount;
    double _totalBandwidth;
    SuddenChangeParameters *_suddenChangeParameters;
    unsigned int _minPacketsCount;
    double _minEstimationWindowDuration;
    double _maxDetectableBandwidth;
    unsigned int _maxOverRangePacketsCount;
    unsigned int _minProbingSequenceSize;
    void *_logBWEDump;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) double estimatedBandwidthUncapped;
@property (nonatomic) unsigned int radioAccessTechnology;
@property (nonatomic) unsigned int mode;
@property (readonly, nonatomic) int bandwidthEstimationState;
@property (readonly, nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;
@property (retain, nonatomic) VCRateControlServerBag *serverBag;
@property (readonly, nonatomic) double lastProbingArrivalTime;

- (id)init;
- (void)dealloc;
- (void)enableBWELogDump:(void *)a0;

@end
