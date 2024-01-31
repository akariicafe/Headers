@class HMCameraProfile;

@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;

@end
