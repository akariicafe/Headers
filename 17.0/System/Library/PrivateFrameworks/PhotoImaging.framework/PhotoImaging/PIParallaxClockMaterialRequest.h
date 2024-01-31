@class PIParallaxStyle, PFParallaxLayerStack;

@interface PIParallaxClockMaterialRequest : NURenderRequest

@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (retain, nonatomic) PIParallaxStyle *style;

- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayerStack:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
