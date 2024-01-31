@class NSDate;

@interface LBFStateDetector : NSObject

@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic) NSDate *currentTime;

- (id)init;
- (id)initWithState:(long long)a0;
- (void).cxx_destruct;
- (id)processDprivacydEvent:(id)a0;
- (id)processEventsStartingFromState:(long long)a0 bucketStartTime:(id)a1 events:(id)a2;
- (id)processLighthouseEvent:(id)a0;
- (id)processMLRuntimedEvent:(id)a0;
- (id)processTrialdEvent:(id)a0;
- (id)validateTransition:(id)a0;

@end
