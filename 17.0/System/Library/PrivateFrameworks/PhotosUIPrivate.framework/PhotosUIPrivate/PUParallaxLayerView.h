@class PFParallaxLayer, PUParallaxLayerLayoutInfo;

@interface PUParallaxLayerView : UIView

@property (readonly, nonatomic) PFParallaxLayer *parallaxLayer;
@property (readonly, nonatomic) PUParallaxLayerLayoutInfo *currentLayoutInfo;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutWithInfo:(id)a0;

@end
