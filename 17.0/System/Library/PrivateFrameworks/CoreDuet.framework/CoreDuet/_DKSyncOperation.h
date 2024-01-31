@interface _DKSyncOperation : NSOperation {
    _Atomic unsigned char _state;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (BOOL)isExecuting;
- (id)init;
- (void)dealloc;
- (void)start;
- (BOOL)isFinished;
- (void)endOperation;
- (void)startOperation;

@end
