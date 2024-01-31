@class BSAnimationSettings, NSString, NSUUID, FBScene, UIViewController;
@protocol UIScenePresenter, BNPanGestureProxy, UITraitChangeRegistration, BNPresentableContext, BNBannerSourceListenerPresentableDelegate, BNPresentable;

@interface BNBannerSourceListenerHostedPresentableViewController : BNBannerSourceListenerPresentableViewController <BNBannerSourceListenerHostedPresentable> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _bannerContentOutsets;
    id<UIScenePresenter> _scenePresenter;
    id<BNPanGestureProxy> _panGestureProxy;
    BSAnimationSettings *_bannerSizeTransitionAnimationSettings;
    id<UITraitChangeRegistration> _traitChangeRegistration;
    BOOL _isClippingEnabled;
}

@property (readonly, nonatomic, getter=isHostedContent) BOOL hostedContent;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) int bannerAppearState;
@property (weak, nonatomic) id<BNBannerSourceListenerPresentableDelegate> delegate;
@property (readonly, nonatomic, getter=isContentHosted) BOOL contentHosted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniquePresentableIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) BOOL providesHostedContent;

- (void)sceneDidInvalidate:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void)viewDidLoad;
- (void)invalidate;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (void)draggingDidBeginWithGestureProxy:(id)a0;
- (id)presentableDescription;
- (void)bannerSourceListenerPresentableViewControllerViewDidChangeSize:(id)a0;
- (void)_handleUserInterfaceStyleTraitChange:(id)a0;
- (void)_makeReadyIfPossibleWithScene:(id)a0;
- (void)_setReadyCompletion:(id /* block */)a0;
- (id /* block */)_tearDownSceneBlock:(id)a0;
- (void)_tearDownSceneIfNecessary;
- (void)_tearDownSceneInfrastructureIfNecessary;
- (void)_tearDownScenePresenterIfNecessary;
- (void)_updateBannerContentOutsetsWithScene:(id)a0;
- (void)_updateClippingWithScene:(id)a0;
- (void)_updatePreferredContentSizeWithScene:(id)a0 transitionContext:(id)a1;
- (id)bannerSizeTransitionAnimationSettings;
- (id)initWithSpecification:(id)a0 serviceDomain:(id)a1 scene:(id)a2 readyCompletion:(id /* block */)a3;
- (id)initWithWithSpecification:(id)a0 serviceDomain:(id)a1 scene:(id)a2 readyCompletion:(id /* block */)a3;
- (BOOL)isClippingEnabled;

@end
