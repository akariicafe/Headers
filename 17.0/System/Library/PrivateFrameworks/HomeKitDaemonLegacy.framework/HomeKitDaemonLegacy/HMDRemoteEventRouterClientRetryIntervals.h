@class NSArray;

@interface HMDRemoteEventRouterClientRetryIntervals : NSObject <HMETimerIntervalProvider>

@property (readonly) NSArray *intervals;
@property long long currentIndex;

+ (id)retryIntervalsForResidentClient;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (double)nextInterval;
- (id)initWithIntervals:(id)a0;

@end
