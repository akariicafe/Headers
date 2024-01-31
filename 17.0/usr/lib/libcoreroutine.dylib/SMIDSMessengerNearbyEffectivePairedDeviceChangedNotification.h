@class IDSDevice;

@interface SMIDSMessengerNearbyEffectivePairedDeviceChangedNotification : RTNotification

@property (readonly, nonatomic) IDSDevice *device;

- (void).cxx_destruct;
- (id)initWithIDSDevice:(id)a0;

@end
