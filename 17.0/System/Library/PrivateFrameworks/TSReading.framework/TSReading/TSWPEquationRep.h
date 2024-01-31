@class CALayer, NSString;

@interface TSWPEquationRep : TSDRep <TSDTilingLayerDelegate>

@property (retain, nonatomic) CALayer *equationLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsDisplay;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeRemoved;
- (void)didUpdateLayer:(id)a0;
- (BOOL)directlyManagesLayerContent;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (void)screenScaleDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleBoundsForTilingLayer:(id)a0;

@end
