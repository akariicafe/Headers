@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (id)osVersion;
+ (id)serialNumber;
+ (id)infoDictionary;
+ (id)productVersion;
+ (id)apnsToken;
+ (id)userAgentHeader;
+ (id)clientInfoHeader;
+ (BOOL)isInternalBuild;
+ (id)udid;
+ (BOOL)isMultiUserMode;
+ (id)appleIDClientIdentifier;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)deviceEnclosureColor;
- (id)osVersion;
- (id)serialNumber;
- (id)productType;
- (id)buildVersion;
- (id)productVersion;
- (id)deviceName;
- (id)wifiMacAddress;
- (id)deviceHousingColor;
- (id)apnsToken;
- (id)deviceClass;
- (id)userAgentHeader;
- (id)osName;
- (id)regionCode;
- (id)deviceInfoDictionary;
- (id)clientInfoHeader;
- (id)storageCapacity;
- (id)bluetoothMacAddress;
- (id)deviceCoverGlassColor;
- (id)internationalMobileEquipmentIdentity;
- (id)mobileEquipmentIdentifier;
- (id)deviceBackingColor;
- (BOOL)hasCellularCapability;
- (id)uniqueChipIdentifier;
- (id)chipIdentifier;
- (id)modelNumber;
- (id)udid;
- (id)deviceColor;
- (id)appleIDClientIdentifier;

@end
