@class _UIBarBackgroundAppearanceData;

@interface _UIBarBackgroundLayoutModern : _UIBarBackgroundLayout {
    BOOL _backgroundsAreSame;
}

@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData1;
@property (retain, nonatomic) _UIBarBackgroundAppearanceData *backgroundData2;

- (id)bg2ShadowTint;
- (long long)bg2ImageMode;
- (id)bg2Color;
- (id)bg1Image;
- (BOOL)shouldUseExplicitGeometry;
- (double)bg1Alpha;
- (double)bg1ShadowAlpha;
- (id)bg2ShadowColor;
- (id)bg1ShadowTint;
- (id)bg1ShadowImage;
- (double)bg2Alpha;
- (id)bg2Image;
- (id)bg1ShadowEffect;
- (void)describeInto:(id)a0;
- (id)bg2ShadowImage;
- (id)bg1ShadowColor;
- (BOOL)bg1HasShadow;
- (BOOL)bg2HasShadow;
- (double)bg2ShadowAlpha;
- (BOOL)bg2Enabled;
- (id)bg2ShadowEffect;
- (long long)bg1ImageMode;
- (id)bg1Color;
- (id)bg2Effects;
- (id)bg1Effects;
- (id)initWithLayout:(id)a0;
- (void).cxx_destruct;

@end
