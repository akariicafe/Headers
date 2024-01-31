@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenMesaSettings : PTSettings

@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *firstFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *secondFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *thirdFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fourthFailureSettings;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *fifthFailureSettings;
@property (nonatomic) BOOL passcodeRequiredEventsCountAsFailures;
@property (nonatomic) BOOL flashRedOnPasscodeRequiredEvents;
@property (nonatomic) BOOL successFeedbackWaitsUntilButtonUp;
@property (nonatomic) double slowPressDuration;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
