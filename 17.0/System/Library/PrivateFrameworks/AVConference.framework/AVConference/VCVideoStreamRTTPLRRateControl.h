@class NSString;

@interface VCVideoStreamRTTPLRRateControl : NSObject <VCVideoStreamRateControlProtocol> {
    double _rampUpFrozenDuration;
    unsigned short _currentTierIndex;
    double _packetLossRate;
    double _roundTripTime;
    double _rampUpFrozenTime;
    double _rampDownPacketLossRate;
    double _rampDownRoundTripTime;
    double _rampUpPacketLossRate;
    double _rateControlTime;
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
- (void)doRateControlWithTime:(double)a0 roundTripTime:(double)a1 packetLossRate:(double)a2 operatingTierIndex:(unsigned short)a3 averageReceivedBitrate:(unsigned int)a4;
- (void)printRateControlFullInfoWithLogDump:(void *)a0 time:(double)a1 videoStall:(BOOL)a2 videoFrozenDuration:(double)a3 averageTargetBitrate:(unsigned int)a4;
- (unsigned short)rampDownTier;
- (unsigned short)rampUpTier;
- (void)setMaxTierIndex:(unsigned short)a0 minTierIndex:(unsigned short)a1;
- (BOOL)shouldRampDown;
- (BOOL)shouldRampUp;
- (void)stateChange:(int)a0;
- (void)stateEnter;
- (void)stateExit;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2;

@end
