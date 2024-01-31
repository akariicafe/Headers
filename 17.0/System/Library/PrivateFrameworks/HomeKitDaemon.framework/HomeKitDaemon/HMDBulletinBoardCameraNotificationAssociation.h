@class HMDCameraProfile, NSMutableSet;

@interface HMDBulletinBoardCameraNotificationAssociation : HMFObject

@property (readonly, nonatomic) HMDCameraProfile *cameraProfile;
@property (readonly, nonatomic) NSMutableSet *notificationGeneratingServicesWithCamera;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)a0;

@end
