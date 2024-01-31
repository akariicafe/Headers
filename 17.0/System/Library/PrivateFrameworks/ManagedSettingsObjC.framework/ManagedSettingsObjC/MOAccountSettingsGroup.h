@class NSNumber, MOBoolSettingMetadata;

@interface MOAccountSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyiCloudLogoutMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *lockAccountsMetadata;

@property (retain, nonatomic) NSNumber *denyiCloudLogout;
@property (retain, nonatomic) NSNumber *lockAccounts;

+ (id)groupName;

@end
