@class NSObject, TrafficMonitor;
@protocol OS_dispatch_queue;

@interface FlowBasedIconAdviser : NSObject {
    double _flowBasedIconAdvicePeriodStart;
    int _nePolicyCount;
    BOOL _active;
    BOOL _flowBasedIconRecommendationValid;
    BOOL _flowBasedIconRecommendation;
    TrafficMonitor *_outrankFlowMonitor;
    unsigned int _internalState;
    double _idleStartTime;
    double _noPoliciesStartTime;
    NSObject<OS_dispatch_queue> *_queue;
    int _numPollsThisAdvicePeriod;
    unsigned int _numInterstitialIdlesThisAdvicePeriod;
    unsigned int _maxInterstitialIdles;
    double _minNoForegroundAppDelay;
    double _minIdleObservationTime;
    double _maxInitialIdleDuration;
    double _maxNoPolicyIconOnDuration;
    double _outrankFlowMonitorMinSamplePeriod;
    double _outrankFlowMonitorSamplePeriodThroughputThreshold;
}

@property (nonatomic) unsigned int internalState;
@property (nonatomic) int nePolicyCount;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL flowBasedIconRecommendationValid;
@property (readonly, nonatomic) BOOL flowBasedIconRecommendation;

- (void)restoreDefaults;
- (id)initWithQueue:(id)a0;
- (void)didSampleFlows;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)getState:(BOOL)a0;
- (void)_initializeOutrankFlowMonitor;

@end
