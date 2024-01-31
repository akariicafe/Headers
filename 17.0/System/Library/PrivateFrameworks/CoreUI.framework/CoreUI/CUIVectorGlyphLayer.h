@class NSString, NSArray;
@protocol CUIVectorGlyhLayerDelegate;

@interface CUIVectorGlyphLayer : NSObject {
    NSArray *_sublayers;
    struct CGPath { } *_clipPathFromSublayers;
}

@property (weak, nonatomic) id<CUIVectorGlyhLayerDelegate> delegate;
@property (readonly, nonatomic) BOOL needsWideGamut;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long index;
@property (readonly, nonatomic) unsigned long long motionGroup;
@property (readonly, nonatomic) BOOL alwaysPulses;
@property (readonly, nonatomic) double opacity;
@property (readonly, nonatomic) double valueThreshold;
@property (readonly, nonatomic) BOOL isEraserLayer;
@property (readonly, nonatomic) double strokeWidth;
@property (readonly, retain, nonatomic) id referenceShape;
@property (readonly, retain, nonatomic) NSArray *sublayers;

+ (id)_layerHierarchyStyleNames;
+ (id)_colorNameForRenderingStyle:(id)a0;
+ (id)_createShapeLayerWithLayerTreeNode:(struct CGSVGNode { } *)a0 layerName:(id)a1 index:(unsigned long long)a2 shapes:(id)a3 delegate:(id)a4;
+ (struct CGColor { } *)_fillColorFromStyle:(struct CGSVGAttributeMap { } *)a0;
+ (unsigned int)_subpathIndicesAtom;
+ (id)createLayerGroupWithLayerNames:(id)a0 delegate:(id)a1;
+ (id)createLayerGroupWithLayerTree:(struct CGSVGNode { } *)a0 layerNames:(id)a1 shapes:(id)a2 delegate:(id)a3;

- (struct CGPath { } *)shape;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)_anyLayerAlwaysPulses;
- (struct CGColor { } *)_colorForVariableThreshold:(double)a0 variableMinValue:(double)a1 variableMaxValue:(double)a2 onFillColor:(struct CGColor { } *)a3 offFillColor:(struct CGColor { } *)a4;
- (id)_initWithName:(id)a0 index:(unsigned long long)a1 shape:(struct CGPath { } *)a2 style:(struct CGSVGAttributeMap { } *)a3 delegate:(id)a4;
- (id)_initWithName:(id)a0 index:(unsigned long long)a1 sublayers:(id)a2 style:(struct CGSVGAttributeMap { } *)a3 delegate:(id)a4;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { } *)a0;
- (void)_setAllLayersAlwaysPulse:(BOOL)a0;
- (void)_setAlwaysPulses:(BOOL)a0;
- (BOOL)anyLayerNeedsWideGamutColor;
- (struct CGPath { } *)copyClipShape;
- (struct CGImage { } *)createImageUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 variableMinValue:(double)a2 variableMaxValue:(double)a3 onFillColor:(struct CGColor { } *)a4 offFillColor:(struct CGColor { } *)a5;
- (struct CGImage { } *)createSublayerMaskUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 maskColor:(struct CGColor { } *)a2;
- (id)debugDescriptionWithIndentLevel:(unsigned long long)a0;
- (void)drawInContext:(struct CGContext { } *)a0 scaleFactor:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 variableMinValue:(double)a3 variableMaxValue:(double)a4 onFillColor:(struct CGColor { } *)a5 offFillColor:(struct CGColor { } *)a6;
- (struct CGPath { } *)shapeAtScale:(double)a0;

@end
