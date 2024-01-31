@interface _NSBarrierOperation : NSOperation {
    id /* block */ _block;
}

+ (BOOL)_removesDependenciesAfterFinish;

- (void)dealloc;
- (void)main;
- (long long)queuePriority;

@end
