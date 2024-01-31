@class NSString;

@interface CAGainMapLayer : CALayer

@property (copy) NSString *renderMode;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
