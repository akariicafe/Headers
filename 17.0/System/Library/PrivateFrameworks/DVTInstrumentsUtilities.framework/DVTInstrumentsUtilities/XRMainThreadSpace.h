@class NSMutableSet;

@interface XRMainThreadSpace : XRSpace {
    NSMutableSet *_mainThreadOps;
}

@property (class, readonly, nonatomic) XRMainThreadSpace *sharedInstance;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_activeRunLoopModes;
- (void)_executeOp:(id)a0;
- (void)_queueOperationToRunOnMainThread:(id)a0;
- (id)_scheduleOperationFromCurrentQueue:(id)a0;
- (BOOL)isSerial;
- (id)spaceName;

@end
