@class NSUUID, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface HMIPersonDataSourceDisk : HMFObject <HMIPersonManagerDataSource, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSURL *sourceURL;
@property (readonly) NSUUID *homeUUID;
@property (readonly) NSUUID *sourceUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)getStoragePath;

- (void).cxx_destruct;
- (void)performCloudPullWithCompletion:(id /* block */)a0;
- (void)fetchAllFaceprintsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonFaceCropsWithCompletion:(id /* block */)a0;
- (void)fetchAllPersonsWithCompletion:(id /* block */)a0;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)fetchPersonsWithUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)addFaceprints:(id)a0 completion:(id /* block */)a1;
- (id)initWithHomeUUID:(id)a0 sourceUUID:(id)a1 error:(id *)a2;

@end
