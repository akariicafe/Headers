@class EFLazyCache, NSString, NSMutableDictionary, MFMailMessageLibrary, MFMailMessageLibraryQueryTransformer, NSObject;
@protocol OS_os_log, EFScheduler, OS_dispatch_queue, MFMessageSummaryLoaderProvider;

@interface MFMessagePersistence_iOS : EDMessagePersistence <EFLoggable, EDMessageChangeHookResponder> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _summaryLock;
    NSMutableDictionary *_summaryLoaders;
    EFLazyCache *_obsoleteGlobalMessageIDToDatabaseIDMap;
    MFMailMessageLibrary *_library;
    MFMailMessageLibraryQueryTransformer *_queryTransformer;
    id<EFScheduler> _networkContentLoadScheduler;
    id<EFScheduler> _offlineContentLoadScheduler;
    NSObject<OS_dispatch_queue> *_requestSummaryQueue;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) id<MFMessageSummaryLoaderProvider> summaryLoaderProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)libraryMessageForMessageObjectID:(id)a0;
- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (id)sqlQueryForQuery:(id)a0 connection:(id)a1;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)collectStatistics;
- (id)persistedMessageForSQLRow:(id)a0 connection:(id)a1 iterationContext:(id)a2;
- (id)createContextForIteration;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (id)expressionForFilteringUnavailableMessagesFromCount;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (id)_requestSummaryForLibraryMessage:(id)a0;
- (void).cxx_destruct;
- (void)setContentProtectionForAttachmentFile:(id)a0;
- (id)_libraryMessageForMessageObjectID:(id)a0 preferNonOutgoingMessages:(BOOL)a1;
- (id)enabledAccountMailboxesExpression;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 userProfileProvider:(id)a2 blockedSenderManager:(id)a3 vipReader:(id)a4 hookRegistry:(id)a5 library:(id)a6;
- (id)expressionForFilteringUnavailableMessagesForGlobalMessageQuery:(BOOL)a0;
- (void)generateSummaryForMessage:(id)a0 downloadIfNecessary:(BOOL)a1;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (void)persistenceDidChangeGlobalMessageID:(long long)a0 orConversationID:(long long)a1 message:(id)a2 generationWindow:(id)a3;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (id)expressionForFindingOnlyJournaledMessages;

@end
