@class NSString, NSMutableArray;

@interface CSAttSiriGazeTrackingTimedPulses : NSObject {
    NSMutableArray *_pulses;
}

@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)_evaluateFrom:(unsigned long long)a0 to:(unsigned long long)a1 strategy:(unsigned long long)a2;
- (BOOL)_value:(double)a0 between:(double)a1 and:(double)a2;
- (void)addEvent:(BOOL)a0 timestamp:(unsigned long long)a1;
- (BOOL)evaluateForAnyPulsesFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)evaluateForPulsesAroundStartAndEndFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
