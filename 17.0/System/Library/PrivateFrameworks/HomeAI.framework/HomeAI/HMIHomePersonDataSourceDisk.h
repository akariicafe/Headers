@class NSString;

@interface HMIHomePersonDataSourceDisk : HMIPersonDataSourceDisk <HMIHomePersonManagerDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)fetchAllUnassociatedFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)removeFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeFaceprintsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)removePersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)addFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPersonFaceCrops:(id)a0 completion:(id /* block */)a1;
- (void)addPersons:(id)a0 completion:(id /* block */)a1;

@end
