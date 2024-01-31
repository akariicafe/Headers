@interface IRCandicateClassificationEligibilityStateMachine : NSObject

@property (nonatomic) long long eligibilityState;
@property (nonatomic) unsigned long long upRankCounter;
@property (nonatomic) unsigned long long downRankCounter;
@property (nonatomic) unsigned long long downRankDismissAndRejectRankCounter;

+ (long long)_classificationFromEligibility:(long long)a0;

- (void)_transitionToState:(long long)a0;
- (void)_uprankCounterIncrementAndTransitionToState:(long long)a0 ifThresholdCrossed:(unsigned long long)a1;
- (void)_downRankDismissAndRejectRankCounterIncrementAndTransitionToState:(long long)a0 ifThresholdCrossed:(unsigned long long)a1;
- (void)_downRankDismissAndRejectRankCounterReset;
- (void)_downrankCounterIncrementAndTransitionToState:(long long)a0 ifThresholdCrossed:(unsigned long long)a1;
- (void)_downrankCounterReset;
- (void)_uprankCounterReset;
- (void)runWithEventType:(long long)a0 smSettings:(id)a1;

@end
