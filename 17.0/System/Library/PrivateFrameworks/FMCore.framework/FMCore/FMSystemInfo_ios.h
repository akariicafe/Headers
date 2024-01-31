@interface FMSystemInfo_ios : FMSystemInfo

- (id)productName;
- (id)osVersion;
- (id)serialNumber;
- (id)productType;
- (id)chipId;
- (id)deviceName;
- (id)wifiMacAddress;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (id)deviceModelName;
- (BOOL)isDeviceSecured;
- (id)deviceClass;
- (id)meid;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)ecid;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)imei;
- (id)osBuildVersion;
- (id)btMacAddress;
- (id)deviceUDID;
- (BOOL)hasSEP;

@end
