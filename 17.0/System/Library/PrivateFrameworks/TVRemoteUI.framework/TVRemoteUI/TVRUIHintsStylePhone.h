@class NSString;

@interface TVRUIHintsStylePhone : TVRUIHintsStyle <TVRUIHintsStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)animationDuration;
- (id)backgroundColor;
- (long long)userInterfaceStyle;
- (id)primaryTintColor;
- (id)backgroundFilters;
- (double)imageMargin;
- (id)siriImage;
- (double)activationAnimationDismissalDelay;
- (double)activationAnimationDuration;
- (double)animationPresentationDelay;
- (double)buttonOutlineWidth;
- (double)maximumSymbolPointSize;
- (double)preferredTipWidth;
- (BOOL)shouldShowSiriHint;
- (BOOL)shouldShowVolumeHint;
- (double)siriHintContainerWidth;
- (id)siriHintTipContext;
- (double)volumeHintContainerWidth;
- (id)volumeImage;

@end
