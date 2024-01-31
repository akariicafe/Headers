@class NSUUID, HMDCloudChange, NSArray, CKRecordID, HMDCloudZoneChange, HMDCloudZone, CKServerChangeToken, HMFOSTransaction;

@interface HMDCloudTransaction : HMFObject

@property (nonatomic) unsigned long long transactionType;
@property (retain, nonatomic) HMDCloudZoneChange *cloudZoneChange;
@property (readonly, nonatomic) NSArray *objectChanges;
@property (retain, nonatomic) HMDCloudChange *homeDataChange;
@property (readonly, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) HMDCloudZone *cloudZone;
@property (retain, nonatomic) HMFOSTransaction *osTransaction;
@property (readonly, nonatomic) CKRecordID *privateZoneRootRecordID;
@property (readonly, nonatomic) NSArray *allTransactionStoreRowIDs;
@property (readonly, nonatomic) NSArray *processedTransactionStoreRowIDs;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (readonly, nonatomic) BOOL encryptionFailed;
@property (readonly, nonatomic) BOOL controllerIdentifierChanged;
@property (nonatomic) BOOL needConflictResolution;
@property (nonatomic) BOOL iCloudSwitchStateEnabled;
@property (readonly, nonatomic, getter=isLegacyTransaction) BOOL legacyTransaction;
@property (readonly, nonatomic, getter=isMetadataTransaction) BOOL metadataTransaction;
@property (readonly, nonatomic, getter=isHomeManagerTransaction) BOOL homeManagerTransaction;
@property (readonly, nonatomic, getter=isHomeTransaction) BOOL homeTransaction;
@property (retain, nonatomic) CKServerChangeToken *updatedServerChangeToken;
@property (readonly, nonatomic, getter=isTemporaryCache) BOOL temporaryCache;
@property (readonly, nonatomic) BOOL zoneHasNoLocalData;
@property (nonatomic, getter=shouldCreateZone) BOOL createZone;
@property (nonatomic, getter=wasZoneCreated) BOOL zoneWasCreated;
@property (nonatomic, getter=shouldDeleteZone) BOOL deleteZone;
@property (nonatomic, getter=wasZoneDeleted) BOOL zoneWasDeleted;
@property (readonly, nonatomic) NSArray *recordsToSave;
@property (readonly, nonatomic) NSArray *recordsToDelete;
@property (readonly, nonatomic) BOOL hasValidChanges;
@property (readonly) BOOL doRecordsExistInCache;

+ (id)shortDescription;

- (id)init;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (void)addChangeWithDeletedRecordID:(id)a0;
- (void)addChangeWithObjectChange:(id)a0;
- (void)addChangeWithRecord:(id)a0;
- (id)cachedCloudRecordWithObjectID:(id)a0;
- (void)cachedCloudRecordWithObjectID:(id)a0 completionHandler:(id /* block */)a1;
- (id)changeWithObjectID:(id)a0;
- (id)changeWithRecordName:(id)a0;
- (BOOL)doesRecordExistInCacheWithObjectID:(id)a0;
- (BOOL)doesRecordExistWithObjectID:(id)a0;
- (void)fetchBatchToUpload:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 temporaryCache:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 temporaryCache:(BOOL)a1 noLocalData:(BOOL)a2;
- (void)loadCloudRecordsAndDetermineDeletesFromCache:(id /* block */)a0;
- (void)loadObjectChanges;
- (BOOL)moreChangesToProcess;
- (void)removeChangeWithObjectID:(id)a0;
- (id)replayTransaction:(id)a0 stagedTransaction:(id)a1;
- (void)resetRecordWithRecordID:(id)a0;
- (void)setAllChangedAsProcessed;
- (void)setDeleteAsProcessedWithRecordID:(id)a0;
- (void)setSaveAsProcessedWithRecord:(id)a0;
- (void)updateCloudCache;
- (void)updateCloudZone:(id)a0;

@end
