@class SBFFluidBehaviorSettings;

@interface SBHPeopleWidgetPersonDetailInteractionSettings : PTSettings

@property (nonatomic) BOOL usesCardStyle;
@property (nonatomic) double cardWidth;
@property (nonatomic) double cardHeightPortrait;
@property (nonatomic) double cardHeightLandscape;
@property (nonatomic) double cardCornerRadius;
@property (nonatomic) double cardStyleHomeScreenScale;
@property (nonatomic) double cardStyleHomeScreenAlpha;
@property (nonatomic) double cardStyleDarkeningTintAlpha;
@property (nonatomic) double fullScreenHomeScreenScale;
@property (nonatomic) double fullScreenHomeScreenAlpha;
@property (nonatomic) double fullScreenDarkeningTintAlpha;
@property (retain, nonatomic) SBFFluidBehaviorSettings *zoomAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *fadeOutAnimationSettings;
@property (nonatomic) double percentMargin;
@property (nonatomic) double fractionBetweenSourceAndContainerX;
@property (nonatomic) double fractionBetweenSourceAndContainerY;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
