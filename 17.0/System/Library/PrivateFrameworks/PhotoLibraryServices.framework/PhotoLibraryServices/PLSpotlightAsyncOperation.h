@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (BOOL)isExecuting;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)cancel;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
