@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenPearlSettings : PTSettings

@property (nonatomic) BOOL pearlDebugUIEnabled;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *failureSettings;
@property (nonatomic) BOOL showScanningStateOnLockScreen;
@property (nonatomic) BOOL showScanningStateDuringFaceDetect;
@property (nonatomic) double minimumDurationBeforeShowingScanningState;
@property (nonatomic) double minimumDurationBetweenLeavingCoachingAndCoaching;
@property (nonatomic) double minimumDurationShowingCoaching;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
@property (nonatomic) BOOL coachingDelaysUnlock;
@property (nonatomic) BOOL spinBeforeCoaching;
@property (nonatomic) BOOL overrideCoachingConditionEnabled;
@property (nonatomic) unsigned long long overrideCoachingBiometricEvent;
@property (nonatomic) double systemApertureDismissDelayDismissal;
@property (nonatomic) double systemApertureDismissDelayAuth;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (struct { BOOL x0; BOOL x1; double x2; BOOL x3; double x4; double x5; double x6; double x7; BOOL x8; BOOL x9; BOOL x10; unsigned long long x11; })proudLockControllerViewControllerConfiguration;

@end
