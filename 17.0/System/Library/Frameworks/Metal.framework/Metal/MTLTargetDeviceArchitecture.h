@interface MTLTargetDeviceArchitecture : NSObject

@property (nonatomic) unsigned int cpuType;
@property (nonatomic) unsigned int subType;
@property (nonatomic) struct MTLTargetDeviceArchVersion { unsigned short major; unsigned char minor; unsigned char update; } version;
@property (readonly) unsigned int versionCombined;
@property (nonatomic) unsigned long long driverVersion;

- (id)init;

@end
