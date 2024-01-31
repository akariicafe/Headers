@class HDSynchronousTaskGroup, NSString, HDCloudSyncSequenceRecord, NSObject, HDCloudSyncSessionContext, NSMutableArray, HDCloudSyncSequenceState, HDCloudSyncTarget;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate> {
    HDCloudSyncTarget *_target;
    HDCloudSyncSequenceRecord *_sequenceRecord;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HDSynchronousTaskGroup *_taskGroup;
    HDCloudSyncSessionContext *_sessionContext;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
    BOOL _isPerformingRecentRecordRoll;
    BOOL _shouldClearRebaselineDeadline;
    HDCloudSyncSequenceState *_sequenceState;
}

@property (readonly, nonatomic) BOOL hasMadeForwardProgress;
@property (retain, nonatomic) HDCloudSyncSequenceState *sequenceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldPerformRecentRecordRollingForUnfrozenRecords:(id)a0 configuration:(id)a1;
+ (id)unfrozenChangeRecordsForPushTarget:(id)a0 sequenceRecord:(id)a1 configuration:(id)a2 error:(id *)a3;

- (void)main;
- (void)syncSession:(id)a0 sendChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSessionWillBegin:(id)a0;
- (void).cxx_destruct;
- (void)syncSession:(id)a0 didFinishSuccessfully:(BOOL)a1 error:(id)a2;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2 sequence:(id)a3;
- (BOOL)syncSession:(id)a0 didEndTransactionWithError:(id *)a1;
- (void)syncSession:(id)a0 willSyncAnchorRanges:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
