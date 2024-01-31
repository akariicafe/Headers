@interface DEDUtils : NSObject

+ (id)deviceEnclosureColor;
+ (id)deviceSerialNumber;
+ (BOOL)isInternalInstall;
+ (id)osBuild;
+ (id)deviceModel;
+ (id)deviceName;
+ (id)platform;
+ (id)deviceClass;
+ (id)deviceHardwareCodename;
+ (id)deviceClassForProductType:(id)a0;
+ (BOOL)isDebugRequestsEnabled;
+ (id)uniqueDeviceSpecifier;
+ (BOOL)isDataClassBAvailable;
+ (id)deviceProductType;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (id)sharedLog;
+ (id)deviceUniformTypeIdentifier;
+ (int)deviceHomeButtonType;
+ (id)modelForProductType:(id)a0;
+ (id)deviceColor;
+ (id)checkDefaultsForOverride:(id)a0;

@end
