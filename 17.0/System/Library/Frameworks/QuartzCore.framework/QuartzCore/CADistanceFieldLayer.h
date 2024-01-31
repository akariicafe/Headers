@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString *renderMode;
@property BOOL invertsShape;
@property struct CGColor { } *foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)_colorSpaceDidChange;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)didChangeValueForKey:(id)a0;
- (unsigned int)_renderImageCopyFlags;

@end
