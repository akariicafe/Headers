@class NSUUID;

@interface DDDevicePickerMutableSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (retain, nonatomic) NSUUID *endpointUUID;
@property (retain, nonatomic) NSUUID *agentUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
