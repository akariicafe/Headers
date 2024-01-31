@interface IMPingStatistics : NSObject {
    double _sumRoundtripTimes;
    int _numPacketsSuccessfullySent;
}

@property (nonatomic, setter=_setMedianRoundtripTime:) double medianRoundtripTime;
@property (nonatomic, setter=_setMinRoundtripTime:) double minRoundtripTime;
@property (nonatomic, setter=_setMaxRoundtripTime:) double maxRoundtripTime;
@property (nonatomic, setter=_setStandardDeviationRoundtripTime:) double standardDeviationRoundtripTime;
@property (readonly, nonatomic) double averageRoundtripTime;
@property (readonly, nonatomic) int numPingsTransmitted;
@property (readonly, nonatomic) int numPingsReceived;
@property (readonly, nonatomic) double packetLossRate;
@property (readonly, nonatomic) int packetsSuccessfullySent;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_addReceivedPacket:(double)a0;
- (void)_addTransmittedPacket:(BOOL)a0;
- (id)initWithMaxRTT:(double)a0 medianRTT:(double)a1 avgRTT:(double)a2 minRTT:(double)a3 transmitted:(int)a4 successful:(int)a5 received:(int)a6;

@end
