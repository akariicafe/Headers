@class NSArray, NSString, HDSynchronousTaskGroup, NSMutableArray;

@interface HDCloudSyncParallelOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableArray *_operations;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSArray *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationStart;

- (void)addOperation:(id)a0;
- (void)main;
- (void)skip;
- (void).cxx_destruct;
- (void)addOperationOfClass:(Class)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
