@class NSLock, UIImage, UIColor;

@interface HKGradientFillStyle : HKFillStyle

@property (readonly, nonatomic) NSLock *gradientFillStyleLock;
@property (readonly, nonatomic) UIImage *cachedImageStorage;
@property (readonly, nonatomic) UIColor *firstColor;
@property (readonly, nonatomic) UIColor *secondColor;
@property (readonly, nonatomic) double fillPercentage;
@property (readonly, nonatomic) long long fillDirection;
@property (readonly, nonatomic) double gradientSize;

- (void)clearCache;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFirstColor:(id)a0 secondColor:(id)a1;
- (BOOL)_needsRenderForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_renderCacheIfNecessaryForHeight:(double)a0;
- (void)_renderCacheIfNecessaryForWidth:(double)a0;
- (void)_renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)fillImageWithHeight:(double)a0;
- (id)fillImageWithWidth:(double)a0;
- (id)initWithFirstColor:(id)a0 secondColor:(id)a1 fillPercentage:(double)a2 fillDirection:(long long)a3 gradientSize:(double)a4;
- (void)renderPath:(struct CGPath { } *)a0 context:(struct CGContext { } *)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;

@end
