@class NSData, NSString, NSSet, NSMutableDictionary, NSOperationQueue, NSDictionary, NSObject, MTSKeyValueStore, NSNumber, HMMTRMatterKeypair;
@protocol HMMTRStorageDelegate, HMMTRFabricStorageDataSource, OS_dispatch_queue, HMMTRStorageDataSource;

@interface HMMTRStorage : HMFObject <HMFLogging, MTRPersistentStorageDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSSet *pairedNodeIDs;
@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue;
@property (retain) NSMutableDictionary *localStorage;
@property (retain) NSMutableDictionary *inMemoryStorage;
@property (retain) NSMutableDictionary *appleFabricLocalStorage;
@property (retain) NSDictionary *localStorageWithoutUpdates;
@property BOOL storageSyncPending;
@property BOOL storageSyncInProgress;
@property (weak) id<HMMTRStorageDelegate> delegate;
@property (retain, nonatomic) NSData *rootCert;
@property (retain, nonatomic) NSData *operationalCert;
@property (retain, nonatomic) NSData *ownerIPK;
@property (retain, nonatomic) NSNumber *ownerNodeID;
@property (retain, nonatomic) HMMTRMatterKeypair *nocSigner;
@property (retain, nonatomic) HMMTRMatterKeypair *systemCommissionerNocSigner;
@property (retain, nonatomic) HMMTRMatterKeypair *operationalKeyPair;
@property (retain, nonatomic) NSNumber *certificateIssuerID;
@property (readonly, getter=isLocalStorageMode) BOOL localStorageMode;
@property (retain) NSNumber *fabricID;
@property (getter=isSystemCommissionerFabric) BOOL systemCommissionerFabric;
@property (getter=isSharedAdmin) BOOL sharedAdmin;
@property (retain) id<HMMTRFabricStorageDataSource> fabricDataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) MTSKeyValueStore *systemCommissionerKeyValueStore;
@property (weak) id<HMMTRStorageDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)accessoryNodeIDFromPluginKey:(id)a0;
+ (id)chipPluginStorageAccessoryNodeSpecificKeys;
+ (id)chipPluginStorageKeys;
+ (BOOL)didUpdateMatterItems:(id)a0 oldStorage:(id)a1;
+ (id)formatKeyForNodeId:(id)a0 key:(id)a1;
+ (id)generateIPK;
+ (id)ignoredMatterStorageKeys;
+ (BOOL)isMatterKey:(id)a0;
+ (BOOL)isMemoryStorageKey:(id)a0;
+ (BOOL)isPluginAccessoryNodeKey:(id)a0;
+ (BOOL)isPluginKey:(id)a0;
+ (id)keyByStrippingNodeIdFromKey:(id)a0;
+ (id)matterItemsFromDictionary:(id)a0;
+ (id)matterStorageKeys;
+ (id)memoryStorageKeys;
+ (id)nodeIdFromPluginKey:(id)a0;
+ (id)removeRecordsForUnpairedNodesInDict:(id)a0 pairedNodes:(id)a1;
+ (BOOL)shouldIgnoreWritesForKey:(id)a0;

- (id)initWithQueue:(id)a0;
- (BOOL)removeValueForKey:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (void)handleUpdatedCurrentFabricIndex;
- (id)rootCertificate;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)operationalCertificate;
- (void)setOperationalCertificate:(id)a0;
- (void)setRootCertificate:(id)a0;
- (BOOL)setValueForKey:(id)a0 value:(id)a1;
- (void)handlePrimaryResidentDataReady;
- (id)controllerNodeID;
- (BOOL)removeStorageDataForKey:(id)a0;
- (BOOL)setStorageData:(id)a0 forKey:(id)a1;
- (id)storageDataForKey:(id)a0;
- (void)_resetSystemCommissionerStorage;
- (BOOL)_syncSetDataSourceValue:(id)a0 forKey:(id)a1;
- (id)ipkForFabricID:(id)a0;
- (id)operationalCertForCurrentFabric;
- (void)_fetchCertForFabricWithID:(id)a0 isOwner:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_handlePerFabricStorageMaybeAvailable:(id)a0;
- (void)_handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)_preferencesValueForKey:(id)a0;
- (BOOL)_removeAllDataSourceData;
- (void)_removeSystemCommissionerFabricNodeIDForUuid:(id)a0;
- (void)_setPreferencesValueForKey:(id)a0 value:(id)a1;
- (BOOL)_syncSetDataSourceDictionary:(id)a0;
- (BOOL)_syncSetDataSourceValuesWithError:(id *)a0 block:(id /* block */)a1;
- (void)_syncToRemoteStorage;
- (void)addPairedNodeID:(id)a0;
- (void)addPairedNodeID:(id)a0 toSystemCommissionerFabric:(BOOL)a1;
- (BOOL)areCachedCertificatesValidForFabricID:(id)a0;
- (id)categoryForNode:(id)a0;
- (id)categoryForSystemCommissionerFabricNode:(id)a0;
- (id)configNumberForNode:(id)a0;
- (id)deviceNameForSystemCommissionerFabricNode:(id)a0;
- (void)endLocalStorageModeByPersistingAppleFabricData;
- (void)endLocalStorageModeBySyncingToRemote:(BOOL)a0;
- (id)fabricIDForSystemCommissioner;
- (id)fabricIndexForNode:(id)a0;
- (void)fetchCertForFabricWithID:(id)a0 isOwner:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleUpdatedDataForFabricIndex:(id)a0 isLocalChange:(BOOL)a1;
- (void)handleUpdatedDataForFabricIndex:(id)a0 nodeID:(id)a1 isLocalChange:(BOOL)a2;
- (id)ipkForCurrentFabric;
- (id)ipkForCurrentFabricID;
- (BOOL)isResidentDevice;
- (BOOL)isStagedForNode:(id)a0;
- (BOOL)isStorageCorruptForKeyValueStore:(id)a0;
- (unsigned int)knownFabricInStorage:(id)a0 fabricID:(id)a1 keyPair:(id)a2 controllerNodeID:(id *)a3 rootCertificate:(id *)a4;
- (unsigned int)knownFabricWithID:(id)a0;
- (BOOL)localStorageMode;
- (id)nodeIDForFabricID:(id)a0 deviceIdentifier:(id)a1;
- (id)pairedNodeIDsFromStoredStringValue:(id)a0;
- (id)pairedNodeIDsOnSystemCommissionerFabric:(BOOL)a0;
- (void)prepareStorageForFabricID:(id)a0;
- (id)productIDForNode:(id)a0;
- (id)productIDForSystemCommissionerFabricNode:(id)a0;
- (void)removeAndSyncAllKeysNotIncludedInActiveNodeIDs:(id)a0;
- (void)removePairedNodeID:(id)a0;
- (void)removePairedNodeID:(id)a0 fromSystemCommissionerFabric:(BOOL)a1;
- (void)removeRecordsForNode:(id)a0;
- (void)removeRecordsForNodeIDs:(id)a0;
- (void)removeRecordsForSystemCommissionerFabricNode:(id)a0;
- (BOOL)removeValueForKey:(id)a0 systemCommissionerFabric:(BOOL)a1;
- (BOOL)replaceAllKeysAndSyncWithBlock:(id /* block */)a0 systemCommissionerFabric:(BOOL)a1;
- (void)resetStorage;
- (id)rootCertForCurrentFabric;
- (id)serialNumberForSystemCommissionerFabricNode:(id)a0;
- (void)setCategory:(id)a0 forNode:(id)a1;
- (void)setCategory:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (void)setConfigNumber:(id)a0 forNode:(id)a1;
- (void)setControllerNodeID:(id)a0;
- (void)setDeviceName:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (void)setFabricID:(id)a0 forNode:(id)a1;
- (void)setLocalStorageMode:(BOOL)a0;
- (void)setPairedNodeIDs:(id)a0;
- (void)setPairedNodeIDs:(id)a0 forSystemCommissionerFabric:(BOOL)a1;
- (void)setProductID:(id)a0 forNode:(id)a1;
- (void)setProductID:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (void)setSerialNumber:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (void)setSetupPayload:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (void)setStaged:(BOOL)a0 forNode:(id)a1;
- (void)setSystemCommissionerFabricID:(id)a0;
- (void)setSystemCommissionerFabricNodeID:(id)a0 forUuid:(id)a1;
- (void)setTopology:(id)a0 forNode:(id)a1;
- (void)setUuid:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (BOOL)setValueForKey:(id)a0 removingKeys:(id)a1 systemCommissionerFabric:(BOOL)a2 block:(id /* block */)a3;
- (BOOL)setValueForKey:(id)a0 value:(id)a1 systemCommissionerFabric:(BOOL)a2;
- (void)setVendorID:(id)a0 forNode:(id)a1;
- (void)setVendorID:(id)a0 forSystemCommissionerFabricNode:(id)a1;
- (id)setupPayloadForSystemCommissionerFabricNode:(id)a0;
- (void)startLocalStorageMode;
- (id)storedStringValueFromPairedNodeIDs:(id)a0;
- (id)systemCommissionerFabricNodeIDForUuid:(id)a0;
- (id)topologyForNode:(id)a0;
- (id)updateCertificateExpiryInStorage:(id)a0 keyPair:(id)a1;
- (id)uuidForSystemCommissionerFabricNode:(id)a0;
- (id)valueForKey:(id)a0 systemCommissionerFabric:(BOOL)a1;
- (id)vendorIDForNode:(id)a0;
- (id)vendorIDForSystemCommissionerFabricNode:(id)a0;

@end
