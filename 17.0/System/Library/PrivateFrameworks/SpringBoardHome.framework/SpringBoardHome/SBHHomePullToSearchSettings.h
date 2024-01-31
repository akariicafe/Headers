@class SBFFluidBehaviorSettings;

@interface SBHHomePullToSearchSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *pullTransitionAnimationSettings;
@property (nonatomic) double pullTransitionDistance;
@property (nonatomic) double pullTransitionActivationThreshold;
@property (nonatomic) double pullTransitionRubberbandThreshold;
@property (nonatomic) double pullGestureBeganFromTopLeeway;
@property (nonatomic) double backgroundBlurInteractiveTransitionDistance;
@property (nonatomic) double backgroundBlurStartThreshold;
@property (nonatomic) double backgroundBlurEndThreshold;
@property (nonatomic) double backgroundUnblurStartThreshold;
@property (nonatomic) double backgroundUnblurEndThreshold;
@property (nonatomic) double searchContentFadeInteractiveTransitionDistance;
@property (nonatomic) double searchContentFadeInStartThreshold;
@property (nonatomic) double searchContentFadeInEndThreshold;
@property (nonatomic) double searchContentFadeOutStartThreshold;
@property (nonatomic) double searchContentFadeOutEndThreshold;
@property (nonatomic) double searchAffordanceContentFadeStartThreshold;
@property (nonatomic) double searchAffordanceContentFadeEndThreshold;
@property (nonatomic) double searchBarContentFadeStartThreshold;
@property (nonatomic) double searchBarContentFadeEndThreshold;
@property (nonatomic) BOOL scalesSearchAffordanceContentWhileFading;
@property (nonatomic) double searchAffordanceTransformStartThreshold;
@property (nonatomic) double searchAffordanceTransformEndThreshold;
@property (nonatomic) double searchAffordanceMaxScaleX;
@property (nonatomic) double searchAffordanceMaxScaleY;
@property (nonatomic) double searchAffordanceScaleRubberbandingRange;
@property (nonatomic) double searchAffordanceMaxOffset;
@property (nonatomic) double searchAffordanceOffsetRubberbandingRange;
@property (nonatomic) double searchAffordanceTransientFadeInThreshold;
@property (nonatomic) BOOL allowsKeyboardWhileInteractive;
@property (nonatomic) BOOL allowsKeyboardWhileInteractiveWithoutSearchAffordance;
@property (nonatomic) double interactiveKeyboardPresentationThreshold;
@property (nonatomic) double interactiveKeyboardPresentationOffset;
@property (nonatomic) BOOL keyboardFollowsSpotlightContent;
@property (nonatomic) BOOL appIconsFollowTranslation;
@property (nonatomic) BOOL allowsVelocityInjection;
@property (nonatomic) BOOL injectsVelocityOnlyForShortSwipes;
@property (nonatomic) double shortSwipeMaximumPercentageOfExpectedVelocity;
@property (nonatomic) double injectedPercentageOfGestureVelocity;
@property (nonatomic) double keyboardInjectedVelocityPercentage;
@property (nonatomic) BOOL injectsVelocityForNonInteractiveTransitions;
@property (nonatomic) double injectedVelocityForNonInteractiveTransitions;
@property (nonatomic) double keyboardInjectedVelocityPercentageForNonInteractiveTransitions;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
