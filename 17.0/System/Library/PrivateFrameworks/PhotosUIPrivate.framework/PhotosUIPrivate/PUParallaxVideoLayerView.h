@class AVPlayer, PUParallaxVideoLayerContentView, PUParallaxLayerLayoutInfo, PFParallaxVideoLayer;

@interface PUParallaxVideoLayerView : PUParallaxLayerView

@property (retain, nonatomic) PUParallaxLayerLayoutInfo *currentLayoutInfo;
@property (readonly, nonatomic) PUParallaxVideoLayerContentView *contentView;
@property (retain, nonatomic) PFParallaxVideoLayer *parallaxVideoLayer;
@property (readonly, nonatomic) AVPlayer *player;

- (void).cxx_destruct;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (void)layoutWithInfo:(id)a0;
- (void)_layoutWithCurrentLayoutInfo;
- (void)_updateParallaxVideoLayerProperties;
- (id)initWithParallaxVideoLayer:(id)a0;
- (id)parallaxLayer;

@end
