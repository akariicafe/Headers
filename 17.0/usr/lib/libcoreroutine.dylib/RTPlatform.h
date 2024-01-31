@interface RTPlatform : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)currentPlatform;
+ (BOOL)operatingSystemAtLeastVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)operatingSystemNoGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a0;
+ (struct { long long x0; long long x1; long long x2; })operatingSystemVersionFromString:(id)a0;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 atLeastVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 equalToVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)version:(struct { long long x0; long long x1; long long x2; })a0 noGreaterThanVersion:(struct { long long x0; long long x1; long long x2; })a1;

- (id)serialNumber;
- (id)productType;
- (id)buildVersion;
- (BOOL)macOSPlatform;
- (BOOL)watchPlatform;
- (id)systemModel;
- (id)deviceClass;
- (BOOL)lowEndHardware;
- (BOOL)supportsScenarioTriggers;
- (BOOL)isTinkerPaired;
- (BOOL)iPhonePlatform;
- (id)userAssignedDeviceName;
- (BOOL)supportsMultiUser;
- (BOOL)internalInstall;
- (BOOL)realityDevice;
- (BOOL)simulatorPlatform;
- (BOOL)supportsCoreRoutineCapability;
- (id)systemVersion;
- (BOOL)paired;
- (BOOL)isWatchPaired;
- (BOOL)iPhoneDevice;
- (BOOL)supportsPairedDevice;
- (unsigned long long)deviceMemorySize;
- (BOOL)usesTSCForClustering;

@end
