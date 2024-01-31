@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {
    IMDReplayController *_replayController;
}

- (void)dealloc;
- (void)_setupAndBeginSync;
- (id)initWithReplayController:(id)a0 accountController:(id)a1;
- (unsigned long long)syncTaskType;

@end
