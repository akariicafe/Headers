@class NCSpringAnimationSettings;

@interface NCUNUIKitPrototypeSettings : PTSettings

@property (retain, nonatomic) NCSpringAnimationSettings *briefIconOpacitySettings;
@property (nonatomic) double briefIconPositionMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *briefIconPositionSettings;
@property (nonatomic) double briefIconScaleMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *briefIconScaleSettings;
@property (nonatomic) double briefGrabberMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *briefGrabberSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *briefTextOpacitySettings;
@property (nonatomic) double briefTextPositionMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *briefTextPositionSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *briefBackgroundSettings;
@property (nonatomic) double detailStageTransitionDelay;
@property (nonatomic) long long detailStageTransitionMaxAttempts;
@property (retain, nonatomic) NCSpringAnimationSettings *detailOutgoingTextPositionSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *detailOutgoingTextOpacitySettings;
@property (retain, nonatomic) NCSpringAnimationSettings *detailIconScaleSettings;
@property (nonatomic) double detailIconPositionMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *detailIconPositionSettings;
@property (nonatomic) double detailTextMilestone;
@property (nonatomic) double detailSecondaryTextMilestone;
@property (retain, nonatomic) NCSpringAnimationSettings *detailTextPositionSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *detailTextOpacitySettings;
@property (retain, nonatomic) NCSpringAnimationSettings *detailBackgroundSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *dismissIconOpacitySettings;
@property (retain, nonatomic) NCSpringAnimationSettings *dismissTextOpacitySettings;
@property (retain, nonatomic) NCSpringAnimationSettings *dismissTextPositionSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *dismissBackgroundSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *interactiveDismissalTrackingSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *interactiveDismissalAutomaticSettings;
@property (retain, nonatomic) NCSpringAnimationSettings *interactiveDismissalBackgoundSettings;
@property (nonatomic) double interactiveDismissalThreshold;
@property (nonatomic) double interactiveDismissalRubberbandingInset;
@property (nonatomic) double interactiveDismissalRubberbandingRange;
@property (nonatomic) double interactiveDismissalMinBackgroundProgress;
@property (nonatomic) double interactiveDismissalMinContentScale;
@property (nonatomic) double interactiveDismissalMinContentAlpha;
@property (nonatomic) double interactiveDismissalFinalContentScale;
@property (nonatomic, getter=isContentHitRectVisible) BOOL contentHitRectVisible;
@property (nonatomic) double contentHitRectLeadingMargin;
@property (nonatomic) double contentHitRectTrailingMargin;
@property (nonatomic) double contentHitRectTopMargin;
@property (nonatomic) double contentHitRectBottomMargin;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
