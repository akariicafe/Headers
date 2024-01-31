@interface FigBaseCALayer : CALayer <FigPiPableLayer>

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)a0;

- (void)setNeedsDisplay;
- (id)init;
- (void)insertSublayer:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)a0;
- (id)initWithDeferredTransaction:(struct OpaqueFigDeferredTransaction { } *)a0;
- (void)insertSublayer:(id)a0 above:(id)a1;
- (void)insertSublayer:(id)a0 below:(id)a1;
- (id)actionForKey:(id)a0;
- (void)replaceSublayer:(id)a0 with:(id)a1;
- (void)setSublayers:(id)a0;
- (float)getDisplayScale;
- (id)getLayerDisplay;

@end
