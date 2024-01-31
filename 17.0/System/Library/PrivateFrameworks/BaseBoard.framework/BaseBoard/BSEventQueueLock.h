@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}

@property (readonly, copy, nonatomic) NSString *reason;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)relinquish;
- (id)initWithEventQueue:(id)a0 reason:(id)a1;

@end
