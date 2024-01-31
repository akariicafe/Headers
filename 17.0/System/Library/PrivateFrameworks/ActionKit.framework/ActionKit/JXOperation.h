@class NSObject;
@protocol OS_dispatch_queue;

@interface JXOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

- (id)init;
- (void)dealloc;
- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isConcurrent;
- (void)willFinish;
- (void)startAndWaitUntilFinished;

@end
