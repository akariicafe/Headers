@interface HDFitnessMachineService : HDHealthService

@property (readonly, nonatomic) unsigned long long machineType;

+ (id)serviceUUID;
+ (long long)serviceType;
+ (id)implementedProperties;
+ (unsigned long long)typeFromAdvertisementData:(id)a0;

- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (BOOL)processAdvertisementData:(id)a0;
- (void)readProperty:(id)a0;
- (id)servicesInProfile;

@end
