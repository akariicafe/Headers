@class TSDgPTPPortStatistics;

@interface TSDgPTPFDEtEPort : TSDgPTPNetworkPort

@property (retain, nonatomic) TSDgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (id)_statistics;
- (id)initWithService:(id)a0 pid:(int)a1;
- (void)updateProperties;

@end
