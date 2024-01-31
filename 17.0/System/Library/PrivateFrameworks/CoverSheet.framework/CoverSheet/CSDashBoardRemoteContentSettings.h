@interface CSDashBoardRemoteContentSettings : PTSettings

@property (nonatomic) BOOL overrideContentPreferences;
@property (nonatomic) long long dateTimeStyleOverride;
@property (nonatomic) long long backgroundStyleOverride;
@property (nonatomic) long long homeGestureModeOverride;
@property (nonatomic) BOOL dismissesOnTapOverride;
@property (nonatomic) BOOL prefersInlinePresentationOverride;
@property (nonatomic) BOOL forceLuminanceReduction;
@property (nonatomic) BOOL animatesDimming;
@property (nonatomic) double dimDuration;
@property (nonatomic) BOOL animatesUndimming;
@property (nonatomic) double undimDuration;
@property (nonatomic) BOOL undimsOnTap;
@property (nonatomic) BOOL autoExtendsIdleTimer;
@property (nonatomic) double bottomLuminanceValue;
@property (nonatomic) double lowerLuminanceValue;
@property (nonatomic) double upperLuminanceValue;
@property (nonatomic) double topLuminanceValue;
@property (nonatomic) double lighterBottomLuminanceValue;
@property (nonatomic) double lighterLowerLuminanceValue;
@property (nonatomic) double lighterUpperLuminanceValue;
@property (nonatomic) double lighterTopLuminanceValue;
@property (nonatomic) BOOL usesLegacyDismissalLogic;
@property (nonatomic) double legacyThreshold;
@property (nonatomic) double directThreshold;
@property (nonatomic) double directFlingDampeningFactor;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
