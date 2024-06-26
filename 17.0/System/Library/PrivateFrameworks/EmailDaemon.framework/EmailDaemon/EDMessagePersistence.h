@class NSString, EDMessagePersistenceStatistics, EDMessageQueryParser, EDMailboxPersistence, EDPersistenceHookRegistry, NSObject, EDMessageTransformer, EDPersistenceDatabase, NSNumber;
@protocol OS_os_log, OS_dispatch_queue, EFSQLValueExpressable;

@interface EDMessagePersistence : NSObject <EFLoggable, EFSignpostable, EDMailboxPredictionQueryAdapter, EDMessageObjectIDToDatabaseIDConverter>

@property (class, readonly, copy, nonatomic) NSString *messagesTableName;
@property (class, readonly, copy, nonatomic) NSString *globalMessageIDColumnName;
@property (class, readonly, copy, nonatomic) NSString *addressesTableName;
@property (class, readonly, copy, nonatomic) NSString *messageGlobalDataTableName;
@property (class, readonly) NSObject<OS_os_log> *log;
@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedMetadataIsolation;
@property (retain, nonatomic) NSNumber *cachedMetadataEstimatedRowCount;
@property (nonatomic) int cachedMetadataUpdatesSinceLastCheck;
@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (retain, nonatomic) EDMessageTransformer *messageTransformer;
@property (retain, nonatomic) EDMessageQueryParser *queryParser;
@property (readonly, nonatomic) id<EFSQLValueExpressable> expressionForFindingOnlyJournaledMessages;
@property (readonly, nonatomic) id<EFSQLValueExpressable> expressionForFilteringUnavailableMessagesFromCount;
@property (readonly, weak, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (readonly, nonatomic) EDMessagePersistenceStatistics *persistenceStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

+ (id)messageGlobalDataTableSchema;
+ (id)_messageReferencesTableSchema;
+ (id)bitExpressionForIsCCMe;
+ (id)_protectedMessageDataTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (long long)_databaseIDFromSelect:(id)a0 connection:(id)a1;
+ (id)objectPropertyMapperForSchema:(id)a0 protectedSchema:(id)a1;
+ (id)bitExpressionForAttachments;
+ (id)_summariesTableSchema;
+ (id)_subjectsTableSchema;
+ (id)_cachedMetadataTableSchema;
+ (id)protectedTablesAndForeignKeysToResolve:(id *)a0;
+ (id)_addressMetadataTableSchema;
+ (id)bitExpressionForIsToMe;
+ (id)allDatabaseIDsForSimpleAddresses:(id)a0 connection:(id)a1;
+ (id)_brandIndicatorsTableSchema;
+ (id)addJoinsForAddressToSelectComponent:(id)a0 withSourceAddressColumn:(id)a1;
+ (id)bitExpressionForConversationFlag:(unsigned long long)a0;
+ (id)_addressesTableSchema;
+ (id)selectAddressesStatementWithResultColumns:(id *)a0;
+ (id)recipientsTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (long long)databaseIDForEmailAddress:(id)a0 connection:(id)a1;
+ (id)messagesDisplayDateColumnName;
+ (id)partialMessagesTableSchemaAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)messagesDateReceivedColumnName;

- (id)persistedMessageForOutgoingMessage:(id)a0 isDraft:(BOOL)a1;
- (id)sqlQueryForQuery:(id)a0 connection:(id)a1;
- (id)requestContentForMessageObjectID:(id)a0 requestID:(unsigned long long)a1 options:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)collectStatistics;
- (id)persistedMessageForSQLRow:(id)a0 connection:(id)a1 iterationContext:(id)a2;
- (id)createContextForIteration;
- (id)persistedMessagesForDatabaseIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableDatabaseIDs:(id *)a2;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:(id)a0;
- (void).cxx_destruct;
- (void)setContentProtectionForAttachmentFile:(id)a0;
- (id)enabledAccountMailboxesExpression;
- (id)expressionForFilteringUnavailableMessagesForGlobalMessageQuery:(BOOL)a0;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)a0 variable:(id)a1;
- (id)requestSummaryForMessageObjectID:(id)a0;
- (long long)globalIDForMessageWithDatabaseID:(long long)a0 mailboxScope:(id *)a1;
- (id)cachedMetadataJSONForKey:(id)a0 messageID:(id)a1;
- (void)collectStatisticsWithStatistics:(id)a0;
- (id)completeCachedMetadataJSONForGlobalMessageID:(long long)a0;
- (long long)countOfJournaledMessagesMatchingQuery:(id)a0;
- (id)initWithMailboxPersistence:(id)a0 database:(id)a1 hookRegistry:(id)a2 userProfileProvider:(id)a3 blockedSenderManager:(id)a4 vipReader:(id)a5;
- (id)messageObjectIDCriterionExpressionForPredicateValue:(id)a0;
- (id)messagesForPersistedMessages:(id)a0 mailboxScope:(id)a1;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)a0;
- (id)persistedMessagesForMessageObjectIDs:(id)a0 requireProtectedData:(BOOL)a1 temporarilyUnavailableMessageObjectIDs:(id *)a2;
- (id)persistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 requireProtectedData:(BOOL)a2;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)a0;
- (void)setCachedMetadataJSON:(id)a0 forKey:(id)a1 messageID:(id)a2;
- (void)setMetadata:(id)a0 forAddress:(id)a1;
- (BOOL)compressDirectory:(id)a0 shouldCancel:(id /* block */)a1 error:(id *)a2;
- (BOOL)compressFile:(id)a0 error:(id *)a1;
- (id)messageObjectIDForURL:(id)a0;
- (id)messageObjectIDsForSearchableItemIdentifiers:(id)a0;
- (id)metadataForAddresses:(id)a0;
- (id)_cachedMetadataJSONForKey:(id)a0 globalMessageID:(long long)a1;
- (void)_checkCachedMetadataRowLimitWithConnection:(id)a0;
- (void)_checkForFollowUpExpirationWithQuery:(id)a0;
- (long long)_countForSQLQuery:(id)a0;
- (id)_databaseIDsDictionaryForGlobalMessageIDs:(id)a0 mailboxScope:(id)a1;
- (id)_expressionForNonDeletedMessagesDisqualifyingColumn:(BOOL)a0;
- (id)_groupMessageObjectIDsByMailboxScope:(id)a0;
- (void)_iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 requireProtectedData:(BOOL)a3 handler:(id /* block */)a4;
- (id)_persistedMessageIDsForMessagesForConversationIDs:(id)a0 onlyFollowUps:(BOOL)a1;
- (id)_predicatesSeparatedByMailboxOrAccountForAndPredicate:(id)a0 containsMailboxPredicate:(BOOL *)a1;
- (id)_predicatesSeparatedByMailboxOrAccountForOrPredicate:(id)a0 containsMailboxPredicate:(BOOL *)a1;
- (id)_predicatesSeparatedByMailboxOrAccountForPredicate:(id)a0 containsMailboxPredicate:(BOOL *)a1;
- (void)_setCachedMetadataJSON:(id)a0 forKey:(id)a1 globalMessageID:(long long)a2;
- (id)_threadQueryForThreadObjectID:(id)a0;
- (long long)addBrandIndicatorWithData:(id)a0;
- (id)brandIndicatorForDatabaseID:(long long)a0;
- (id)brandIndicatorForURL:(id)a0;
- (id)brandIndicatorsForURLs:(id)a0;
- (long long)countOfMessageStatement:(id)a0;
- (long long)countOfMessagesMatchingQuery:(id)a0;
- (long long)countOfMessagesWithGlobalMessageID:(long long)a0 matchingQuery:(id)a1;
- (id)databaseIDsDictionaryForMessageObjectIDs:(id)a0;
- (id)diagnosticsForForMessageObjectIDs:(id)a0;
- (long long)globalIDForMessageIDHash:(id)a0;
- (long long)globalIDForMessageIDHeader:(id)a0;
- (void)iterateMessagesMatchingQuery:(id)a0 batchSize:(long long)a1 firstBatchSize:(long long)a2 limit:(long long)a3 cancelationToken:(id)a4 handler:(id /* block */)a5;
- (void)iterateMessagesMatchingSmartSortQuery:(id)a0 limit:(long long)a1 handler:(id /* block */)a2;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 handler:(id /* block */)a3;
- (void)iteratePersistedMessagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2 requireProtectedData:(BOOL)a3 handler:(id /* block */)a4;
- (id)messagesForMessageObjectIDs:(id)a0 missedMessageObjectIDs:(id *)a1;
- (id)messagesMatchingQuery:(id)a0;
- (id)messagesMatchingQuery:(id)a0 limit:(long long)a1;
- (id)messagesMatchingQuery:(id)a0 limit:(long long)a1 cancelationToken:(id)a2;
- (void)performDatabaseReadBlock:(id /* block */)a0;
- (void)persistFollowUp:(id)a0 forMessages:(id)a1;
- (void)persistSendLaterForMessages:(id)a0 date:(id)a1;
- (id)persistedMessageIDsForGlobalMessageIDs:(id)a0;
- (id)persistedMessageIDsForMessagesForConversationIDs:(id)a0;
- (id)persistedMessageIDsForMessagesWithFollowUpsForConversationIDs:(id)a0;
- (id)persistedMessagesForObjectIDs:(id)a0 requireProtectedData:(BOOL)a1;
- (id)persistedMessagesMatchingQuery:(id)a0 limit:(long long)a1;
- (id)queriesSeparatedByMailboxForQuery:(id)a0;
- (id)queryWithExpandedMailboxesFromQuery:(id)a0;
- (void)removeBrandIndicatorForURL:(id)a0;
- (id)retrieveFollowUpJsonStringForModelEvaluationForSuggestionsForMessages:(id)a0;
- (void)setBrandIndicator:(id)a0 forURL:(id)a1;
- (void)setBrandIndicatorDatabaseID:(long long)a0 location:(id)a1 forMessages:(id)a2;
- (id)sortableMessagesForPersistedMessages:(id)a0 mailboxScope:(id)a1;
- (id)sortableMessagesMatchingQuery:(id)a0 limit:(long long)a1;
- (id)undownloadedBrandIndicatorsWithLimit:(unsigned long long)a0;
- (void)updateBeforeDisplayForMessagesMatchingQuery:(id)a0;
- (void)updateBeforeDisplayForPersistedMessages:(id)a0;
- (void)updateDisplayDateForPersistedMessages:(id)a0 displayDate:(id)a1 changeIsRemote:(BOOL)a2;
- (id)validMailboxesForPrediction;

@end
