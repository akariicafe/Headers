@protocol CLKMonochromeFilterProvider;

@interface NTKRingView : CLKUIColoringView

@property (readonly, nonatomic) double ringWidth;
@property (readonly, nonatomic) double overlapWidth;
@property (readonly, nonatomic) double radius;
@property (nonatomic) double fillFraction;
@property (nonatomic) BOOL hidesOverlapShadow;
@property (nonatomic) BOOL shouldUseMonochromeAccentColor;
@property (weak, nonatomic) id<CLKMonochromeFilterProvider> filterProvider;

- (long long)filterStyle;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)a0 fillFraction:(double)a1 alpha:(double)a2 hidesOverlapShadow:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(double)a1 ringWidth:(double)a2 overlapWidth:(double)a3;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
