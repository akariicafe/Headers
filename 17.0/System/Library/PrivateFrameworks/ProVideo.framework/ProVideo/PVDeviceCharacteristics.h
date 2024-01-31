@interface PVDeviceCharacteristics : NSObject

+ (BOOL)hasExtendedColorDisplay;
+ (void)Initialize;
+ (long long)actualMemory;
+ (int)architectureType;
+ (BOOL)colorSyncCapable;
+ (BOOL)isLowMemDevice;

@end
