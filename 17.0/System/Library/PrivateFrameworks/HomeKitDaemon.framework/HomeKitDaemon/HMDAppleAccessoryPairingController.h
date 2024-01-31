@class HMBLocalZone, HMDHomeManager, HMDLegacyCloudDatabase, NSMutableDictionary, HMDMutableHomeData, NSString;
@protocol HMDAppleAccessoryPairingControllerDataSource;

@interface HMDAppleAccessoryPairingController : HMFObject <HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) HMDHomeManager *homeManager;
@property (retain) id<HMDAppleAccessoryPairingControllerDataSource> dataSource;
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase;
@property (retain) HMBLocalZone *homeManagerZone;
@property (retain) HMBLocalZone *blobZone;
@property (retain) NSMutableDictionary *pairingHomes;
@property (retain) HMDMutableHomeData *homeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (void)generateModelChangesForHomeManager:(id)a0 homeName:(id)a1 pairingHomeUUID:(id)a2 defaultRoomUUID:(id)a3 homeZoneUUID:(id)a4 accessory:(id)a5 configurationAppIdentifier:(id)a6 outBlobChanges:(id *)a7 outLegacyChanges:(id *)a8 outHomeManagerChanges:(id *)a9;
- (BOOL)handleMessage:(id)a0 from:(id)a1;
- (void)start;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onZone:(id)a3;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (void)cloudDatabase:(id)a0 didRemoveZoneWithID:(id)a1;
- (id)cleanUpBadHomeManagerRecordsForHomeManager:(id)a0;
- (BOOL)pairAccessory:(id)a0 configurationAppIdentifier:(id)a1;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (void).cxx_destruct;
- (void)removeControllerForZone:(id)a0;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onContainer:(id)a3;

@end
