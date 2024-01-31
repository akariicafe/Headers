@interface MSDeviceInfo : NSObject

@property (class, readonly, nonatomic) BOOL isDeviceiPhone;
@property (class, readonly, nonatomic) BOOL isDeviceiPad;
@property (class, readonly, nonatomic) BOOL isDeviceAppleTV;
@property (class, readonly, nonatomic) BOOL isDeviceAudioAccessory;
@property (class, readonly, nonatomic) BOOL deviceSupportsMultipleUsers;
@property (class, readonly, nonatomic) BOOL deviceCanManageMultiUser;

@end
