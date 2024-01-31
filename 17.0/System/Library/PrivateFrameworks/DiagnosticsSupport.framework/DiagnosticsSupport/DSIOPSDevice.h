@class NSDictionary;

@interface DSIOPSDevice : NSObject

@property (retain, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) unsigned long long deviceModel;

+ (id)deviceMatchingAccessories:(id)a0;
+ (id)deviceWithAccessory:(unsigned long long)a0;

- (id)serialNumber;
- (void).cxx_destruct;
- (id)information;
- (id)initWithDeviceIdentifiers:(id)a0;

@end
