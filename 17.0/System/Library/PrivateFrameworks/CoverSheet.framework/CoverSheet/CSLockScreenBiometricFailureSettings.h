@interface CSLockScreenBiometricFailureSettings : PTSettings

@property (nonatomic) BOOL jiggleLock;
@property (nonatomic) BOOL vibrate;
@property (nonatomic) BOOL showPasscode;
@property (nonatomic) BOOL waitUntilButtonUp;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
