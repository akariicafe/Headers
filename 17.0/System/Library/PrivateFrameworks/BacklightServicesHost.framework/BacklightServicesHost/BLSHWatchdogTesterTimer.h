@class NSString;

@interface BLSHWatchdogTesterTimer : NSObject <BLSHWatchdogTiming> {
    BOOL _invalidated;
    unsigned long long _invalidationReason;
    NSString *_explanation;
}

@property (nonatomic, getter=hasSleepBeenImminentSinceScheduled) BOOL sleepImminentSinceScheduled;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) unsigned long long invalidationReason;
@property (readonly, copy, nonatomic) NSString *explanation;

- (void)invalidate:(unsigned long long)a0;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;

@end
