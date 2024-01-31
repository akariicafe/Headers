@class TSDgPTPPortStatistics;

@interface TSDgPTPFDPtPPort : TSDgPTPNetworkPort

@property (retain, nonatomic) TSDgPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;

- (void).cxx_destruct;
- (id)_statistics;
- (char)_localPDelayLogMeanInterval;
- (BOOL)_measuringPDelay;
- (BOOL)_multipleRemotes;
- (char)_remotePDelayLogMeanInterval;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)updateProperties;

@end
