@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property struct CGPath { } *path;
@property struct CGColor { } *fillColor;
@property (copy) NSString *fillRule;
@property struct CGColor { } *strokeColor;
@property double strokeStart;
@property double strokeEnd;
@property double lineWidth;
@property double miterLimit;
@property (copy) NSString *lineCap;
@property (copy) NSString *lineJoin;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)_colorSpaceDidChange;
- (id)implicitAnimationForKeyPath:(id)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
