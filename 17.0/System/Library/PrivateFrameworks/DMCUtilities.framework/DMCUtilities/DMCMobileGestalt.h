@interface DMCMobileGestalt : NSObject

+ (id)productName;
+ (BOOL)isPad;
+ (BOOL)isWatch;
+ (id)serialNumber;
+ (id)productType;
+ (id)buildVersion;
+ (id)diskCapacity;
+ (id)regionInfo;
+ (BOOL)isAppleTV;
+ (BOOL)hasBattery;
+ (id)deviceClass;
+ (BOOL)hasCellularDataCapability;
+ (id)regionCode;
+ (BOOL)isPhone;
+ (id)modelNumber;
+ (BOOL)isHomePod;
+ (id)deviceColor;
+ (id)deviceUDID;
+ (BOOL)hasTelephonyCapability;
+ (id)diskUsage;
+ (id)_overridableGestaltForKey:(struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)availableCapacity;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
