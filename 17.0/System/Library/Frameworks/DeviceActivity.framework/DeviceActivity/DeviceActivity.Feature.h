@interface DeviceActivity.Feature : NSObject

@property (class, nonatomic, readonly) BOOL isDeviceActivityEnabled;
@property (class, nonatomic, readonly) BOOL isDeviceActivityUIEnabled;

- (id)init;

@end
