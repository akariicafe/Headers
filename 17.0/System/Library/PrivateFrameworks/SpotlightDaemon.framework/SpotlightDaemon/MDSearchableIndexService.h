@class NSString, NSObject, CSIndexingQueue;
@protocol OS_xpc_object, OS_dispatch_queue, MDIndexer;

@interface MDSearchableIndexService : NSObject <CSSearchableIndexInterface, CSSearchableIndexServiceInterface> {
    CSIndexingQueue *_activityQueue;
}

@property (readonly, nonatomic) CSIndexingQueue *activityQueue;
@property (readonly, nonatomic) NSString *processDescription;
@property (retain, nonatomic) NSObject<MDIndexer> *indexer;
@property (retain, nonatomic) NSObject<OS_xpc_object> *clientConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSString *clientPersonaID;
@property (nonatomic) unsigned int clientUID;
@property (copy, nonatomic) NSString *protectionClass;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL searchInternal;
@property (nonatomic) BOOL quotaDisabled;
@property (nonatomic) BOOL isPrivate;
@property (nonatomic) BOOL allowMail;
@property (nonatomic) BOOL allowPhotosLibraryDeletion;
@property (nonatomic) BOOL isExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performDataMigrationWithTimeout:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSearchableItemsSinceDate:(id)a0 protectionClass:(id)a1 forBundleID:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (void)provideFileURLForBundle:(id)a0 identifier:(id)a1 type:(id)a2 completionHandler:(id /* block */)a3;
- (void)willModifySearchableItemsWithIdentifiers:(id)a0 protectionClass:(id)a1 forBundleID:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (void)fetchLastClientStateWithProtectionClass:(id)a0 forBundleID:(id)a1 clientStateName:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (void)_issueDiagnose:(int)a0 completionHandler:(id /* block */)a1;
- (BOOL)deleteUserActivitiesWithPersistentIdentifiers:(id)a0;
- (void)_makeActivityQueueIfNecessary;
- (void)deleteAllSearchableItemsWithProtectionClass:(id)a0 forBundleID:(id)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (void)indexSearchableItems:(id)a0 deleteSearchableItemsWithIdentifiers:(id)a1 clientState:(id)a2 clientStateName:(id)a3 protectionClass:(id)a4 forBundleID:(id)a5 options:(long long)a6 completionHandler:(id /* block */)a7;
- (void)indexSearchableItems:(id)a0 deleteSearchableItemsWithIdentifiers:(id)a1 clientState:(id)a2 protectionClass:(id)a3 forBundleID:(id)a4 options:(long long)a5 completionHandler:(id /* block */)a6;
- (void)flushUserActivities;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 protectionClass:(id)a1 forBundleID:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)deleteActionsBeforeTime:(id)a0;
- (void)provideDataForBundle:(id)a0 identifier:(id)a1 type:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)dataMigration:(id)a0;
- (void)checkInWithProtectionClass:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_canProcessIndexDataForBundle:(id)a0 itemsDecoder:(id)a1 deletesDecoder:(id)a2 clientState:(id)a3 clientStateName:(id)a4 outError:(id *)a5;
- (BOOL)deleteAllUserActivities:(id)a0;
- (BOOL)changeState:(id)a0;
- (void)donateRelevantActions:(id)a0 bundleID:(id)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)checkIn:(id)a0;
- (void)_dispatchActivities:(id)a0 bundleID:(id)a1;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)deleteBundle:(id)a0;
- (BOOL)deleteSinceDate:(id)a0;
- (BOOL)processActivities:(id)a0;
- (BOOL)photosLibraryDeleted:(id)a0;
- (void)fetchAttributes:(id)a0 protectionClass:(id)a1 bundleID:(id)a2 identifiers:(id)a3 includeParents:(BOOL)a4 qos:(unsigned int)a5 reply:(id)a6 completionHandler:(id /* block */)a7;
- (BOOL)willModify:(id)a0;
- (BOOL)handleCommand:(const char *)a0 info:(id)a1;
- (void)userPerformedAction:(id)a0 withItem:(id)a1 protectionClass:(id)a2;
- (BOOL)addInteraction:(id)a0;
- (void)_deleteAllSearchableItemsWithBundleID:(id)a0 protectionClass:(id)a1 shouldGC:(BOOL)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)deleteActionsWithIdentifiers:(id)a0;
- (void)_runLibraryDeletedCommand:(id)a0;
- (id)_checkItems:(id)a0 identifiers:(id)a1 protectionClass:(id)a2 bundleID:(id)a3;
- (BOOL)fetchAttributes:(id)a0;
- (BOOL)_jobForIndex:(long long)a0;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1 options:(long long)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)deleteActionsWithIdentifiers:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_deleteInteractions:(id)a0 forGroup:(BOOL)a1;
- (void)deleteAllUserActivities:(id)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (void)changeStateOfSearchableItemsWithUIDs:(id)a0 toState:(long long)a1 protectionClass:(id)a2 forBundleID:(id)a3 forUTIType:(id)a4 options:(long long)a5;
- (BOOL)transferDeleteJournals:(id)a0;
- (BOOL)fetchClientState:(id)a0;
- (void)_processIndexDataForBundle:(id)a0 protectionClass:(id)a1 personaID:(id)a2 options:(long long)a3 items:(id)a4 itemsText:(id)a5 clientState:(id)a6 expectedClientState:(id)a7 clientStateName:(id)a8 deletes:(id)a9 completionHandler:(id /* block */)a10;
- (BOOL)deleteAllInteractions:(id)a0;
- (void)addInteraction:(id)a0 intentClassName:(id)a1 bundleID:(id)a2 protectionClass:(id)a3 options:(long long)a4 completionHandler:(id /* block */)a5;
- (void)transferDeleteJournalsForProtectionClass:(const char *)a0 toDirectory:(int)a1 withCompletionHandler:(id /* block */)a2;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0 protectionClass:(id)a1 shouldGC:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)deleteActionsBeforeTime:(double)a0 options:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)deleteDomains:(id)a0;
- (BOOL)issueCommand:(id)a0;
- (void)_dispatchToReceiversWithBundleID:(id)a0 protectionClass:(id)a1 options:(long long)a2 items:(id)a3 itemsText:(id)a4 itemsHTML:(id)a5 deletes:(id)a6;
- (BOOL)donateRelevantActions:(id)a0;
- (id)_checkNonEmptyBundle:(id)a0 protectionClass:(id)a1;
- (void)performIndexJob:(id)a0 protectionClass:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)indexFromBundle:(id)a0 protectionClass:(id)a1 options:(long long)a2 items:(id)a3 itemsText:(id)a4 itemsHTML:(id)a5 clientState:(id)a6 expectedClientState:(id)a7 clientStateName:(id)a8 deletes:(id)a9 completionHandler:(id /* block */)a10;
- (id)_checkBundleIDHelper:(id)a0;
- (void)_issueCommand:(id)a0 searchContext:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)processIndexData:(id)a0;
- (void)_dispatchActivities:(id)a0;
- (void)_forceAppWithBundleID:(id)a0 toPerformJob:(id)a1;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2 options:(long long)a3 completionHandler:(id /* block */)a4;

@end
