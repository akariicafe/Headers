@class NSString;

@interface VCAggregatorAudioStream : VCAggregator {
    int _mode;
    double _sessionTotalDuration;
    double _maxHostTimeJumpSize;
    double _totalHostTimeJumpSize;
    int _countHostTimeJumped;
    unsigned int _mediaCaptureJitterTotal;
    unsigned int _mediaCaptureBufferRateTotal;
    double _totalAudioErasureTime;
    unsigned int _audioErasureCount;
    unsigned int _maxAudioErasureCount;
    double _averageJitterBufferDelay;
    unsigned int _channelCountRx;
    unsigned int _channelCountTx;
    unsigned int _averageJitterBufferDelayCount;
    double _maxJBTargetSizeChanges;
    double _avgJBTargetSizeChanges;
    unsigned int _avgJBTargetSizeChangesCount;
    int _twoPtFourGhzChannelCount;
    int _fiveGhzChannelCount;
    int _dfsChannelCount;
    int _inactiveSlotCount;
    struct { int twoPtFourGhzChannelCount; int fiveGhzChannelCount; int dfsChannelCount; int inactiveSlotCount; } _channelSequenceStats;
    struct { int twoPtFourGhzChannelCount; int fiveGhzChannelCount; int dfsChannelCount; int inactiveSlotCount; } _previousChannelSequenceStats;
    unsigned int _rtcpTimeoutCount;
}

@property (copy, nonatomic) NSString *channelSequence;
@property (retain, nonatomic) NSString *previousChannelSequence;
@property (retain, nonatomic) NSString *remoteOSBuildVersion;
@property (retain, nonatomic) NSString *remoteDeviceModel;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)aggregateChannelSequenceReport:(id)a0;
- (void)aggregateAudioPlaybackRealtimeStats:(id)a0;
- (void)aggregateMediCaptureRealtimeStats:(id)a0;
- (void)aggregateRealtimeStats:(id)a0;
- (void)aggregateSystemInfoReport:(id)a0;
- (id)aggregatedCallReport;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
- (void)allModesProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)allModesProcessRealtimeStats:(id)a0;
- (id)initWithDelegate:(id)a0 withMode:(int)a1;
- (void)processAudioPlaybackRealtimeStats:(id)a0;
- (void)processAudioStreamStart:(id)a0;
- (void)processChannelSequenceStats:(id)a0;
- (void)processEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)processMediaCaptureRealtimeStats:(id)a0;
- (void)processTransportInfo:(id)a0;
- (void)remoteMicProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)remoteMicProcessRealtimeStats:(id)a0;
- (void)screenSharingProcessEventWithCategory:(unsigned short)a0 payload:(id)a1;
- (void)telephonyCallingProcessEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (void)telephonyCallingProcessRealtimeStatsTelephonyCalling:(id)a0;
- (void)updateAudioStreamHostTimeJumpSizeStats:(id)a0;

@end
