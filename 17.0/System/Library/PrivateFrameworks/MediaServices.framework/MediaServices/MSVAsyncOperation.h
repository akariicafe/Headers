@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncOperation : NSOperation

@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, getter=_isExecuting, setter=_setExecuting:) BOOL _executing;
@property (nonatomic, getter=_isFinished, setter=_setFinished:) BOOL _finished;

- (BOOL)isExecuting;
- (id)init;
- (void)finish;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)execute;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (BOOL)isConcurrent;

@end
