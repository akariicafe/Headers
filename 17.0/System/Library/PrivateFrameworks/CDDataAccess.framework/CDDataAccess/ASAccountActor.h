@interface ASAccountActor : DADisableableObject <ASAccountActorMessages>

- (oneway void)shutdown;
- (oneway void)setAccount:(id)a0;
- (id)mailboxes;
- (int)supportsConversations;
- (oneway void)startup;
- (oneway void)cancelTaskWithID:(int)a0;
- (int)mailNumberOfPastDaysToSync;
- (id)sentItemsFolder;
- (id)customSignature;
- (oneway void)cancelSearchQuery:(id)a0;
- (id)deletedItemsFolder;
- (id)draftsFolder;
- (id)encryptionIdentityPersistentReference;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)a0 withTag:(id *)a1;
- (id)inboxFolder;
- (id)initWithDAAccount:(id)a0;
- (oneway void)monitorFoldersForUpdates:(id)a0 persistent:(BOOL)a1;
- (int)performFetchAttachmentRequest:(id)a0 consumer:(id)a1;
- (int)performFetchMessageSearchResultRequests:(id)a0 consumer:(id)a1;
- (void)performFolderChange:(id)a0 isUserRequested:(BOOL)a1;
- (int)performMailboxRequests:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 isUserRequested:(BOOL)a4 consumer:(id)a5;
- (int)performMoveRequests:(id)a0 consumer:(id)a1;
- (int)performResolveRecipientsRequest:(id)a0 consumer:(id)a1;
- (oneway void)performSearchQuery:(id)a0;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)a0 inFolderWithId:(id)a1;
- (int)sendMessageWithRFC822Data:(id)a0 messageID:(id)a1 outgoingMessageType:(int)a2 originalMessageFolderID:(id)a3 originalMessageItemID:(id)a4 originalMessageLongID:(id)a5 originalAccountID:(id)a6 useSmartTasksIfPossible:(BOOL)a7 isUserRequested:(BOOL)a8 consumer:(id)a9 context:(id)a10;
- (oneway void)setCustomSignature:(id)a0;
- (oneway void)setEncryptionIdentityPersistentReference:(id)a0;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)a0 deleted:(id)a1 foldersTag:(id)a2;
- (oneway void)setSigningIdentityPersistentReference:(id)a0;
- (id)signingIdentityPersistentReference;
- (oneway void)stopMonitoringAllFolders;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)supportsUniqueServerId;
- (id)unactionableICSRepresentationForMetaData:(id)a0 inFolderWithId:(id)a1 outSummary:(id *)a2;
- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(id)a0;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)a0;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(id)a0;
- (oneway void)cancelAllSearchQueries;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)a0;
- (id)foldersTag;
- (BOOL)generatesBulletins;
- (oneway void)monitorFoldersForUpdates:(id)a0;
- (int)performMailboxRequest:(id)a0 mailbox:(id)a1 previousTag:(id)a2 clientWinsOnSyncConflict:(BOOL)a3 isUserRequested:(BOOL)a4 consumer:(id)a5;
- (int)performMailboxRequest:(id)a0 mailbox:(id)a1 previousTag:(id)a2 isUserRequested:(BOOL)a3 consumer:(id)a4;
- (int)performMailboxRequests:(id)a0 mailbox:(id)a1 previousTag:(id)a2 isUserRequested:(BOOL)a3 consumer:(id)a4;
- (BOOL)searchQueriesRunning;
- (int)sendSmartMessageWithRFC822Data:(id)a0 messageID:(id)a1 outgoingMessageType:(int)a2 originalMessageFolderID:(id)a3 originalMessageItemID:(id)a4 originalMessageLongID:(id)a5 originalAccountID:(id)a6 replaceOriginalMime:(BOOL)a7 isUserRequested:(BOOL)a8 consumer:(id)a9 context:(id)a10;
- (oneway void)setGeneratesBulletins:(BOOL)a0;
- (oneway void)setMailNumberOfPastDaysToSync:(int)a0;
- (oneway void)stopMonitoringFoldersForUpdates:(id)a0;
- (int)supportsSmartForwardReply;

@end
