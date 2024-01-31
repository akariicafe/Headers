@class SBRingerButtonParameters;

@interface SBRingerHardwareButtonSettings : PTSettings

@property (nonatomic) double longPressTime;
@property (nonatomic) double longPressTimeWhenSuppressed;
@property (nonatomic) long long viewObstructionEligibility;
@property (copy, nonatomic) SBRingerButtonParameters *ringerButtonParameters;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
