@class NSString, EDRemindMeNotificationController, EDMessagePersistence, NSPredicate, EDMessageQueryEvaluator, EFCancelationToken, EMQuery, EDPersistenceHookRegistry, NSObject, NSMutableSet;
@protocol OS_os_log, EDRemoteSearchProvider, EFScheduler, EDMessageQueryHelperDelegate;

@interface EDMessageQueryHelper : NSObject <EDMessageChangeHookResponder, EDRemindMeNotificationControllerObserver, EDRemoteSearchDelegate, EDSenderBucketChangeHookResponder, EFLoggable, EDMessageQueryHelperMessageSource, EFCancelable> {
    struct atomic_flag { _Atomic BOOL _Value; } _didStart;
    NSMutableSet *_noLongerMatchingMessages;
    NSMutableSet *_ignoredMessages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noLongerMatchingMessagesLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ignoredMessagesLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) long long initialBatchSize;
@property (readonly, nonatomic) long long maximumBatchSize;
@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) id<EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly, nonatomic) EDRemindMeNotificationController *remindMeNotificationController;
@property (readonly, nonatomic) id<EFScheduler> scheduler;
@property (readonly, weak, nonatomic) id<EDMessageQueryHelperDelegate> delegate;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (nonatomic) BOOL shouldReconcileJournal;
@property (nonatomic) BOOL keepMessagesInListOnBucketChange;
@property (readonly, nonatomic) BOOL updateDisplayDate;
@property (retain, nonatomic) NSPredicate *ignoreMessagesPredicate;
@property (nonatomic) BOOL addMessagesSynchronously;
@property (readonly) NSString *pendingFlagChangesKey;
@property (readonly) NSString *pendingConversationIDChangesKey;
@property (readonly) NSString *pendingSenderBucketChangesKey;
@property (readonly) NSString *pendingReadLaterDateChangesKey;
@property (readonly) NSString *pendingDisplayDateChangesKey;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (readonly, nonatomic) EMQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)start;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceIsChangingConversationID:(long long)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceWillChangeFlags:(id)a0 messages:(id)a1;
- (void).cxx_destruct;
- (void)persistenceDidDeleteAllMessagesInMailboxesWithURLs:(id)a0 generationWindow:(id)a1;
- (void)cancel;
- (void)persistenceDidAddAddresses:(id)a0 toSender:(id)a1 generation:(long long)a2;
- (void)persistenceDidRemoveAddresses:(id)a0 fromSender:(id)a1 generation:(long long)a2;
- (void)persistenceDidChangeFlags:(id)a0 messages:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidUpdateProperties:(id)a0 message:(id)a1 generationWindow:(id)a2;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (void)persistenceDidChangeReadLaterDate:(id)a0 messages:(id)a1 changeIsRemote:(BOOL)a2 generationWindow:(id)a3;
- (void)persistenceDidDeleteMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidUpdateDisplayDateForMessages:(id)a0 changeIsRemote:(BOOL)a1 generation:(long long)a2;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)a0 conversationID:(long long)a1 generationWindow:(id)a2;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceWillChangeConversationID:(long long)a0 messages:(id)a1;
- (void)persistenceWillChangeReadLaterDate:(id)a0 messages:(id)a1;
- (void)persistenceWillUpdateDisplayDateForMessages:(id)a0;
- (void)_foundMessages:(id)a0;
- (void)_calculateAndReportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 changeBlock:(id /* block */)a2;
- (id)_filteredMessagesForPredicate:(id)a0 limit:(long long)a1;
- (void)_getInitialResults;
- (id)_persistedMessagesFromSendersWithAddresses:(id)a0;
- (void)_persistenceDidDeleteMessages:(id)a0 includeMessagesWithDeletedFlag:(BOOL)a1;
- (id)_predicateWithAdditionalPredicates:(id)a0;
- (void)_prepareForSenderBucketChangeForThreadsWithSenderAddresses:(id)a0;
- (void)_reportChangesForCurrentlyMatchingMessages:(id)a0 previouslyMatchingMessages:(id)a1 keyPaths:(id)a2;
- (void)_reportChangesForPersistedMessages:(id)a0 withPendingChangesKey:(id)a1 keyPaths:(id)a2;
- (void)_reportSenderBucketChangeForThreadsWithSenderAddresses:(id)a0;
- (id)_transformAndFilterMessages:(id)a0 includeDeleted:(BOOL)a1 removeIgnoredMessages:(BOOL)a2;
- (id)_unjournaledMessagesForMessages:(id)a0;
- (void)_updateDisplayDateForMessagesIfNeeded;
- (void)controller:(id)a0 messageTimerFired:(id)a1;
- (id)initWithQuery:(id)a0 initialBatchSize:(long long)a1 maximumBatchSize:(long long)a2 messagePersistence:(id)a3 hookRegistry:(id)a4 remoteSearchProvider:(id)a5 scheduler:(id)a6 remindMeNotificationController:(id)a7 delegate:(id)a8 shouldReconcileJournal:(BOOL)a9 shouldAddMessagesSynchronously:(BOOL)a10 keepMessagesInListOnBucketChange:(BOOL)a11;
- (id)messagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;
- (void)persistenceDidChangeSenders:(id)a0 generation:(long long)a1;
- (void)persistenceWillAddAddresses:(id)a0 toSender:(id)a1;
- (void)persistenceWillChangeSenders:(id)a0;
- (void)persistenceWillChangeSendersForAddresses:(id)a0;
- (void)persistenceWillRemoveAddresses:(id)a0 fromSender:(id)a1;
- (void)remoteSearchDidFindMessages:(id)a0;
- (void)remoteSearchDidFinish;
- (id)sortableMessagesWithAdditionalPredicates:(id)a0 limit:(long long)a1;

@end
