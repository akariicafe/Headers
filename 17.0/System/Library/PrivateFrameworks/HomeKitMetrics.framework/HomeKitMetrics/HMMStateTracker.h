@class HMMStateData, NSArray, NSMutableDictionary, NSMutableArray;

@interface HMMStateTracker : NSObject

@property (nonatomic) BOOL autoStopPreviousState;
@property (retain, nonatomic) NSMutableDictionary *openStates;
@property (retain, nonatomic) NSMutableArray *closedStates;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long stateEntryTransitionTime;
@property (nonatomic) unsigned long long longestStateDuration;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (readonly, nonatomic) unsigned long long totalDuration;
@property (readonly, nonatomic) unsigned long long totalStateDuration;
@property (readonly, nonatomic) NSArray *states;
@property (readonly, nonatomic) HMMStateData *longestState;

- (void).cxx_destruct;
- (void)enterState:(id)a0 enterTime:(unsigned long long)a1 enterData:(id)a2;
- (void)_exitState:(id)a0 exitTime:(unsigned long long)a1 exitData:(id)a2;
- (void)endWithTime:(unsigned long long)a0;
- (void)exitState:(id)a0 exitTime:(unsigned long long)a1 exitData:(id)a2;
- (id)initAutoStopPreviousState:(BOOL)a0;
- (void)startWithTime:(unsigned long long)a0;
- (void)updateStateDuration:(unsigned long long)a0;

@end
