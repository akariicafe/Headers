@class NSString, IMDReplayController, IMDAccountController, IMDCKSyncController;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_newKChatSyncTask;
- (void)dealloc;
- (id)_newIDSTransactionLogSyncTask;
- (id)newSyncTaskForType:(unsigned long long)a0;
- (id)_newFirstUnlockReplaySyncTask;
- (id)_initWithCKSyncController:(id)a0 accountController:(id)a1 replayController:(id)a2;

@end
