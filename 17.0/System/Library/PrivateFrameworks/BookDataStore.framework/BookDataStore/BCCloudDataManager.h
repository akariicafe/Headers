@class BCCloudDataSource, NSString, BCCloudKitController, NSObject, NSManagedObjectContext;
@protocol BDSCloudDataManagerMonitor, BCCloudDataSyncProvider, BCCloudDataPrivacyDelegate, OS_dispatch_queue, BCCloudDataMapper;

@interface BCCloudDataManager : NSObject <BDSCloudKitSupportSignOutDissociate>

@property (weak, nonatomic) NSManagedObjectContext *moc;
@property (retain, nonatomic) BCCloudDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (copy, nonatomic) NSString *entityName;
@property (copy, nonatomic) NSString *notificationName;
@property (weak, nonatomic) id<BCCloudDataSyncProvider> syncManager;
@property Class immutableClass;
@property Class mutableClass;
@property (weak, nonatomic) id<BCCloudDataPrivacyDelegate> privacyDelegate;
@property (nonatomic) BOOL signalDataChangedTransaction;
@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) id<BCCloudDataMapper> dataMapper;
@property (weak, nonatomic) id<BDSCloudDataManagerMonitor> monitor;

- (void).cxx_destruct;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6 privacyDelegate:(id)a7;
- (void)_dirtyMutableCloudDataWithFetchLimit:(unsigned long long)a0 synchronous:(BOOL)a1 completion:(id /* block */)a2;
- (void)_logError:(id)a0 at:(id)a1;
- (void)cloudDataWithPredicate:(id)a0 sortDescriptors:(id)a1 completion:(id /* block */)a2;
- (void)cloudDatasWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)cloudDatasWithPredicate:(id)a0 sortDescriptors:(id)a1 maximumResultCount:(unsigned long long)a2 filter:(id /* block */)a3 completion:(id /* block */)a4;
- (void)countWithPredicate:(id)a0 completion:(id /* block */)a1;
- (void)currentCloudSyncVersions:(id /* block */)a0;
- (void)deleteCloudDataForPredicate:(id)a0 completion:(id /* block */)a1;
- (id)diagnosticDirtyCloudDataInfos;
- (void)dirtyMutableCloudDataWithFetchLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)failedRecordIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchCloudDataIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)getChangesSince:(id)a0 forEntityClass:(Class)a1 completion:(id /* block */)a2;
- (void)hasSaltChangedWithCompletion:(id /* block */)a0;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6 dataMapper:(id)a7;
- (id)initWithCloudDataSource:(id)a0 entityName:(id)a1 notificationName:(id)a2 immutableClass:(Class)a3 mutableClass:(Class)a4 syncManager:(id)a5 cloudKitController:(id)a6 dataMapper:(id)a7 privacyDelegate:(id)a8;
- (id)mq_cloudSyncVersions;
- (void)mq_incrementCloudVersion;
- (id)mq_sanitizeError:(id)a0;
- (void)mq_signalTransactions;
- (id)mutableCloudDataWithPredicate:(id)a0 sortDescriptors:(id)a1;
- (void)mutableCloudDataWithPredicate:(id)a0 sortDescriptors:(id)a1 synchronous:(BOOL)a2 completion:(id /* block */)a3;
- (void)removeCloudDataForPredicate:(id)a0 completion:(id /* block */)a1;
- (void)resolveConflictsForRecords:(id)a0 completion:(id /* block */)a1;
- (void)resolveConflictsForRecords:(id)a0 withResolvers:(id)a1 completion:(id /* block */)a2;
- (void)resolveConflictsForRecords:(id)a0 withResolvers:(id)a1 mergers:(id)a2 completion:(id /* block */)a3;
- (void)resolvedCloudDataForCloudData:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)resolvedCloudDataForCloudData:(id)a0 withResolvers:(id)a1 mergers:(id)a2 predicate:(id)a3 completion:(id /* block */)a4;
- (void)resolvedCloudDataForCloudData:(id)a0 withResolvers:(id)a1 predicate:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)setCloudData:(id)a0 predicate:(id)a1 isEqualCheckIgnoringEmptySalt:(BOOL)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 mergers:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 mergers:(id)a2 isEqualCheckIgnoringEmptySalt:(BOOL)a3 completion:(id /* block */)a4;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 completion:(id /* block */)a3;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 isEqualCheckIgnoringEmptySalt:(BOOL)a3 completion:(id /* block */)a4;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 mergers:(id)a3 completion:(id /* block */)a4;
- (void)setCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 mergers:(id)a3 isEqualCheckIgnoringEmptySalt:(BOOL)a4 completion:(id /* block */)a5;
- (void)startSyncToCKWithSyncManager:(id)a0 completion:(id /* block */)a1;
- (void)transformedCloudDatasWithPredicate:(id)a0 transformer:(id /* block */)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)updateSyncGenerationFromCloudData:(id)a0 predicate:(id)a1 propertyIDKey:(id)a2 completion:(id /* block */)a3;

@end
