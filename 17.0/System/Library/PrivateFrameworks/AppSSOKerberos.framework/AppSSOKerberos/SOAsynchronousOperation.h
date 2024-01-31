@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isExecuting;
- (BOOL)isReady;
- (id)init;
- (void)finish;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;

@end
