@class NSSet, NSArray, TSUColor, NSMutableArray;

@interface TSDGradient : TSDFill <TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying> {
    NSMutableArray *_stops;
    _Atomic struct CGGradient *_gradient;
    unsigned long long _blendingColorSpace;
}

@property (class, readonly, nonatomic) NSSet *presetKinds;

@property (nonatomic, setter=i_setAdvancedGradientFlag:) BOOL i_advancedGradientFlag;
@property (readonly, retain, nonatomic) NSArray *gradientStops;
@property (readonly, nonatomic) TSUColor *firstColor;
@property (readonly, nonatomic) TSUColor *lastColor;
@property (readonly, nonatomic) unsigned long long gradientType;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isAdvancedGradient;
@property (readonly, nonatomic) BOOL isAdvancedGradientIgnoringFlag;

+ (void)sortStopsArray:(id)a0;
+ (void)bootstrapPresetsOfKind:(id)a0 inTheme:(id)a1 alternate:(unsigned long long)a2;
+ (id)linearGradientWithGradientStops:(id)a0;
+ (id)linearGradientWithStartColor:(id)a0 endColor:(id)a1;
+ (id)radialGradientWithGradientStops:(id)a0;
+ (id)radialGradientWithStartColor:(id)a0 endColor:(id)a1;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)evenlyDistributedLinearGradientWithColors:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)referenceColor;
- (long long)fillType;
- (id)stopAtIndex:(unsigned long long)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })centeredRadialTransformInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (struct CGPoint { double x0; double x1; })endPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1;
- (id)initWithGradientStops:(id)a0 type:(unsigned long long)a1 opacity:(double)a2;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2;
- (BOOL)isEqualIgnoringTransform:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGContext { } *)p_beginBitmapWrapperContextInContext:(struct CGContext { } *)a0 returningIntegralBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)p_endBitmapWrapperContext:(struct CGContext { } *)a0 inContext:(struct CGContext { } *)a1 withIntegralBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_evenlyDistributeStops;
- (void)p_insertGradientStop:(id)a0;
- (id)p_insertStopAtFraction:(double)a0;
- (id)p_insertStopAtFraction:(double)a0 withColor:(id)a1;
- (void)p_moveStopAtIndex:(unsigned long long)a0 toFraction:(double)a1;
- (void)p_removeStop:(id)a0;
- (id)p_removeStopAtIndex:(unsigned long long)a0;
- (void)p_reverseStopOrder;
- (void)p_setColorOfStopAtIndex:(unsigned long long)a0 toColor:(id)a1;
- (void)p_setGradientStops:(id)a0;
- (void)p_setGradientType:(unsigned long long)a0;
- (void)p_setInflectionOfStopAtIndex:(unsigned long long)a0 toInflection:(double)a1;
- (void)p_swapStopAtIndex:(unsigned long long)a0 withStopAtIndex:(unsigned long long)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 atAngle:(double)a2;
- (id)presetKind;
- (struct CGPoint { double x0; double x1; })startPointForPath:(id)a0 andBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)stopAfterFraction:(double)a0;
- (id)stopBeforeFraction:(double)a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (struct CGGradient { } *)p_CGGradient;
- (unsigned long long)p_blendingColorSpace;
- (void)p_invalidateCGGradient;
- (BOOL)p_isAnyStopP3;
- (id)p_newColorAtFraction:(double)a0;
- (void)p_prepareForDrawingInContext:(struct CGContext { } *)a0;
- (void)p_setIsAdvancedGradient:(BOOL)a0;
- (void)p_setOpacity:(double)a0;
- (BOOL)p_stopsHaveAlpha;

@end
