@class NSDate, NSString, CPLSyncSession, CPLScopeFilter, CPLEngineSyncTask, NSEnumerator, CPLEngineLibrary, NSObject;
@protocol CPLEngineForceSyncTaskDelegate, CPLEngineStoreUserIdentifier, OS_xpc_object, OS_dispatch_queue;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentTaskLock;
    BOOL _reallyLaunched;
    BOOL _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLSyncSession *_fakeSession;
    NSEnumerator *_syncTaskEnumerator;
}

@property (retain, nonatomic) id<CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CPLScopeFilter *filter;
@property (retain, nonatomic) CPLEngineLibrary *engineLibrary;
@property (weak, nonatomic) id<CPLEngineForceSyncTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ taskDidFinishWithErrorBlock;
@property (retain, nonatomic) NSObject<OS_xpc_object> *taskActivity;
@property (readonly, nonatomic) BOOL forBackup;
@property (readonly, nonatomic) BOOL forcingProcessedStagedScopes;
@property (nonatomic) BOOL bypassForceSyncLimitations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)dealloc;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;
- (void).cxx_destruct;
- (id)_phaseDescription;
- (void)_finishWithError:(id)a0;
- (void)cancelTask;
- (id)_currentTask;
- (void)_dispatchNextSyncTask;
- (void)_dispatchSyncTask:(id)a0;
- (void)_dropCurrentTask;
- (id)initWithScopeIdentifiers:(id)a0 engineLibrary:(id)a1 filter:(id)a2 delegate:(id)a3;
- (void)launchTask;
- (void)reallyCancel;
- (void)reallyLaunch;

@end
