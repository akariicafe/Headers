@class NSString, TSDFrameSpec;

@interface TSDFrame : TSDStroke {
    NSString *_frameName;
    double _leftWidth;
    double _rightWidth;
    double _topHeight;
    double _bottomHeight;
    struct CGSize { double width; double height; } _adornmentSize;
}

@property (readonly, nonatomic) NSString *archivableFrameName;
@property (readonly, nonatomic) NSString *frameName;
@property (readonly, nonatomic) double assetScale;
@property (readonly, nonatomic) TSDFrameSpec *frameSpec;
@property (readonly, nonatomic) BOOL hasMask;
@property (readonly, nonatomic) double minimumAssetScale;

+ (Class)mutableClass;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldRender;
- (BOOL)supportsColor;
- (BOOL)isNearlyWhite;
- (BOOL)canApplyDirectlyToRepRenderable;
- (struct _TSDStrokeOutsets { double x0; double x1; double x2; double x3; })outsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsPattern;
- (BOOL)isFrame;
- (BOOL)canApplyToShapeRenderable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coverageRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (BOOL)drawsInOneStep;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })i_adornmentRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)i_bottomHeight;
- (double)i_leftWidth;
- (double)i_rightWidth;
- (double)i_topHeight;
- (BOOL)i_willRenderForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithFrameName:(id)a0;
- (id)initWithFrameSpec:(id)a0;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1;
- (id)initWithFrameSpec:(id)a0 assetScale:(double)a1 archivableFrameName:(id)a2;
- (BOOL)isNullStroke;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_coverageRectWithAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })p_minimumRenderedSize;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(BOOL)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(BOOL)a3;
- (BOOL)prefersToApplyToShapeRenderableDuringManipulation;
- (BOOL)shouldRenderForSizeIncludingCoverage:(struct CGSize { double x0; double x1; })a0;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)supportsLineOptions;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 whenStrokingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)equivalentStrokeWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_uncoveredRectWithoutAdornment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
