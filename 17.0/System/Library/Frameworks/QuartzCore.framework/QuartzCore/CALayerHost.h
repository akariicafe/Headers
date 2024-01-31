@class NSArray;

@interface CALayerHost : CALayer

@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL rendersAsynchronously;
@property BOOL asynchronousOpaque;
@property (copy) NSArray *asynchronousRenderTimes;
@property double asynchronousRenderPeriod;
@property float asynchronousRenderMaxAPL;
@property float asynchronousRenderMaxAPLStrength;
@property BOOL resizesHostedContext;
@property BOOL preservesFlip;
@property BOOL stopsHitTestTransformAccumulation;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)allLayerHosts;
+ (BOOL)_hasRenderLayerSubclass;

- (id)init;
- (void)dealloc;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
