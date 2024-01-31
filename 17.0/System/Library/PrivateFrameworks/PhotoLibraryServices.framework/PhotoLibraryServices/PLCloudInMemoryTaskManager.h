@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_resourceIDsToDownloadTasks;
    NSMutableDictionary *_taskIDsToDownloadTasks;
}

- (id)init;
- (void)reset;
- (BOOL)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)a0 taskIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_identifierForResource:(id)a0;
- (void).cxx_destruct;
- (void)reportCompletionForResource:(id)a0 withData:(id)a1 error:(id)a2;
- (void)setTransferTask:(id)a0 forResource:(id)a1;
- (void)cancelTaskWithTaskIdentifier:(id)a0;

@end
