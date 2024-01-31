@interface STUIItemSettings : PTSettings

@property (nonatomic) BOOL batteryPercentageAlwaysEnabled;
@property (nonatomic) BOOL batteryCondensedPercentageForceEnabled;
@property (nonatomic) BOOL showBothDualCarrierNames;
@property (nonatomic) BOOL secondarySIMUnderBaseline;
@property (nonatomic) BOOL showRingerWhenSilenced;
@property (nonatomic) BOOL showRingerOnAODLockScreen;
@property (nonatomic) BOOL showRingerOffLockScreen;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
