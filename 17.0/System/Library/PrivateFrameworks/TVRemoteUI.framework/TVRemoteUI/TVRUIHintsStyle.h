@interface TVRUIHintsStyle : NSObject

@property (nonatomic) BOOL hasHomeButton;

+ (id)styleProviderForUserInterfaceIdiom:(long long)a0 hasHomeButton:(BOOL)a1;

- (double)animationDuration;
- (long long)userInterfaceStyle;
- (double)activationAnimationDismissalDelay;
- (double)activationAnimationDuration;
- (double)animationPresentationDelay;
- (id)initWithHomeButton:(BOOL)a0;
- (double)maximumSymbolPointSize;
- (double)preferredTipWidth;
- (BOOL)shouldShowSiriHint;
- (BOOL)shouldShowVolumeHint;
- (id)siriHintTipContext;

@end
