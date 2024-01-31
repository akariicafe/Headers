@class SBFFluidBehaviorSettings;

@interface SBElasticHUDSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *defaultTransitionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *defaultPositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *baseToInitialTransitionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *baseToInitialPositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *deflationTransitionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *deflatingToBaseTransitionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *deflatingToBasePositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *generalToBaseTransitionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *compactToBaseTransitionSettings;
@property (nonatomic) double baseScaleFactor;
@property (nonatomic) double deflatedScaleFactor;
@property (nonatomic) double compactStretchAmount;
@property (nonatomic) double interactingStretchAmount;
@property (nonatomic) double labelPadding;
@property (nonatomic) double dismissalInterval;
@property (nonatomic) double deflationDismissalInterval;
@property (nonatomic) double postTransitionDismissalInterval;
@property (nonatomic) double dimmingAlpha;
@property (nonatomic) double legibilityStrength;
@property (nonatomic) double onscreenTopMargin;
@property (nonatomic) double offscreenTopMargin;
@property (nonatomic) double landscapeCornerRadiusFraction;
@property (nonatomic) double volumeButtonsCenterY;
@property (nonatomic) double onscreenLeadingMargin;
@property (nonatomic) double offscreenLeadingMargin;
@property (nonatomic) double portraitCornerRadiusFraction;
@property (nonatomic) double landscapeState1Width;
@property (nonatomic) double landscapeState2Width;
@property (nonatomic) double landscapeState3Width;
@property (nonatomic) double landscapeState1Height;
@property (nonatomic) double landscapeState2Height;
@property (nonatomic) double landscapeState3Height;
@property (nonatomic) double portraitState1Width;
@property (nonatomic) double portraitState2Width;
@property (nonatomic) double portraitState3Width;
@property (nonatomic) double portraitState1Height;
@property (nonatomic) double portraitState2Height;
@property (nonatomic) double portraitState3Height;
@property (nonatomic) BOOL showDebugUI;
@property (nonatomic) BOOL autoDismiss;
@property (nonatomic) float volumeStepDelta;
@property (nonatomic) BOOL displayBrightnessKeyCommandsEnabled;
@property (nonatomic) BOOL keyboardBrightnessKeyCommandsEnabled;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
