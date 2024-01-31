@class NSSet, MOApplicationSetSettingMetadata, MOUserSafetyScanningPolicySettingMetadata, MOUserSafetyScanningPolicy;

@interface MOUserSafetySettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOApplicationSetSettingMetadata *allowedClientsMetadata;
@property (class, readonly, nonatomic) MOUserSafetyScanningPolicySettingMetadata *scanningPolicyMetadata;

@property (retain, nonatomic) NSSet *allowedClients;
@property (retain, nonatomic) MOUserSafetyScanningPolicy *scanningPolicy;

+ (id)groupName;

@end
