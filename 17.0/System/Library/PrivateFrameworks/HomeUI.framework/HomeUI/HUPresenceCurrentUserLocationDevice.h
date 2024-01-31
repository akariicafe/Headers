@class HMDevice;

@interface HUPresenceCurrentUserLocationDevice : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) HMDevice *customDevice;

+ (id)currentDevice;
+ (id)FMFDevice;
+ (id)customDeviceWithHMDevice:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 customDevice:(id)a1;

@end
