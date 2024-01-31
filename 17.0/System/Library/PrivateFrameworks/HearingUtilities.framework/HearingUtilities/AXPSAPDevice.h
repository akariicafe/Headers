@interface AXPSAPDevice : AXHearingAidDevice

+ (id)characteristicsUUIDs;

- (id)serviceUUID;
- (unsigned long long)deviceType;
- (id)persistentRepresentation;
- (unsigned long long)requiredProperties;

@end
