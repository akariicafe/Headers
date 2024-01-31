@class NSString, MOBoolSettingMetadata, MOStringSettingMetadata, NSNumber;

@interface MOSafariSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOStringSettingMetadata *cookiePolicyMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAutoFillMetadata;

@property (retain, nonatomic) NSString *cookiePolicy;
@property (retain, nonatomic) NSNumber *denyAutoFill;

+ (id)groupName;

@end
