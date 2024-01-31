@class NSMutableDictionary, CPLResourceTransferTask, NSDate;

@interface PLCloudPendingResourceTask : NSObject {
    CPLResourceTransferTask *_transferTask;
    NSDate *_lastUpdated;
    BOOL _completed;
    BOOL _transferTaskRemoved;
    NSMutableDictionary *_taskIdentifierToProgressBlock;
    NSMutableDictionary *_taskIdentifierToCompletionHandler;
}

- (id)lastUpdated;
- (void)keepAlive;
- (void)cancelTaskWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)reportProgress:(float)a0;
- (id)taskIDs;
- (void)addProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 withTaskIdentifier:(id)a2;
- (id)initWithProgressBlock:(id /* block */)a0 completionHandler:(id /* block */)a1 forTaskIdentifier:(id)a2;
- (void)reportCompletionWithError:(id)a0;
- (void)setTransferTask:(id)a0;

@end
