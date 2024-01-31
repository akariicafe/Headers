@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)main;
- (BOOL)isAsynchronous;
- (void)cancel;

@end
