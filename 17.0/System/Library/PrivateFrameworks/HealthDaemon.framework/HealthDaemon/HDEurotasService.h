@interface HDEurotasService : HDHealthService

+ (id)serviceUUID;
+ (long long)serviceType;

- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (id)servicesInProfile;

@end
