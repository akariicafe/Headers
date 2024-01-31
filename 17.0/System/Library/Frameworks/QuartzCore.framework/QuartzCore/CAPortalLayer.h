@class CALayer;

@interface CAPortalLayer : CALayer

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property BOOL hidesSourceLayer;
@property BOOL matchesOpacity;
@property BOOL matchesPosition;
@property BOOL matchesTransform;
@property BOOL allowsBackdropGroups;
@property BOOL crossDisplay;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)layerDidBecomeVisible:(BOOL)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;

@end
