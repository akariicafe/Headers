@class TSXgPTPPortStatistics;

@interface TSXgPTPFDPtPPort : TSXgPTPNetworkPort

@property (retain, nonatomic) TSXgPTPPortStatistics *statistics;
@property (nonatomic) char localPDelayLogMeanInterval;
@property (nonatomic) char remotePDelayLogMeanInterval;
@property (nonatomic) BOOL multipleRemotes;
@property (nonatomic) BOOL measuringPDelay;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
