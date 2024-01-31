@class NSString, CHFeatureFlags, CallDBManager, NSManagedObjectContext;

@interface CallHistoryDBHandle : CHLogger {
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

@property (class, readonly, copy, nonatomic) NSString *objectId;

@property (readonly, nonatomic) CHFeatureFlags *featureFlags;
@property (nonatomic) long long callsDidChangeDarwinNotificationCount;
@property (readonly, nonatomic) CallDBManager *callDBManager;

+ (id)createForClient;
+ (id)createWithDBManager:(id)a0;
+ (id)createForServer;

- (void)deleteAll;
- (BOOL)save:(id *)a0;
- (id)timerLifetime;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1;
- (unsigned long long)fetchManagedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)dealloc;
- (long long)deleteManagedCalls:(id)a0;
- (void)handleCallRecordContextDidSaveNotification:(id)a0;
- (id)fetchAll;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (BOOL)saveTimers:(id /* block */)a0;
- (void)unRegisterForNotifications;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (id)timerOutgoing;
- (void)postTimersChangedNotification;
- (id)createCallRecord;
- (void)handlePersistentStoreChangedNotification:(id)a0;
- (id)timerIncoming;
- (id)callRecordContext;
- (id)initWithDBManager:(id)a0;
- (id)fetchWithPredicate:(id)a0 forEntity:(id)a1 withLimit:(BOOL)a2;
- (void)deleteObjectWithUniqueId:(id)a0;
- (void)handleCallDBPropContextDidSaveNotification:(id)a0;
- (id)fetchManagedCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (void)deleteObjectsWithUniqueIds:(id)a0;
- (BOOL)resetAllTimers;
- (id)getArrayForCallTypeMask:(unsigned int)a0;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (id)timerLastReset;
- (void)resetTimers;
- (void).cxx_destruct;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (long long)deleteManagedCallsWithPredicate:(id)a0;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (BOOL)handleSaveForCallRecordContext:(id)a0 error:(id *)a1;
- (void)registerForNotifications:(id)a0;
- (id)updateManagedCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1;
- (id)callDBProperties;
- (long long)callHistoryDBFetchLimit;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)a0 error:(id *)a1;
- (id)fetchObjectsWithPredicate:(id)a0;
- (id)fetchManagedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchAllNoLimit;
- (void)updateCallDBProperties;

@end
