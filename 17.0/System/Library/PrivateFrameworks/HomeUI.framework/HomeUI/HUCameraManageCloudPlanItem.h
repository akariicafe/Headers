@class HMCameraProfile;

@interface HUCameraManageCloudPlanItem : HFStaticItem

@property (readonly, copy, nonatomic) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
