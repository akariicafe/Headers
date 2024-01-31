@class NSMutableSet;

@interface ASClientAccount : ASAccount {
    NSMutableSet *_daemonMonitoredFolders;
    NSMutableSet *_foldersToRetryForMonitoring;
    NSMutableSet *_folderIDsOnRemoteHold;
}

- (void)dealloc;
- (id)mailboxes;
- (void)_foldersUpdated:(id)a0;
- (void).cxx_destruct;
- (void)monitorFoldersForUpdates:(id)a0 persistent:(BOOL)a1;
- (int)performFetchAttachmentRequest:(id)a0 consumer:(id)a1;
- (int)performFetchMessageSearchResultRequests:(id)a0 consumer:(id)a1;
- (int)performMoveRequests:(id)a0 consumer:(id)a1;
- (int)performResolveRecipientsRequest:(id)a0 consumer:(id)a1;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)a0 inFolderWithId:(id)a1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2;
- (void)stopMonitoringAllFolders;
- (id)unactionableICSRepresentationForMetaData:(id)a0 inFolderWithId:(id)a1 outSummary:(id *)a2;
- (void)resumeMonitoringFoldersWithIDs:(id)a0;
- (void)_folderHierarchyChanged;
- (void)_foldersThatExternalClientsCareAboutChanged;
- (id)initWithBackingAccountInfo:(id)a0;
- (void)monitorFoldersForUpdates:(id)a0;
- (id)onBehalfOfBundleIdentifier;
- (void)stopMonitoringFoldersForUpdates:(id)a0;
- (void)suspendMonitoringFoldersWithIDs:(id)a0;
- (void)_retryMonitoringWithRetryCount:(id)a0;
- (void)_addFoldersToDaemonMonitoring:(id)a0;
- (id)_copySetFlagsActionForRequest:(id)a0;
- (void)_daemonDied;
- (void)_logStatus:(id)a0;
- (void)_monitorFoldersForUpdates:(id)a0 persistent:(BOOL)a1 sequentialRetryCount:(int)a2;
- (id)_newPolicyManager;
- (void)_removeFoldersFromDaemonMonitoring:(id)a0;
- (void)_reportFolderItemSyncSuccess:(BOOL)a0 forFolderWithID:(id)a1 withItemsCount:(unsigned long long)a2;
- (void)_retryMonitoringWithRetryCount:(id)a0 persistent:(BOOL)a1;
- (void)_retryPersistentMonitoringWithRetryCount:(id)a0;
- (void)_sync:(id)a0 withConsumer:(id)a1;
- (void)clearFolderHierarchyCache;
- (void)performFolderChange:(id)a0;
- (int)performMailboxRequest:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 consumer:(id)a4;
- (int)performMailboxRequests:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 consumer:(id)a4;
- (void)resolveRecipientsTask:(id)a0 completedWithStatus:(long long)a1 error:(id)a2 queriedEmailAddressToRecpient:(id)a3;
- (void)sendMailTask:(id)a0 completedWithStatus:(long long)a1 error:(id)a2;

@end
