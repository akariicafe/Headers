@interface _SBMachContinuousStopwatch : NSObject {
    BOOL _active;
    unsigned long long _startTime;
    unsigned long long _priorAccumulatedTime;
}

- (id)init;

@end
