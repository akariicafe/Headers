@class SBFFluidBehaviorSettings, SBPIPEdgeResizeSettings;

@interface SBPIPInteractionSettings : PTSettings

@property (retain, nonatomic) SBPIPEdgeResizeSettings *edgeResizeSettings;
@property (nonatomic) BOOL shouldStashOnTransitionToSwitcher;
@property (nonatomic) BOOL shouldUnstashOnTransitionFromSwitcher;
@property (nonatomic) BOOL shouldStashOnTransitionToHomescreen;
@property (nonatomic) BOOL shouldUnstashOnTransitionFromHomescreen;
@property (nonatomic) BOOL shouldStashOnAppToAppTransitions;
@property (nonatomic) BOOL usesKeyboards;
@property (nonatomic) BOOL keyboardDismissesOnTransitionToHomescreen;
@property (nonatomic) BOOL keyboardDismissesOnOutsideUserInteractionOnHomescreen;
@property (nonatomic) BOOL keyboardDismissesOnOutsideUserInteractionOutsideHomescreen;
@property (nonatomic) BOOL alwaysStartAtSmallestSize;
@property (nonatomic) BOOL panGestureEnabled;
@property (nonatomic) BOOL edgeResizeGestureEnabled;
@property (nonatomic) BOOL pinchGestureEnabled;
@property (nonatomic) BOOL rotationGestureEnabled;
@property (nonatomic) BOOL stashingEnabled;
@property (nonatomic) unsigned long long freePositioning;
@property (nonatomic) double defaultContentSizeResetTimeout;
@property (nonatomic) double inFlightHitTestPadding;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (nonatomic) double positionDecelerationRate;
@property (nonatomic) double positionExtenderMaximumDistance;
@property (nonatomic) double positionVelocityYWeightOverVelocityX;
@property (nonatomic) double rotationExtenderMaximumDistance;
@property (nonatomic) double rotationPreRecognitionWeight;
@property (nonatomic) double rotationRubberBandCoefficient;
@property (nonatomic) double scaleDecelerationRate;
@property (nonatomic) double scaleExtenderMaximumDistance;
@property (nonatomic) double scaleLowPassFilterPreviousWeight;
@property (nonatomic) double stashProgressTabAppearanceThresholdX;
@property (retain, nonatomic) SBFFluidBehaviorSettings *interactiveFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *stashTabFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *rotationFluidBehavior;
@property (retain, nonatomic) SBFFluidBehaviorSettings *regionUpdateFluidBehavior;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
