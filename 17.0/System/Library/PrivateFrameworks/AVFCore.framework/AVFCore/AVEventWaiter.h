@class NSCondition;

@interface AVEventWaiter : NSObject {
    NSCondition *_condition;
    BOOL _eventCompleted;
}

- (id)init;
- (void)dealloc;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end
