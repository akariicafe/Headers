@class NSNumber, NSMutableArray;

@interface SBWakeDebounceFilter : NSObject {
    NSMutableArray *_wakeEvents;
    long long _oldestWakeEventIndex;
}

@property (copy, nonatomic, getter=_overrideTime, setter=_setOverrideTime:) NSNumber *overrideTime;
@property (nonatomic) double filterInterval;
@property (nonatomic) unsigned long long intervalActivationLimit;

- (void).cxx_destruct;
- (BOOL)wakeEventOccurred;

@end
