@class HMIHomePersonManager, NSString;

@interface HMDHomeAIHomePersonDataInterface : HMDHomeAIPersonDataInterface <HMFLogging, HMIHomePersonManagerDataSource>

@property (readonly) HMIHomePersonManager *homePersonManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)removeFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removePersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)addFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addFaceprints:(id)a0 completion:(id /* block */)a1;
- (void)addPersonFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPersons:(id)a0 completion:(id /* block */)a1;
- (void)handleFaceMisclassificationForFaceCropData:(id)a0 personUUID:(id)a1;
- (void)handleUpdatedSettings:(id)a0 mirrorOutputFuture:(id)a1;
- (void)handleUpdatedUnassociatedFaceCrop:(id)a0 mirrorOutputFuture:(id)a1;
- (id)initWithHomePersonManager:(id)a0 workQueue:(id)a1;
- (id)initWithPersonManagerUUID:(id)a0 homeUUID:(id)a1 workQueue:(id)a2;

@end
