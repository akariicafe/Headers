@class NSArray, NSMutableSet, NSMutableArray, IMTimingCollection;

@interface IMDSpotlightIndexerTimingProfiler : NSObject

@property (retain, nonatomic) IMTimingCollection *timingCollection;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSMutableSet *runningTimers;
@property (retain, nonatomic) NSMutableArray *runTimers;
@property (retain, nonatomic) NSArray *abortedTimers;

- (void)startTimingForKey:(id)a0;
- (void).cxx_destruct;
- (void)stopTimingForKey:(id)a0;
- (void)stopMainTimerAndLogAfterFailure;
- (void)stopMainTimerAndLogAfterSuccess;
- (void)abortCurrentTimers;
- (void)logResults:(BOOL)a0;
- (void)startMainTimerWithExpectedTimeoutInterval:(double)a0;
- (void)startTimingForKey:(id)a0 iteration:(long long)a1;
- (void)stopProfilingAfterIndexersBailed;
- (void)stopTimingForKey:(id)a0 iteration:(long long)a1;

@end
