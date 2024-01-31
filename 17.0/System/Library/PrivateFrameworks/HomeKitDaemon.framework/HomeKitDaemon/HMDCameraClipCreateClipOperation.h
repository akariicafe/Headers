@class HMCameraClipEncryptionManager, NSDate;

@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddModelsOperation

@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSDate *clipStartDate;
@property (readonly) long long quality;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;

+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 targetFragmentDuration:(double)a2 clipStartDate:(id)a3 quality:(long long)a4 encryptionManager:(id)a5;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 targetFragmentDuration:(double)a2 clipStartDate:(id)a3 quality:(long long)a4 encryptionManager:(id)a5 dataSource:(id)a6;
- (id)modelsToAdd;

@end
