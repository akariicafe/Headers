@class NSNumber;

@interface ABDelayedBlockExecutor : NSObject {
    id /* block */ _block;
    id /* block */ _scheduledBlock;
    NSNumber *_delay;
    BOOL _isPaused;
}

- (void).cxx_destruct;
- (void)_cancelScheduledBlock;

@end
