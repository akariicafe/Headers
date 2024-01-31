@class IMDCKSyncState;
@protocol IMDCKAbstractSyncControllerDelegate;

@interface IMDCKAbstractSyncController : NSObject

@property (nonatomic) BOOL isSyncing;
@property (nonatomic) unsigned long long recordsRead;
@property (nonatomic) unsigned long long recordsWritten;
@property (nonatomic) unsigned long long recordsWriteFailed;
@property (readonly, nonatomic) IMDCKSyncState *syncState;
@property (weak) id<IMDCKAbstractSyncControllerDelegate> delegate;

- (long long)syncControllerRecordType;
- (void).cxx_destruct;
- (id)describeRecordCounts;
- (id)errorAnalyzer;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (id)syncStateDebuggingInfo:(id)a0;
- (id)ckUtilities;
- (id)recordStore;
- (id)_syncTokenStore;
- (void)deleteSyncToken;
- (id)latestSyncToken;
- (BOOL)_fetchedAllChangesFromCloudKit;
- (id)_syncTokenKey;
- (void)addSyncDebuggingInfoToDictionary:(id)a0;
- (void)countRecordOnRead:(BOOL)a0 didSucceed:(BOOL)a1;
- (void)resetRecordCounts;
- (void)setBroadcastedSyncStateStateToFinished;
- (void)setBroadcastedSyncStateStateToStarting;
- (void)setBroadcastedSyncStateToDeleting;
- (void)setBroadcastedSyncStateToDownloading;
- (void)setBroadcastedSyncStateToStartingInitialSync;
- (void)setBroadcastedSyncStateToStartingPeriodicSync;
- (void)setBroadcastedSyncStateToUploading;
- (void)setLatestSyncToken:(id)a0;
- (void)syncBatchCompleted:(unsigned long long)a0;

@end
