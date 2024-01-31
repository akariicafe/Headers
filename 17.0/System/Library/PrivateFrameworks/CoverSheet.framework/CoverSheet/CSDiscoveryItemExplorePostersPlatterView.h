@class CALayer, CAStateController;
@protocol CSDiscoveryItemExplorePostersPlatterViewDelegate;

@interface CSDiscoveryItemExplorePostersPlatterView : PLPlatterDiscoveryView

@property (retain, nonatomic) CAStateController *graphicStateController;
@property (retain, nonatomic) CALayer *rootAnimationLayer;
@property (nonatomic, getter=isAnimationPaused) BOOL animationPaused;
@property (weak, nonatomic) id<CSDiscoveryItemExplorePostersPlatterViewDelegate> delegate;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureGraphicViewIfNecessary;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)_pauseLayer:(id)a0;
- (void)_resumeLayer:(id)a0;
- (void)_reconfigureGraphicView;

@end
