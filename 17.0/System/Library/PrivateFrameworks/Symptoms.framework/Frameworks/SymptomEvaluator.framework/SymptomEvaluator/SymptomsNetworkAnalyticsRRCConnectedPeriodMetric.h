@class NSString;

@interface SymptomsNetworkAnalyticsRRCConnectedPeriodMetric : NSObject

@property (nonatomic) int periodType;
@property (nonatomic) unsigned long long periodDurationSecs;
@property (nonatomic) unsigned long long lastDisconnectedSecs;
@property (nonatomic) unsigned int anyListenerCount;
@property (nonatomic) unsigned int backgroundListenerCount;
@property (nonatomic) int ingressLQM;
@property (nonatomic) int egressLQM;
@property (nonatomic) unsigned long long ingressUlThroughputBps;
@property (nonatomic) unsigned long long ingressDlThroughputBps;
@property (nonatomic) unsigned long long egressUlThroughputBps;
@property (nonatomic) unsigned long long egressDlThroughputBps;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (copy, nonatomic) NSString *activeNameDuringPeriod;
@property (nonatomic) unsigned long long uniqueActiveAppCount;
@property (nonatomic) unsigned long long periodDurationTCEnabledSecs;
@property (nonatomic) unsigned int trafficClassFlags;

- (void).cxx_destruct;
- (id)_eventPayload;
- (id)_trafficClassString:(unsigned int)a0;
- (id)initWithPeriodType:(int)a0;
- (BOOL)postCAEvent;

@end
