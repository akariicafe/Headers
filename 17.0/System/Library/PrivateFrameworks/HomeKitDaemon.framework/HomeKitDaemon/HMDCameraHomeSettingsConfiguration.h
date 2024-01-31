@class NSArray;

@interface HMDCameraHomeSettingsConfiguration : HMFObject

@property (readonly, nonatomic) NSArray *cameraSettings;
@property (readonly, nonatomic) NSArray *userSettings;
@property (readonly) unsigned long long enabledResidentsDeviceCapabilities;
@property (readonly, getter=isFaceClassificationEnabled) BOOL faceClassificationEnabled;
@property (readonly, getter=isOwner) BOOL owner;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;

@end
