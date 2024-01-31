@class HMCameraClipSignificantEvent, HMHome, HMCameraProfile;

@interface HFCameraClipSignificantEventItem : HFFetchedHomeKitObjectItem <NSCopying>

@property (readonly, copy, nonatomic) HMCameraClipSignificantEvent *event;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (readonly, nonatomic) HMHome *home;

- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSignificantEvent:(id)a0 home:(id)a1;
- (id)_homeKitObjectFetch;

@end
