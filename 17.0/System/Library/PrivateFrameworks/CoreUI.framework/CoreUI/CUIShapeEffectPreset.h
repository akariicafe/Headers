@interface CUIShapeEffectPreset : NSObject {
    struct { unsigned int effectType; unsigned int effectParameter; union { double floatValue; unsigned long long intValue; struct _rgbcolor { unsigned char r; unsigned char g; unsigned char b; } colorValue; short angleValue; unsigned int enumValue; } effectValue; } _parameterList[125];
    unsigned int _effectIndex[26];
    double _scaleFactor;
}

@property float minimumShadowSpread;

+ (id)caFilterFromCUIEffectBlendMode:(unsigned int)a0;
+ (int)cgBlendModeFromCUIEffectBlendMode:(unsigned int)a0;
+ (void)configureVibrantColorMatrixFilter:(id)a0 withOptions:(struct _CUIVibrantColorMatrixOptions { double x0[4]; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })a1;
+ (unsigned int)cuiEffectBlendModeFromCGBlendMode:(int)a0;
+ (struct _CUIVibrantColorMatrixOptions { double x0[4]; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })monochromeVibrantColorMatrixOptions;
+ (id)requiredEffectParametersForEffectType:(unsigned int)a0;
+ (struct _CUIVibrantColorMatrixOptions { double x0[4]; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })standardVibrantColorMatrixOptionsForColor:(struct CGColor { } *)a0;
+ (struct _CUIVibrantColorMatrixOptions { double x0[4]; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })vibrantColorMatrixOptionsWithColor:(struct CGColor { } *)a0 saturation:(double)a1 brightness:(double)a2;

- (id)init;
- (double)effectScale;
- (id)debugDescription;
- (id)CUIEffectDataRepresentation;
- (unsigned long long)_parameterCount;
- (void)_insertEffectTuple:(struct { unsigned int x0; unsigned int x1; union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; } x2; })a0 atEffectIndex:(unsigned long long)a1;
- (void)addBevelEmbossWithHighlightColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 shadowColorRed:(unsigned int)a4 green:(unsigned int)a5 blue:(unsigned int)a6 opacity:(double)a7 blur:(int)a8 soften:(int)a9 bevelStyle:(unsigned int)a10;
- (void)addColorFillWithRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blendMode:(unsigned int)a4 tintable:(BOOL)a5;
- (void)addColorValueRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 forParameter:(unsigned int)a3 withNewEffectType:(unsigned int)a4;
- (void)addDropShadowWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blur:(int)a4 spread:(int)a5 offset:(int)a6 angle:(int)a7;
- (void)addEffectsFromPreset:(id)a0;
- (void)addEnumValue:(unsigned int)a0 forParameter:(unsigned int)a1 withNewEffectType:(unsigned int)a2;
- (void)addExtraShadowWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blur:(int)a4 spread:(int)a5 offset:(int)a6 angle:(int)a7;
- (void)addFloatValue:(double)a0 forParameter:(unsigned int)a1 withNewEffectType:(unsigned int)a2;
- (void)addGradientFillWithTopColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 bottomColorRed:(unsigned int)a3 green:(unsigned int)a4 blue:(unsigned int)a5 opacity:(double)a6 blendMode:(unsigned int)a7;
- (void)addHueSaturationWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 angle:(int)a3 width:(int)a4 tintable:(BOOL)a5;
- (void)addInnerGlowWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blur:(int)a4 blendMode:(unsigned int)a5;
- (void)addInnerShadowWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blur:(int)a4 offset:(int)a5 angle:(int)a6 blendMode:(unsigned int)a7;
- (void)addIntValue:(unsigned long long)a0 forParameter:(unsigned int)a1 withNewEffectType:(unsigned int)a2;
- (void)addOuterGlowWithColorRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 opacity:(double)a3 blur:(int)a4 spread:(int)a5;
- (void)addOutputOpacityWithOpacity:(double)a0;
- (void)addShapeOpacityWithOpacity:(double)a0;
- (void)addValue:(union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; })a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2 atEffectIndex:(unsigned long long)a3;
- (void)addValue:(union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; })a0 forParameter:(unsigned int)a1 withNewEffectType:(unsigned int)a2;
- (void)appendAngleValue:(long long)a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2;
- (void)appendColorValueRed:(unsigned int)a0 green:(unsigned int)a1 blue:(unsigned int)a2 forParameter:(unsigned int)a3 withEffectType:(unsigned int)a4;
- (void)appendEnumValue:(unsigned int)a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2;
- (void)appendFloatValue:(double)a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2;
- (void)appendIntValue:(unsigned long long)a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2;
- (void)appendValue:(union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; })a0 forParameter:(unsigned int)a1 withEffectType:(unsigned int)a2;
- (unsigned long long)effectCount;
- (unsigned int)effectTypeAtIndex:(unsigned long long)a0;
- (void)getEffectTuples:(struct **)a0 count:(unsigned long long *)a1 atEffectIndex:(unsigned long long)a2;
- (id)initWithConstantPreset:(const struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct { unsigned int x0; unsigned int x1; union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; } x2; } x5[125]; } *)a0;
- (id)initWithEffectScale:(double)a0;
- (id)layerEffectsRepresentation;
- (union { double x0; unsigned long long x1; struct _rgbcolor { unsigned char x0; unsigned char x1; unsigned char x2; } x2; short x3; unsigned int x4; })valueForParameter:(unsigned int)a0 inEffectAtIndex:(unsigned long long)a1;

@end
