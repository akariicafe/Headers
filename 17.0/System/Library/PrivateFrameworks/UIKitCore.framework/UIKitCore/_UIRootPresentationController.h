@class UIWindow, NSString, UIStatusBarStyleAnimationParameters, UIStatusBarHideAnimationParameters;

@interface _UIRootPresentationController : _UISheetPresentationController <_UIStatusBarAnimationProviding>

@property (readonly, weak, nonatomic) UIWindow *presentingWindow;
@property (readonly, nonatomic) long long preferredStatusBarStyle;
@property (readonly, nonatomic) int _preferredStatusBarVisibility;
@property (readonly, nonatomic, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (readonly, nonatomic, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (readonly, nonatomic) long long preferredStatusBarUpdateAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_allowsDeferredTransitions;

- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (BOOL)_isRootPresentation;
- (id)_createVisualStyleForProvider:(id)a0;
- (void).cxx_destruct;
- (id)_parentTraitEnvironment;
- (id)initWithPresentedViewController:(id)a0 presentingWindow:(id)a1;
- (BOOL)_mayChildGrabPresentedViewControllerView;
- (id)_fullscreenPresentationSuperview;

@end
