@class _UIBackdropView, NSString, CNFRegController;
@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    long long _serviceType;
    id _resignListener;
    id _resumeListener;
    struct { unsigned char automaticKeyboardWasDisabled : 1; unsigned char shouldListenForSuspension : 1; unsigned char canStartNested : 1; unsigned char canShowSplashScreen : 1; unsigned char canShowDisabledScreen : 1; unsigned char hideLearnMoreButton : 1; unsigned char showSplashOnSignin : 1; unsigned char skipReloadOnNextViewWillAppear : 1; unsigned char allowCancel : 1; unsigned char allowSMS : 1; unsigned char shouldTerminateInBackground : 1; } _wizardFlags;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (nonatomic) BOOL shouldListenForSuspension;
@property (nonatomic) BOOL shouldTerminateInBackground;
@property (nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;
@property (nonatomic) BOOL canStartNested;
@property (nonatomic) BOOL canShowSplashScreen;
@property (nonatomic) BOOL canShowDisabledScreen;
@property (nonatomic) BOOL allowCancel;
@property (nonatomic) BOOL allowSMS;
@property (nonatomic) BOOL hideLearnMoreButton;
@property (nonatomic) BOOL showSplashOnSignin;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setGlobalAppearanceStyle:(long long)a0;
+ (void)setSupportsAutoRotation:(BOOL)a0;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)_applicationDidEnterBackground;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)_applicationDidFinishLaunching;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)applicationDidResume;
- (void).cxx_destruct;
- (id)initWithServiceTypes:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillSuspend;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)popViewControllerWithTransition:(int)a0;
- (void)pushViewController:(id)a0 transition:(int)a1;
- (void)setupController;
- (int)_firstRunState:(id)a0;
- (void)setShouldTerminateInBackground:(BOOL)a0;
- (void)_checkRestrictions;
- (void)_doCancel;
- (void)_restrictionsChanged;
- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (BOOL)canShowDisabledScreen;
- (id)controllerClassesToShow:(BOOL)a0;
- (id)controllersToShow;
- (id)controllersToShow:(BOOL)a0;
- (void)dismissFinished:(BOOL)a0;
- (void)dismissWithState:(unsigned long long)a0;
- (void)firstRunController:(id)a0 finishedWithState:(unsigned long long)a1;
- (BOOL)hideLearnMoreButton;
- (id)initWithRegController:(id)a0;
- (void)setCanShowDisabledScreen:(BOOL)a0;
- (void)setHideLearnMoreButton:(BOOL)a0;
- (void)setShouldListenForSuspension:(BOOL)a0;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)a0;
- (BOOL)shouldListenForSuspension;
- (BOOL)shouldShowFirstRunController;
- (BOOL)shouldTerminateInBackground;
- (BOOL)skipReloadOnNextViewWillAppear;

@end
