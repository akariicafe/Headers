@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (id)init;
- (BOOL)shouldDefer;
- (void).cxx_destruct;
- (id)initWithDeadline:(id)a0 manager:(id)a1;
- (void)markFinished;
- (void)requestDefer;

@end
