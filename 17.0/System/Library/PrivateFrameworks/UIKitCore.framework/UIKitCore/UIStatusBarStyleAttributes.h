@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled;

- (id)backgroundColorWithTintColor:(id)a0;
- (id)init;
- (BOOL)isLockScreen;
- (long long)idiom;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (double)foregroundAlpha;
- (double)heightForMetrics:(long long)a0;
- (id)backgroundImageName;
- (BOOL)isTransparent;
- (BOOL)isTranslucent;
- (long long)legibilityStyle;
- (BOOL)shouldProduceReturnEvent;
- (id)initWithRequest:(id)a0;
- (BOOL)isDoubleHeight;
- (double)heightForOrientation:(long long)a0;
- (long long)tapButtonType;
- (void).cxx_destruct;
- (void)setForegroundAlpha:(double)a0;
- (long long)style;
- (BOOL)shouldUseVisualAltitude;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (BOOL)supportsRasterization;
- (BOOL)usesVerticalLayout;

@end
