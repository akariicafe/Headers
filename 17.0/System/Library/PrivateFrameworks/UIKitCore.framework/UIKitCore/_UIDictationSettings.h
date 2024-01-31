@class NSString;

@interface _UIDictationSettings : PTSettings

@property (nonatomic) double minimumRadius;
@property (nonatomic) double cursorGlowBlurRadius;
@property (nonatomic) double trailingGlowBlurRadius;
@property (retain, nonatomic) NSString *lightModeCompositingFiler;
@property (retain, nonatomic) NSString *darkModeCompositingFiler;
@property (nonatomic) double trailingGlowDuration;
@property (nonatomic) double tailHeight;
@property (nonatomic) double headHeight;
@property (nonatomic) double trailingGlowAlpha;
@property (nonatomic) double cursorGlowAlphaMin;
@property (nonatomic) double cursorGlowAlphaMax;
@property (nonatomic) double revealFadeTime;
@property (nonatomic) double typewriterEffectFramesPerSecond;
@property (nonatomic) double typewriterEffectStreamingCharacterInsertionRate;
@property (nonatomic) double typewriterEffectMinDurationBetweenHypotheses;
@property (nonatomic) BOOL glowEffectEnabled;
@property (nonatomic) BOOL pulseAnimationEnabled;
@property (nonatomic) BOOL trailAnimationEnabled;
@property (nonatomic) double pulseFrameRate;
@property (nonatomic) double trailFrameRate;

+ (id)settingsControllerModule;
+ (id)compositingFilters;
+ (id)frameRates;
+ (id)frameRatesTitles;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
