@class EAAccessory;

@interface DSEADevice : NSObject

@property (retain, nonatomic) EAAccessory *device;

+ (id)deviceWithModelNumber:(id)a0;
+ (id)deviceWithSerialNumber:(id)a0;
+ (id)devicesWithModelNumbers:(id)a0;

- (void).cxx_destruct;
- (id)information;
- (id)initWithAccessory:(id)a0;
- (id)initWithSerialNumber:(id)a0;
- (id)initWithModelNumber:(id)a0;

@end
