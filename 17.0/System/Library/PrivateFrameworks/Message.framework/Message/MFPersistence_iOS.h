@class EDServerMessagePersistenceFactory, EDRemoteContentManager, EMRemoteContentURLCache, EDMailboxPersistence, EDRemoteContentPersistence, NSString, EDSearchableIndexManager, EDRemoteContentCacheConfiguration, EDPersistenceDatabase, EDMessageChangeManager, EDRemindMeNotificationController, EDMessagePersistence, EDThreadPersistence, EDConversationPersistence, EDRichLinkPersistence, NSObject, EDReadLaterPersistence, EDDataDetectionPersistence, MFMailMessageLibrary, EMRemoteContentURLSession, EDAttachmentPersistenceManager, EDBIMIManager, EDSenderPersistence, EDLocalActionPersistence, EDMailboxActionPersistence;
@protocol OS_os_log, EMUserProfileProvider, EDAccountsProvider, EDRemoteSearchProvider;

@interface MFPersistence_iOS : EDPersistence <EFLoggable> {
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDDataDetectionPersistence *_dataDetectionPersistence;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxActionPersistence *_mailboxActionPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id<EDRemoteSearchProvider> _remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    EDSenderPersistence *_senderPersistence;
    EDRemoteContentManager *_remoteContentManager;
    EDRemoteContentPersistence *_remoteContentPersistence;
    EDRichLinkPersistence *_richLinkPersistence;
    EDAttachmentPersistenceManager *_attachmentPersistenceManager;
    EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
    EMRemoteContentURLCache *_remoteContentURLCache;
    EMRemoteContentURLSession *_remoteContentURLSession;
    EDReadLaterPersistence *_readLaterPersistence;
    EDBIMIManager *_bimiManager;
    EDRemindMeNotificationController *_remindMeNotificationController;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)database;
- (id)remoteContentManager;
- (id)remoteContentPersistence;
- (void)setUpWithMailboxProvider:(id)a0 remoteSearchProvider:(id)a1;
- (id)remindMeNotificationController;
- (id)richLinkPersistence;
- (void)_configureAttachmentPersistenceManager;
- (id)remoteContentURLCache;
- (id)serverMessagePersistenceFactory;
- (id)messagePersistence;
- (id)attachmentPersistenceManager;
- (id)bimiManager;
- (void)scheduleRecurringActivity;
- (id)conversationPersistence;
- (id)remoteSearchProvider;
- (id)remoteContentURLSession;
- (id)mailboxActionPersistence;
- (id)localActionPersistence;
- (id)remoteContentCacheConfiguration;
- (void)_configureSearchableIndexManagerIfNecessary;
- (id)messageChangeManager;
- (id)initWithPath:(id)a0 inMemoryIdentifier:(id)a1 library:(id)a2 propertyMapper:(id)a3;
- (void).cxx_destruct;
- (id)persistenceStatistics;
- (void)test_tearDown;
- (id)searchableIndexManager;
- (id)readLaterPersistence;
- (void)setRemoteContentURLCache:(id)a0;
- (id)dataDetectionPersistence;
- (id)senderPersistence;
- (id)threadPersistence;
- (void)setRemoteContentURLSession:(id)a0;

@end
