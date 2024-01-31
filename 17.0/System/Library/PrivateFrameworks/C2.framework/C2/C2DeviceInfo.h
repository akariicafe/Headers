@interface C2DeviceInfo : NSObject

+ (id)productName;
+ (id)testName;
+ (id)productType;
+ (id)buildVersion;
+ (id)productVersion;
+ (id)processUUID;
+ (id)processName;
+ (BOOL)isAppleInternal;
+ (id)processVersion;
+ (BOOL)whitelistedForDisableAPWakeOnIdleConnections;

@end
