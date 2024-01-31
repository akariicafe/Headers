@class UIColor, NSArray, UIVibrancyEffect, UIImage;

@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout {
    long long _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    BOOL _hasShadow;
}

@property (readonly, nonatomic) UIImage *shadowImage;
@property (nonatomic) BOOL disableTinting;
@property (nonatomic) double topInset;
@property (readonly, nonatomic) BOOL hasBackgroundEffect;

- (void)configureWithoutShadow;
- (id)bg1Image;
- (BOOL)shouldUseExplicitGeometry;
- (double)bg1Alpha;
- (void)setUseExplicitGeometry:(BOOL)a0;
- (double)bgInset;
- (double)bg1ShadowAlpha;
- (id)bg1ShadowImage;
- (id)bg1ShadowEffect;
- (void)describeInto:(id)a0;
- (id)bg1ShadowColor;
- (BOOL)bg1HasShadow;
- (double)bg1ImageAlpha;
- (id)bg1Color;
- (id)bg1Effects;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 backgroundTintColor:(id)a2;
- (void)configureImage:(id)a0 forceTranslucent:(BOOL)a1;
- (void)configureBackgroundColor:(id)a0 barStyle:(long long)a1 translucent:(BOOL)a2;
- (void)configureShadowImage:(id)a0;
- (id)initWithLayout:(id)a0;
- (void)configureAsTransparent;
- (void)configureImage:(id)a0 forceOpaque:(BOOL)a1 barStyle:(long long)a2;
- (void)configureWithEffects:(id)a0;
- (void).cxx_destruct;
- (void)configureEffectForStyle:(long long)a0 backgroundTintColor:(id)a1 forceOpaque:(BOOL)a2;
- (id)_colorForStyle:(long long)a0;
- (id)_blurWithStyle:(long long)a0 tint:(id)a1;
- (void)configureShadowForBarStyle:(long long)a0;

@end
