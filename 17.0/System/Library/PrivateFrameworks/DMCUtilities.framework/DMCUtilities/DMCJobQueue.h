@class NSString, DMCHangDetectionQueue, NSObject;
@protocol OS_dispatch_queue;

@interface DMCJobQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *jobQueue;
@property (retain, nonatomic) NSString *queueID;
@property unsigned int nextJobSequenceNumber;
@property (copy, nonatomic) id /* block */ executionQueueAbortCompletionBlock;
@property (retain, nonatomic) DMCHangDetectionQueue *executionQueue;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExecutionQueue:(id)a0;
- (void)queueBlock:(id /* block */)a0;
- (void)fromFunction:(const char *)a0 enqueueJob:(id /* block */)a1;
- (void)jobDidFinishFromFunction:(const char *)a0 jobBlockDescription:(id)a1;
- (void)waitForEnqueuedJobsToCompleteCompletionBlock:(id /* block */)a0;

@end
