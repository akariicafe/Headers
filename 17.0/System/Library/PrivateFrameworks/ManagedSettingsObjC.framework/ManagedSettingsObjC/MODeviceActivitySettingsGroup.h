@class NSSet, MOApplicationSetSettingMetadata, MOBoolSettingMetadata, MOStringSetSettingMetadata, NSNumber;

@interface MODeviceActivitySettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *allowedClientsMetadata;
@property (class, readonly, nonatomic) MOStringSetSettingMetadata *sharingAppleIDsMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *shareAcrossDevicesMetadata;

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) NSSet *sharingAppleIDs;
@property (retain, nonatomic) NSNumber *shareAcrossDevices;

+ (id)groupName;

@end
