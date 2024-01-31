@class NSArray, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableArray *_transportTasks;
    BOOL _shouldStop;
    NSError *_badError;
    NSError *_stopError;
    BOOL _prioritizeNonDerivatives;
    BOOL _hasResetQueue;
    unsigned long long _successfullyDownloadedResourcesCount;
    unsigned long long _failedDownloadedResourcesCount;
    unsigned long long _total;
    unsigned long long _activeTransferTaskCount;
    unsigned long long _transportTaskCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taskCountLock;
    NSArray *_intentsToDownload;
    unsigned long long _currentIntentIndex;
}

- (id)taskIdentifier;
- (unsigned long long)_transportTaskCount;
- (void)launch;
- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (unsigned long long)_activeTransferTaskCount;
- (void)_completeBackgroundDownloadForResource:(id)a0 error:(id)a1 withTransaction:(id)a2;
- (void)_downloadTask:(id)a0 didFinishWithErrorLocked:(id)a1;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_getResourceTypesToDownload:(const unsigned long long **)a0;
- (BOOL)_isErrorCountingForARetry:(id)a0;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)a0;
- (void)_transportTaskDidFinish:(id)a0;
- (void)_updateActiveDownloadTaskCount;
- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (void)taskDidFinishWithError:(id)a0;

@end
