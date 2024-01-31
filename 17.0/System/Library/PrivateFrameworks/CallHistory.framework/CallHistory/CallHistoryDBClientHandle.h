@class CHNotifyObserver, CallHistoryDBHandle;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable {
    id _observerCallTimersRef;
}

@property (readonly, nonatomic) CHNotifyObserver *callsDidChangeNotifyObserver;
@property (readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle;

+ (id)createForClient;
+ (id)createForServer;

- (id)init:(BOOL)a0;
- (BOOL)deleteAll;
- (id)timerLifetime;
- (id)updateCallRecords:(id)a0;
- (void)parseCallStatus_sync:(unsigned int)a0 isAnswered:(BOOL *)a1 isOriginated:(BOOL *)a2;
- (void)dealloc;
- (BOOL)createCallRecords:(id)a0 error:(id *)a1;
- (BOOL)updateCallRecord_sync:(id)a0 withChangeDict:(id)a1;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (void)setStoreObject_sync:(id)a0 withClientObject:(id)a1;
- (id)fetchCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)fetchAll;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)a0;
- (void)unRegisterForNotifications;
- (id)fetchAllObjectsWithUniqueId:(id)a0;
- (void)handleCallTimersSave_sync:(id)a0;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)timerOutgoing;
- (id)updateCallRecords_sync:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)saveDatabase:(id *)a0;
- (id)timerIncoming;
- (BOOL)createCallRecord:(id)a0;
- (void)handleCallRecordSave_sync;
- (id)updateCallRecords:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)createCallRecords:(id)a0;
- (BOOL)deleteAll:(id *)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0;
- (id)convertToCHRecentCalls_sync:(id)a0 limit:(unsigned long long)a1;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0;
- (id)updateCallRecords:(id)a0 error:(id *)a1;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1;
- (long long)deleteCallsWithPredicate:(id)a0;
- (id)updateCallsWithPredicate:(id)a0 propertiesToUpdate:(id)a1 error:(id *)a2;
- (BOOL)resetAllTimers;
- (id)timerLastReset;
- (void)resetTimers;
- (void).cxx_destruct;
- (id)fetchObjectWithUniqueId:(id)a0;
- (id)updateAllCallRecords_sync:(id)a0 error:(id *)a1;
- (unsigned long long)fetchCallCountWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (id)fetchObjectsWithUniqueIds:(id)a0;
- (unsigned int)getCallStatus_sync:(id)a0 isOriginated:(id)a1 isAnswered:(id)a2;
- (id)fetchWithCallTypes:(unsigned int)a0;
- (id)manager;
- (void)registerForNotifications;
- (id)fetchCallIdentifiersWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (id)updateAllCallRecords:(id)a0 error:(id *)a1;
- (id)fetchCoalescedCallsWithPredicate:(id)a0 sortDescriptors:(id)a1 limit:(unsigned long long)a2 offset:(unsigned long long)a3 batchSize:(unsigned long long)a4;
- (BOOL)deleteObjectsWithUniqueIds:(id)a0 error:(id *)a1;
- (id)convertToCHRecentCalls_sync:(id)a0;
- (id)fetchObjectsWithPredicate:(id)a0;
- (BOOL)deleteObjectWithUniqueId:(id)a0 error:(id *)a1;
- (id)fetchAllNoLimit;
- (id)updateAllCallRecords:(id)a0;
- (BOOL)createCallRecord:(id)a0 error:(id *)a1 save:(BOOL)a2;
- (BOOL)willHandleNotification_sync:(id)a0;

@end
