@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)productName;
- (id)osVersion;
- (id)serialNumber;
- (id)productType;
- (id)chipId;
- (id)deviceName;
- (id)wifiMacAddress;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (id)deviceClass;
- (id)meid;
- (id)ecid;
- (BOOL)isInternalBuild;
- (id)imei;
- (id)osBuildVersion;
- (id)btMacAddress;
- (id)deviceUDID;
- (BOOL)hasSEP;
- (id)ownerAccount;

@end
