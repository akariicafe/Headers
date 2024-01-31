@class HMIExternalPersonManager, NSString;

@interface HMDHomeAIPhotosPersonDataInterface : HMDHomeAIPersonDataInterface <HMFLogging, HMIExternalPersonManagerDataSource>

@property (readonly) HMIExternalPersonManager *photosPersonManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)handleUpdatedSettings:(id)a0 mirrorOutputFuture:(id)a1;
- (id)initWithPersonManagerUUID:(id)a0 homeUUID:(id)a1 workQueue:(id)a2;
- (id)initWithPhotosPersonManager:(id)a0 workQueue:(id)a1;

@end
