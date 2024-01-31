@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MTRAsyncCallbackWorkQueue : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) id context;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned long long runningWorkItemCount;

- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (void)_callNextReadyWorkItem;
- (void)_postProcessWorkItem:(id)a0 retry:(BOOL)a1;
- (void)endWork:(id)a0;
- (void)enqueueWorkItem:(id)a0;
- (id)initWithContext:(id)a0 queue:(id)a1;
- (BOOL)isDuplicateForTypeID:(unsigned long long)a0 workItemData:(id)a1;
- (void)retryWork:(id)a0;

@end
