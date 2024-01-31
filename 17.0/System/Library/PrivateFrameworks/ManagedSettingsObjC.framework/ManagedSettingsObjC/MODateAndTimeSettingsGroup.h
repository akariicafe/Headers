@class NSNumber, MOBoolSettingMetadata;

@interface MODateAndTimeSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *requireAutomaticDateAndTimeMetadata;

@property (retain, nonatomic) NSNumber *requireAutomaticDateAndTime;

+ (id)groupName;

@end
