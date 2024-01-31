@class UIView, NSString, NSArray, ABDeviceSceneDriver, ABHitTestPassthroughView, ABCarouselView, ABTransformView, ABShadowView, ABDeviceButtonHighlightView, ABDelayedBlockExecutor, ABDeviceSceneViewController;
@protocol ABActionSelectorContent, ABActionSelectorViewControllerDelegate;

@interface ABActionSelectorViewController : UIViewController <ABCarouselViewDelegate, ABDeviceSceneViewControllerDelegate> {
    NSArray *_actionItems;
    ABDeviceSceneDriver *_sceneDriver;
    long long _mode;
    ABDelayedBlockExecutor *_transitionScheduler;
    UIView<ABActionSelectorContent> *_contentView;
    ABDeviceSceneViewController *_sceneViewController;
    ABHitTestPassthroughView *_overlayContainerView;
    ABTransformView *_overlayView;
    ABCarouselView *_carouselView;
    ABShadowView *_shadowView;
    ABDeviceButtonHighlightView *_buttonHighlightView;
    BOOL _hasPresentedViewController;
}

@property (weak, nonatomic) id<ABActionSelectorViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)updateWithMode:(long long)a0;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1;
- (void)carouselView:(id)a0 didSelectItemAtIndex:(long long)a1;
- (id)initWithActionItems:(id)a0 selectedIndex:(long long)a1 mode:(long long)a2 contentView:(id)a3;
- (void)pauseSceneUpdates;
- (void)resumeSceneUpdates;
- (void)scheduleUpdateWithMode:(long long)a0;
- (void)updateWithActionItems:(id)a0;
- (void)updateWithZoomedOutStateParamsOverride:(id)a0 zoomedInStateParamsOverride:(id)a1;
- (void)_clipDuringNavigationTransiton;
- (void)_doScheduleUpdateWithMode:(long long)a0 afterDelay:(double)a1;
- (void)_occlusionDidChange;
- (void)_renderWithTargetTimestamp:(double)a0 duration:(double)a1;
- (void)_revealSceneIfNeeded;
- (void)_sceneStateDidChange:(long long)a0 previosState:(long long)a1;
- (void)_scheduleZoomOutIfNeeded;
- (void)_updateCurrentMode;
- (void)_updateHighlightColorAnimated:(BOOL)a0;
- (void)carouselView:(id)a0 didDragToOffset:(double)a1 initialOffset:(double)a2;
- (void)carouselViewWillEndDragging:(id)a0;
- (void)carouselViewWillStartDragging:(id)a0;
- (void)deviceSceneViewControllerWillRenderScene:(id)a0;
- (void)scheduleUpdateWithMode:(long long)a0 afterDelay:(double)a1;

@end
