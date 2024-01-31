@class NSString;

@interface VCVideoStreamNOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol> {
    double _packetLossRate;
    double _roundTripTime;
    double _firstReceiveTime;
    double _shortAverageLag;
    double _longAverageLag;
    struct OWRDList { double time[100]; double owrd[100]; int frontIndex; int rearIndex; int size; } OWRDList;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    BOOL _lossEventBuffer[4];
    int _lossEventBufferIndex;
    double _lastLossEventTime;
    double _rampUpFrozenTime;
    double _rampUpFrozenDuration;
    double _rampDownLossRateThreshold;
    double _rampDownLossEventBitrateThreshold;
    double _rampDownLossEventCountThreshold;
    double _rampUpNoLossEventDurationRatio;
    double _rampUpStatusRateLimitedThreshold;
    double _nowrdRampDownThreshold;
    double _nowrdRampUpThreshold;
    double _nowrdAccRampDownThreshold;
    double _nowrdAccRampUpThreshold;
    unsigned int _rampUpStatus;
    unsigned int _rampDownStatus;
    double _rateControlTime;
    unsigned int _averageReceivedBitrate;
    unsigned int _totalActualBitrate;
    unsigned int _doRateControlCounter;
    unsigned short _currentTierIndex;
    unsigned short _prevOperatingTierIndex;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
}

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) unsigned int targetBitrate;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;
@property (nonatomic) double rateControlInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)className;
- (void)calculateNOWRD:(double)a0 time:(double)a1;
- (void)calculateOWRDWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;
- (void)doRateControlWithTime:(double)a0 roundTripTime:(double)a1 packetLossRate:(double)a2 operatingTierIndex:(unsigned short)a3 averageReceivedBitrate:(unsigned int)a4;
- (int)lossEventCount;
- (int)lossEventCountThresholdForBitrate:(unsigned int)a0;
- (void)printRateControlFullInfoWithLogDump:(void *)a0 time:(double)a1 videoStall:(BOOL)a2 videoFrozenDuration:(double)a3 averageTargetBitrate:(unsigned int)a4;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (void)resetLossEventBuffer;
- (void)setMaxTierIndex:(unsigned short)a0 minTierIndex:(unsigned short)a1;
- (BOOL)shouldRampDown;
- (BOOL)shouldRampUp;
- (void)stateChange:(int)a0;
- (void)stateEnter;
- (void)stateExit;
- (void)updatePacketLossRate:(double)a0 time:(double)a1;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;

@end
