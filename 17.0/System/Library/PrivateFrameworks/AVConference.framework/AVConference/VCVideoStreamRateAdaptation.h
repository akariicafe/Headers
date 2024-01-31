@class VCVideoStreamRateController, VCMediaStreamStats;

@interface VCVideoStreamRateAdaptation : VCMediaStreamRateAdaptation {
    unsigned int _receivedTmmbnBitrate;
    BOOL _rateAdaptationEnabled;
    BOOL _downlinkQualityDidChange;
    double _tmmbrSendTime;
    double _tmmbnReceiveTime;
    double _adaptationTime;
    double _averageBitrateWindowDuration;
    struct opaqueRTCReporting { } *_reportingAgent;
    int _reportingModuleID;
    VCVideoStreamRateController *_rateController;
}

@property (readonly, nonatomic) struct tagHANDLE { int x0; } *rtpHandle;
@property (readonly, nonatomic) double packetLossPercentage;
@property (readonly, nonatomic) double roundTripTime;
@property (readonly, nonatomic) double owrd;
@property (readonly, nonatomic) double nowrd;
@property (readonly, nonatomic) double nowrdShort;
@property (readonly, nonatomic) double nowrdAcc;
@property (readonly, nonatomic) unsigned int operatingBitrate;
@property (readonly, nonatomic) unsigned int sendTmmbrBitrate;
@property (readonly, nonatomic) BOOL isOperatingAtMaxBitrate;
@property (readonly, nonatomic) BOOL isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;
@property (retain, nonatomic) VCMediaStreamStats *stats;

- (void)dealloc;
- (id)className;
- (unsigned int)averageReceivedBitrate;
- (id)initWithMediaStreamRateAdaptationParam:(const struct tagVCMediaStreamRateAdaptationParams { id x0; unsigned int x1; struct opaqueRTCReporting *x2; int x3; struct tagVCMediaStreamRateAdaptationConfig { long long x0; union tagVCMediaStreamRateAdaptationAlgorithmConfig { struct tagVCMediaStreamRateAdaptationConfigTelephonyUplink { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct tagVCMediaStreamRateAdaptationConfigScreenShare { unsigned int x0; unsigned int x1; unsigned int x2; int x3; } x1; } x1; } x4; struct tagHANDLE *x5; int x6; BOOL x7; id x8; id x9; } *)a0;
- (void)receivedTMMBN:(unsigned int)a0;
- (void)reportingVideoStreamEvent:(unsigned short)a0;
- (BOOL)runVideoStreamRateAdaptation;
- (void)scheduleTMMBR:(unsigned int)a0;
- (void)setEnableRateAdaptation:(BOOL)a0 maxBitrate:(unsigned int)a1 minBitrate:(unsigned int)a2 adaptationInterval:(double)a3;
- (void)setOperatingBitrate:(unsigned int)a0;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)a0 sampleRate:(unsigned int)a1 time:(double)a2 size:(unsigned int)a3 endOfFrame:(BOOL)a4;
- (void)updateVideoStall:(BOOL)a0 withStallDuration:(unsigned int)a1;

@end
