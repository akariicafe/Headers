@class BKUIHostedJindoPresentable, NSString, UIView, NSLayoutConstraint;
@protocol UITraitChangeRegistration;

@interface BKUIPearlJindoEnrollViewController : BKUIPearlEnrollViewController <BNPresentableObserving, BKUIPearlEnrollViewStateTransitionDelegate, BKUIAlertControllerListener, BKJindoPresentableObserving>

@property (retain, nonatomic) BKUIHostedJindoPresentable *presentable;
@property (retain, nonatomic) NSLayoutConstraint *bottomContainerTopConstraint;
@property (retain, nonatomic) UIView *hostedTutorialMicaView;
@property (retain, nonatomic) NSLayoutConstraint *hostedTutorialMicaViewCenterConstraint;
@property (nonatomic) BOOL jindoNeedsResignActiveRevoke;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didBecomeActive:(id)a0;
- (void)viewDidLoad;
- (void)_sceneDidActivate:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)willResignActive:(id)a0;
- (void)_sceneWillDeactivate:(id)a0;
- (id)buttonTray;
- (BOOL)_isDarkMode;
- (void)_setupUI;
- (id)nextStateButton;
- (struct CGSize { double x0; double x1; })_fullEnrollViewSize;
- (void)_handleEnrollStateOnAppear;
- (id)_jindoBottomContainer;
- (void)_postBannerToDestinationWithInitialStateCollapsed:(BOOL)a0;
- (void)_postBannerToDestinationWithInitialStateCollapsed:(BOOL)a0 enrollViewStateConfiguration:(id /* block */)a1;
- (void)_prepEnrollViewAndEnrollTutorialMica;
- (id)_startOverTitleForState:(int)a0;
- (void)alertActionTappedFromAlert;
- (void)animateToSuccessCompletionLayout:(long long)a0;
- (void)didChangeActiveLayoutMode:(id)a0;
- (id)escapeHatchButton;
- (id)escapeHatchButton:(id)a0 state:(int)a1;
- (void)navigateToMidFlowPeriocularSplashScreenWithPrepareAction:(id /* block */)a0 completionAction:(id /* block */)a1;
- (id)nextStateButtonContainer;
- (void)nextStateButtonPressed:(id)a0;
- (void)prepareBottomContainerForAnimationToState:(int)a0 fromState:(int)a1 subState:(int)a2 advancing:(BOOL)a3;
- (void)prepareForAnimationToState:(int)a0 fromState:(int)a1 subState:(int)a2 advancing:(BOOL)a3;
- (id)retryMatchOperationButton;
- (id)startOverButtonForState:(int)a0;
- (void)stateTransitionDidComplete;
- (void)transitionToSuccessFromPeriocularSplash;

@end
