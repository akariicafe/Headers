@class NSRecursiveLock, NSString, MFIMAPOperationCache, NSArray, NSNumber, NSMutableArray, NSLock;

@interface IMAP_Account : MailAccount <MFIMAPConnectionDelegate, MFIMAPMailboxListFilter> {
    NSString *_separatorChar;
    NSString *_serverNamespace;
    struct __CFArray { } *_cachedConnections;
    struct __CFArray { } *_mailboxesToSynchronize;
    MFIMAPOperationCache *_offlineCache;
    unsigned long long _greatestInboxUid;
    double _timeLastFetchedMailboxList;
    NSRecursiveLock *_flagChangesLock;
    NSMutableArray *_recentFlagChanges;
    NSRecursiveLock *_connectionLock;
    int _nextConnectionTag;
    NSArray *_lockOrderingArray;
    unsigned int _readBufferSize;
    id /* block */ _offlineCacheFlushHandler;
    unsigned char _fetchedMailboxList : 1;
    unsigned char _isOffline : 1;
    NSArray *_lastKnownCapabilities;
    NSLock *_eSearchSupportedLock;
    NSNumber *_eSearchSupported;
    unsigned char _didUpdateSeparatorAndNamespace : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)accountTypeString;
+ (id)saslProfileName;
+ (void)_deleteQueuedMailboxes:(id)a0;
+ (void *)legacyKeychainProtocol;

- (void)saveState;
- (void)dealloc;
- (BOOL)connection:(id)a0 shouldHandleUntaggedResponse:(id)a1 forCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a2;
- (void)setCompactWhenClosingMailboxes:(BOOL)a0;
- (id)hostname;
- (id)offlineCacheIfOffline;
- (void)setIsOffline:(BOOL)a0;
- (id)serviceName;
- (void)checkInConnection:(id)a0;
- (BOOL)compactWhenClosingMailboxes;
- (BOOL)isOffline;
- (void)_setCapabilities:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1 forCommand:(struct { int x0; id x1; id x2; unsigned long long x3; id x4; } *)a2;
- (BOOL)requiresAuthentication;
- (id)clientToken;
- (id)offlineCache;
- (void)setDisplayName:(id)a0;
- (id)initWithLibrary:(id)a0;
- (void).cxx_destruct;
- (void)setLibrary:(id)a0;
- (void)messagesAdded:(id)a0;
- (void)_writeCustomInfoToMailboxCache:(id)a0;
- (Class)connectionClass;
- (void)setHandlerForOfflineCacheFlush:(id /* block */)a0;
- (id)specialUseAttributesForMailbox:(id)a0;
- (id)_URLScheme;
- (id)_copyMailboxUidWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 existingMailboxUid:(id)a3 dictionary:(id)a4;
- (id)_dataForTemporaryUid:(unsigned int)a0;
- (id)_fileSystemServerPathPrefix;
- (void)_flushOfflineCache;
- (id)_infoForMatchingURL:(id)a0;
- (void)_invokeBlock:(id /* block */)a0;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1 onlySubscribed:(BOOL)a2;
- (id)_listingForMailboxUid:(id)a0 listAllChildren:(BOOL)a1 onlySubscribed:(BOOL)a2 statusDataItems:(id)a3 withConnection:(id)a4 statusEntriesByMailbox:(id *)a5;
- (void)_mailboxListingChanged;
- (id)_mailboxPathPrefix;
- (void)_mailboxesWereRemovedFromTree:(id)a0 withFileSystemPaths:(id)a1;
- (id)_nameForMailboxUid:(id)a0;
- (id)_newMailboxWithParent:(id)a0 name:(id)a1 attributes:(unsigned int)a2 dictionary:(id)a3 withCreationOption:(int)a4;
- (id)_pathComponentForUidName:(id)a0;
- (void)_readCustomInfoFromMailboxCache:(id)a0;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)a0;
- (void)_renameLocalSpecialMailboxesToName:(id)a0;
- (BOOL)_setChildren:(id)a0 forMailboxUid:(id)a1;
- (void)_setSpecialMailbox:(id)a0 forType:(int)a1;
- (id)_specialMailboxUidWithType:(int)a0 create:(BOOL)a1;
- (void)_synchronouslyLoadListingForParent:(id)a0;
- (id)_uidNameForPathComponent:(id)a0;
- (void)_updateSeparatorAndNamespaceWithConnection:(id)a0;
- (void)_waitForMailboxListingLoadToComplete;
- (id)allMailMailboxUid;
- (BOOL)allowsPartialDownloads;
- (BOOL)canFetch;
- (BOOL)canGoOffline;
- (BOOL)canMailboxBeDeleted:(id)a0;
- (void)checkInConnection:(id)a0 destroy:(BOOL)a1;
- (void)checkInConnectionsForStore:(id)a0;
- (BOOL)connectAndAuthenticate:(id)a0;
- (void)connectionDidDisconnect:(id)a0;
- (BOOL)deleteInPlaceForAllMailboxes;
- (BOOL)deleteInPlaceForMailbox:(id)a0;
- (void)deleteMessagesFromMailboxUid:(id)a0 olderThanNumberOfDays:(unsigned int)a1;
- (id)errorForResponse:(id)a0;
- (id)fetchLimits;
- (void)fetchMailboxList;
- (void)filterMailboxList:(id)a0 forMailbox:(id)a1 options:(int)a2;
- (void)flushOfflineCache;
- (BOOL)getMailboxListWithConnection:(id)a0 statusDataItems:(id)a1 statusEntriesByMailbox:(id *)a2;
- (void)handleAlertResponse:(id)a0;
- (void)handleOverQuotaResponse:(id)a0;
- (BOOL)hasPendingOfflineOperations;
- (BOOL)isMailboxLocalForType:(int)a0;
- (BOOL)isSpecialMailbox:(id)a0;
- (id)lastKnownCapabilities;
- (id)mailboxPathExtension;
- (id)mailboxUidForRelativePath:(id)a0 create:(BOOL)a1;
- (unsigned long long)minID;
- (id)nameForMailboxUid:(id)a0;
- (void)networkChanged;
- (BOOL)newMailboxNameIsAcceptable:(id)a0 reasonForFailure:(id *)a1;
- (id)offlineCacheDirectoryPath;
- (id)offlineCacheIfExists;
- (unsigned int)readBufferSize;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (BOOL)renameMailbox:(id)a0 newName:(id)a1 parent:(id)a2;
- (void)resetMailboxTimer;
- (id)secureServiceName;
- (id)separatorChar;
- (id)serverPathPrefix;
- (id)serverPathPrefixAccountValue;
- (void)setAllowsPartialDownloads:(BOOL)a0;
- (void)setReadBufferSize:(unsigned int)a0;
- (void)setServerPathPrefix:(id)a0;
- (void)setStoreMailboxType:(int)a0 onServer:(BOOL)a1;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)specialUseAttributeForType:(int)a0;
- (id)statisticsKind;
- (Class)storeClass;
- (BOOL)storeMailboxTypeOnServer:(int)a0;
- (BOOL)supportsAppend;
- (BOOL)supportsMailboxEditing;
- (BOOL)supportsRemoteAppend;
- (void)throttledGetMailboxListWithConnection:(id)a0;
- (void)unselectMailbox:(id)a0;
- (BOOL)verifyESearchSupportWithBlock:(id /* block */)a0;
- (BOOL)xListSupportedOnConnection:(id)a0;
- (id)flagChangesLock;
- (BOOL)_deleteMailbox:(id)a0;
- (id)connectionForStore:(id)a0 delegate:(id)a1 options:(unsigned int)a2;
- (id)flagChangesForMailboxPath:(id)a0 UID:(unsigned int)a1 connectTime:(double)a2;
- (id)moveMessages:(id)a0 fromMailbox:(id)a1 toMailbox:(id)a2 markAsRead:(BOOL)a3;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (BOOL)shouldExpungeMessagesOnDelete;
- (void)setServerPathPrefix:(id)a0 shouldSync:(BOOL)a1;
- (void)setCommitTime:(double)a0 forConnectionTag:(unsigned int)a1;
- (void)_didSynchronizeMailboxCachesAndFoundChanges:(BOOL)a0;
- (id)_mailboxUidForName:(id)a0;
- (void)_purgeStaleFlagChanges;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)a0 edgeForcedOnly:(BOOL)a1 ifIdleForTimeInterval:(double)a2 saveOfflineCache:(BOOL)a3;
- (void)_synchronizeAccountWithServer;
- (void)addFlagChanges:(id)a0 forMailboxPath:(id)a1 UID:(unsigned int)a2;
- (BOOL)getMailboxListWithConnection:(id)a0;
- (unsigned long long)greatestInboxUid;
- (id)mfl_lockOrdering;
- (unsigned long long)minUID;
- (unsigned int)minimumPartialDownloadSize;
- (BOOL)needToSynchronizeMailboxCaches;
- (void)releaseAllConnectionsIdleForTimeInterval:(double)a0;
- (void)removeFlagChanges:(id)a0 forMessages:(id)a1;
- (void)removeFlagChangesCommittedBefore:(double)a0;
- (BOOL)requiresDataForOfflineTransfersFromStore:(id)a0;
- (void)setConnectionTag:(unsigned int)a0 forFlagChanges:(id)a1 forMessages:(id)a2;

@end
