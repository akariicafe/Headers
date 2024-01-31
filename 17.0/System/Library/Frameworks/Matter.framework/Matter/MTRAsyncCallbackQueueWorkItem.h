@class MTRAsyncCallbackWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MTRAsyncCallbackQueueWorkItem : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) MTRAsyncCallbackWorkQueue *workQueue;
@property (readonly, nonatomic) BOOL enqueued;
@property (readonly, nonatomic) BOOL batchable;
@property (readonly, nonatomic) unsigned long long batchingID;
@property (readonly, nonatomic) id batchableData;
@property (readonly, nonatomic) id /* block */ batchingHandler;
@property (readonly, nonatomic) BOOL supportsDuplicateCheck;
@property (readonly, nonatomic) unsigned long long duplicateTypeID;
@property (readonly, nonatomic) id /* block */ duplicateCheckHandler;
@property (copy, nonatomic) id /* block */ readyHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (id)initWithQueue:(id)a0;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)endWork;
- (void)cancel;
- (void)callReadyHandlerWithContext:(id)a0;
- (void)markedEnqueued;
- (void)retryWork;
- (void)setBatchingID:(unsigned long long)a0 data:(id)a1 handler:(id /* block */)a2;
- (void)setDuplicateTypeID:(unsigned long long)a0 handler:(id /* block */)a1;

@end
