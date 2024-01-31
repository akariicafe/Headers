@class NSString, CPLResourceTransferTask, NSArray, NSMapTable;

@interface PLCloudInMemoryDownloadTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_taskIDsToCompletionHandlers;
}

@property (readonly, copy, nonatomic) NSString *resourceID;
@property (retain, nonatomic) CPLResourceTransferTask *transferTask;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, weak, nonatomic) NSArray *taskIDs;

- (void).cxx_destruct;
- (void)reportCompletionWithData:(id)a0 error:(id)a1;
- (void)addClientWithTaskID:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelClientWithTaskID:(id)a0;
- (id)initWithResourceID:(id)a0 taskID:(id)a1 completionHandler:(id /* block */)a2;

@end
