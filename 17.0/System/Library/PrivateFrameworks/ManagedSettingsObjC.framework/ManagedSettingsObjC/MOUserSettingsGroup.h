@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOUserSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denySharingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyUnrestrictedSharingMetadata;
@property (class, readonly, nonatomic) MOStringSettingMetadata *sharingPolicyMetadata;

@property (retain, nonatomic) NSNumber *denySharing;
@property (retain, nonatomic) NSNumber *denyUnrestrictedSharing;
@property (retain, nonatomic) NSString *sharingPolicy;

+ (id)groupName;

@end
