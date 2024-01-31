@interface CSLockScreenChargingSettings : PTSettings

@property (nonatomic) double accessoryAnimationDelayInMilliseconds;
@property (nonatomic) double omniAccessoryAnimationDelayInMilliseconds;
@property (nonatomic) double accessoryAnimationBlockingDurationAfterBootInSeconds;
@property (nonatomic) double wirelessChargingDebounceDurationInSeconds;
@property (nonatomic) double wirelessChargingFirmwareUpdateDebounceDurationInSeconds;
@property (nonatomic) BOOL showWirelessAndAccessoryAnimations;
@property (nonatomic) BOOL warnForIdleDim;
@property (nonatomic) BOOL shouldUseBrightnessFloor;
@property (nonatomic) double brightnessFloor;
@property (nonatomic) long long wirelessChargingAnimationType;
@property (nonatomic) long long wiredChargingAnimationType;
@property (nonatomic) BOOL shouldFakeA149Attach;
@property (nonatomic) BOOL useWhimsicalDesign;
@property (nonatomic) BOOL shouldShowMaskForAuxiliaryBattery;
@property (nonatomic) double auxiliaryBoltHeight;
@property (nonatomic) double auxiliaryBoltMaskHeightDifference;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (long long)accessoryTypeForAnimationType:(long long)a0;

@end
