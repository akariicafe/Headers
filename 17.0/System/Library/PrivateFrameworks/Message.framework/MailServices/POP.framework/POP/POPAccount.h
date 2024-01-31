@class NSArray, NSConditionLock, MFActivityMonitor, MFPOP3Connection, MFLock, NSString;

@interface POPAccount : MailAccount {
    MFActivityMonitor *_fetchMonitor;
    MFPOP3Connection *_connection;
    NSConditionLock *_sharedConnectionCondition;
    unsigned long long _connectionsInUse;
    NSArray *_currentUIDs;
    MFLock *_connectionActivityLock;
    float _connectionTimeout;
    BOOL _fetcherNeedsReset;
    BOOL _hasDoneBackgroundSynchronization;
    BOOL _shouldAttemptAPOP;
    NSString *_oldestMessageUID;
    NSString *_newestMessageUID;
    long long _numberOfKnownUIDs;
}

+ (id)accountTypeIdentifier;
+ (void)initialize;
+ (unsigned int)defaultPortNumber;
+ (unsigned int)defaultSecurePortNumber;
+ (id)accountTypeString;
+ (id)saslProfileName;
+ (id)csAccountTypeString;
+ (void *)legacyKeychainProtocol;

- (id)serviceName;
- (BOOL)requiresAuthentication;
- (void).cxx_destruct;
- (Class)connectionClass;
- (id)_URLScheme;
- (void)_deleteHook;
- (id)authenticatedConnection;
- (BOOL)canCreateNewMailboxes;
- (BOOL)canGoOffline;
- (BOOL)canMailboxBeRenamed:(id)a0;
- (id)certUIService;
- (id)initWithLibrary:(id)a0 persistentAccount:(id)a1;
- (id)mailboxPathExtension;
- (id)mailboxUidOfType:(int)a0 createIfNeeded:(BOOL)a1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (id)secureServiceName;
- (void)setPreferredAuthScheme:(id)a0;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;
- (id)statisticsKind;
- (Class)storeClass;
- (Class)storeClassForMailbox:(id)a0;
- (BOOL)supportsPurge;
- (BOOL)supportsSyncingReadState;
- (id)_getCachedConnection;
- (id)_createNewConnection;
- (void)checkInConnection:(id)a0 currentUIDs:(id)a1;
- (void)closeCachedConnection;
- (void)closeCachedConnectionForcedOnly:(id)a0;
- (void)closeConnection:(id)a0 andSaveUIDs:(id)a1;
- (unsigned long long)connectionsInUse;
- (unsigned int)delayedMessageDeletionInterval;
- (long long)fetchNumNewMessages:(unsigned long long)a0 oldMessages:(unsigned long long)a1 preservingUID:(id)a2 withStore:(id)a3;
- (int)messageDeletionPolicy;
- (id)newestKnownMessageUID;
- (long long)numberOfKnownUIDs;
- (id)oldestKnownMessageUID;
- (void)scheduleDisconnect;
- (void)setDelayedMessageDeletionInterval:(unsigned int)a0;
- (void)setMessageDeletionPolicy:(int)a0;
- (void)setNewestKnownMessageUID:(id)a0;
- (void)setNumberOfKnownUIDs:(long long)a0;
- (void)setOldestKnownMessageUID:(id)a0;
- (void)setShouldAttemptAPOP:(BOOL)a0;
- (BOOL)shouldAttemptAPOP;

@end
