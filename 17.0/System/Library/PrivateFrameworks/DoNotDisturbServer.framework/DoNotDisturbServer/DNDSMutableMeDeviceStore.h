@class NSNumber, NSString;

@interface DNDSMutableMeDeviceStore : DNDSMeDeviceStore

@property (copy, nonatomic) NSNumber *meDeviceStatus;
@property (copy, nonatomic) NSString *meDeviceName;

- (void)setMeDeviceStatus:(id)a0;
- (void)setMeDeviceName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
