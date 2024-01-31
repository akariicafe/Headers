@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NTKSnapshotQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_requests;
    BOOL _queue_isProcessingQueue;
    id /* block */ _requestHandler;
}

- (void).cxx_destruct;
- (id)initWithRequestHandler:(id /* block */)a0;
- (void)_queue_processQueue;
- (id)_queue_pullHighestPriorityRequestFromQueue;
- (void)queueRequest:(id)a0;

@end
