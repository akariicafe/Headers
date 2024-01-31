@class UISceneAsynchronousRenderingOptions;

@interface _UIContextLayerHostView : _UISceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;

+ (Class)layerClass;

- (id)layer;
- (void)willMoveToWindow:(id)a0;
- (void)setResizesHostedContext:(BOOL)a0;
- (id)initWithSceneLayer:(id)a0;
- (void)setInheritsSecurity:(BOOL)a0;
- (void)setStopsHitTestTransformAccumulation:(BOOL)a0;
- (void)_prepareForWindowDealloc;

@end
