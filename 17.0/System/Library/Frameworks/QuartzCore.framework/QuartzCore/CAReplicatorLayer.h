@interface CAReplicatorLayer : CALayer

@property long long instanceCount;
@property BOOL preservesDepth;
@property double instanceDelay;
@property struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } instanceTransform;
@property struct CGColor { } *instanceColor;
@property float instanceRedOffset;
@property float instanceGreenOffset;
@property float instanceBlueOffset;
@property float instanceAlphaOffset;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)_renderSublayersInContext:(struct CGContext { } *)a0;
- (id)init;
- (id)implicitAnimationForKeyPath:(id)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
