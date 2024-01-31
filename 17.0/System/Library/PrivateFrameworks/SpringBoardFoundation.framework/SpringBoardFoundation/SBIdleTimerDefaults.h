@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) double minimumLockscreenIdleTime;
@property (readonly, nonatomic) BOOL disableAutoDim;
@property (readonly, nonatomic) BOOL dontDimOrLockWhileConnectedToPower;
@property (readonly, nonatomic) BOOL supportLiftToWake;
@property (readonly, nonatomic) BOOL supportTapToWake;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic, getter=isBacklightLoggingEnabled) BOOL backlightLoggingEnabled;

- (void)_bindAndRegisterDefaults;
- (BOOL)disableAutoDim;
- (BOOL)disableAutoDimExists;

@end
