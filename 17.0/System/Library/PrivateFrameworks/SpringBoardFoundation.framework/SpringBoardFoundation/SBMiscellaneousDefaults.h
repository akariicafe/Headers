@interface SBMiscellaneousDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long dataPlanActivationPromptCount;
@property (readonly, nonatomic) BOOL suppressNoSimAlert;
@property (readonly, nonatomic) BOOL walletPreArmForceLockButton;
@property (nonatomic) BOOL suppressAlertsForKeynote;
@property (nonatomic) BOOL sensitiveUIEnabled;
@property (readonly, nonatomic) BOOL disableAsyncRenderingSurfaceRetention;
@property (nonatomic) BOOL launchWithMallocStackLogging;
@property (readonly, nonatomic) BOOL disableAutomaticMallocStackLogging;
@property (readonly, nonatomic) BOOL enableDynamicJetsamLimits;
@property (nonatomic) float backlightLevel;

- (void)_bindAndRegisterDefaults;

@end
