@class NSString, TFBetaAppLaunchScreenView, TFBetaAppLaunchPresenter, UIBarButtonItem;
@protocol TFBetaAppLaunchScreenHost;

@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView>

@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter;
@property (retain, nonatomic) TFBetaAppLaunchScreenView *launchScreenView;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (weak, nonatomic) id<TFBetaAppLaunchScreenHost> launchScreenHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)dismissAnimated:(BOOL)a0;
- (id)initWithPresenter:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (long long)_currentInterfaceOrientation;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_didPressExitLaunchScreenButton;
- (id)_pushTransition;
- (id)_fadeTransition;
- (SEL)_selectorForPresentorViewEvent:(unsigned long long)a0;
- (void)_animateLaunchScreenViewWithUpdateBlock:(id /* block */)a0 transition:(id)a1;
- (void)_didPressNavigationItemCancel;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressShowHowToButton;
- (void)_updateForContainmentInHostEnvironment:(id)a0;
- (void)_updateNavigationBarForHostTraitCollection:(id)a0;
- (void)launchScreenHost:(id)a0 traitCollectionDidChange:(id)a1;
- (void)showHowToWithTitle:(id)a0 subtitle:(id)a1 screenshotImageDict:(id)a2 primaryButtonTitle:(id)a3 primaryButtonEvent:(unsigned long long)a4 secondaryButtonTitle:(id)a5 secondaryButtonEvent:(unsigned long long)a6 animated:(BOOL)a7;
- (void)showLoadingAnimated:(BOOL)a0;
- (void)showTestNotesWithTitle:(id)a0 lockup:(id)a1 testNotesTitle:(id)a2 testNotesText:(id)a3 primaryButtonTitle:(id)a4 primaryButtonEvent:(unsigned long long)a5 animated:(BOOL)a6 fetchingOnImageFetcher:(id)a7;

@end
