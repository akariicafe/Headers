@class TSgPTPPortStatistics, TSXgPTPFDPtPPort, TSDgPTPFDPtPPort;

@interface TSgPTPFDPtPPort : TSgPTPNetworkPort {
    TSDgPTPFDPtPPort *_implDC;
    TSXgPTPFDPtPPort *_implXPC;
}

@property (retain, nonatomic) TSgPTPPortStatistics *statistics;
@property (readonly, nonatomic) char localPDelayLogMeanInterval;
@property (readonly, nonatomic) char remotePDelayLogMeanInterval;
@property (readonly, nonatomic) BOOL multipleRemotes;
@property (readonly, nonatomic) BOOL measuringPDelay;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingLocalPDelayLogMeanInterval;
+ (id)keyPathsForValuesAffectingMeasuringPDelay;
+ (id)keyPathsForValuesAffectingMultipleRemotes;
+ (id)keyPathsForValuesAffectingRemotePDelayLogMeanInterval;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)measuringPDelay;
- (BOOL)multipleRemotes;
- (id)initWithImplDC:(id)a0;
- (id)initWithImplXPC:(id)a0;
- (char)localPDelayLogMeanInterval;
- (char)remotePDelayLogMeanInterval;
- (void)updateWithXPCStatistics:(id)a0;

@end
