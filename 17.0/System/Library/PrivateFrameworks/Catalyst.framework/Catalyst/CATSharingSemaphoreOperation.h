@interface CATSharingSemaphoreOperation : CATOperation

- (void)signal;
- (BOOL)isAsynchronous;
- (void)cancel;

@end
