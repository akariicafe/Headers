@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (void)signal;
- (void)wait;
- (id)init;
- (void)dealloc;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;
- (void)waitInMode:(id)a0;

@end
