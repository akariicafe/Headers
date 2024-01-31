@class NSUUID;

@interface DDDevicePickerSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic) NSUUID *endpointUUID;
@property (readonly, nonatomic) NSUUID *agentUUID;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
