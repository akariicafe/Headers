@class BCCloudDataSource, BDSSaltVersionIdentifierManager, NSString, BCCloudChangeTokenController, NSMutableDictionary, BCCloudDataManager, NSManagedObjectModel, BCCloudDataSyncManager;

@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudKitSupportZoneRecovery, BDSCloudGlobalMetadataManager>

@property (retain, nonatomic) BCCloudDataSource *globalMetadataDataSource;
@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;
@property (retain, nonatomic) BCCloudDataManager *dataManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (retain, nonatomic) NSMutableDictionary *conflictResolvers;
@property (nonatomic) BOOL enableCloudSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;

- (id)init;
- (id)entityName;
- (void).cxx_destruct;
- (void)metadataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)currentCloudSyncVersions:(id /* block */)a0;
- (void)deleteMetadatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)a0;
- (void)fetchMetadataIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;
- (void)getMetadataChangesSince:(id)a0 completion:(id /* block */)a1;
- (void)hasSaltChangedWithCompletion:(id /* block */)a0;
- (id)initWithCloudDataSource:(id)a0;
- (void)metadatumForKey:(id)a0 completion:(id /* block */)a1;
- (void)metadatumIncludingDeleted:(BOOL)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)removeConflictResolverForKey:(id)a0;
- (void)removeMetadataForSaltedHashedRecordIDs:(id)a0 completion:(id /* block */)a1;
- (void)resolvedMetadataValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)setConflictResolver:(id /* block */)a0 forKey:(id)a1;
- (void)setMetadata:(id)a0 completion:(id /* block */)a1;
- (void)setMetadataValue:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setMetadatum:(id)a0 completion:(id /* block */)a1;
- (void)signalSyncToCKForSyncManager:(id)a0;
- (void)syncManager:(id)a0 failedRecordIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 fetchedAllRecordsInZone:(id)a1;
- (void)syncManager:(id)a0 removeCloudDataForIDs:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 resolveConflictsForRecords:(id)a1 completion:(id /* block */)a2;
- (void)syncManager:(id)a0 startSyncToCKWithCompletion:(id /* block */)a1;
- (void)syncManager:(id)a0 updateSyncGenerationFromCloudData:(id)a1 completion:(id /* block */)a2;
- (void)updateSyncGenerationFromCloudData:(id)a0 completion:(id /* block */)a1;

@end
