@class HMCameraClipEncryptionManager, NSDate;

@interface HMDCameraClipCreateClipWithSignificantEventOperation : HMDCameraClipAddSignificantEventOperation

@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSDate *clipStartDate;
@property (readonly) long long quality;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;

+ (id)logCategory;
+ (unsigned long long)cameraClipOperationType;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 targetFragmentDuration:(double)a4 clipStartDate:(id)a5 quality:(long long)a6 encryptionManager:(id)a7;
- (id)initWithClipModelID:(id)a0 localZone:(id)a1 significantEvent:(id)a2 homePresenceByPairingIdentity:(id)a3 targetFragmentDuration:(double)a4 clipStartDate:(id)a5 quality:(long long)a6 encryptionManager:(id)a7 dataSource:(id)a8;
- (id)modelsToAdd;

@end
