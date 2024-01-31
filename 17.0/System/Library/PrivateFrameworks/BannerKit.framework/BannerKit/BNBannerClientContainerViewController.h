@class UIScene, NSString, _BNPanGestureServiceProxy, BNCoordinatedSceneUpdateAction;
@protocol BNHostedContentProviding, BSInvalidatable, BNPresentableContext, BNBannerClientContainerDelegate, BNPresentable;

@interface BNBannerClientContainerViewController : UIViewController <BNBannerClientContainer, BNPresentableContext, BNBannerClientContainerSceneUpdating> {
    id<BSInvalidatable> _deferringRule;
    _BNPanGestureServiceProxy *_panGestureProxy;
    BNCoordinatedSceneUpdateAction *_sceneUpdateAction;
}

@property (readonly, weak, nonatomic) UIScene *scene;
@property (readonly, nonatomic) id<BNPresentable, BNHostedContentProviding> presentable;
@property (readonly, nonatomic) id<BNPresentableContext> presentableContext;
@property (weak, nonatomic) id<BNBannerClientContainerDelegate> delegate;
@property (readonly, nonatomic, getter=isDeferringFocus) BOOL deferringFocus;
@property (readonly, nonatomic, getter=isAccessibilityIgnoringSmartInvertColors) BOOL accessibilityIgnoringSmartInvertColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (id)keyWindowForScreen:(id)a0;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_respondToActions:(id)a0 forFBSScene:(id)a1 inUIScene:(id)a2 fromTransitionContext:(id)a3;
- (void)bs_traitCollectionDidChange:(id)a0 forManagedTraitEnvironment:(id)a1;
- (id)initWithScene:(id)a0 presentable:(id)a1 context:(id)a2;
- (void)_acquireDeferringRuleIfNecessary;
- (void)_handlePanGestureProxyAction:(id)a0;
- (void)_handleRejectionAction:(id)a0;
- (void)_invalidateDeferringRule;
- (void)_setPreferredContentSize:(struct CGSize { double x0; double x1; })a0 shouldFence:(BOOL)a1;
- (void)_setPresentableBannerAppearState:(int)a0 reason:(id)a1;
- (void)_setPresentableUserInteractionInProgress:(BOOL)a0;
- (void)_setPresentableViewControllerAppearState:(int)a0;
- (void)performCoordinatedUpdate:(id /* block */)a0 updateResponseHandler:(id /* block */)a1;
- (void)setHostNeedsUpdate;

@end
