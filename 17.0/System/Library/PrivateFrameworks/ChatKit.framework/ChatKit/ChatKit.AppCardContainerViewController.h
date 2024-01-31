@class _UIRemoteViewController;

@interface ChatKit.AppCardContainerViewController : UIViewController <CKAppCardViewControllerProtocol, _UIRemoteViewControllerContaining> {
    void /* unknown type, empty encoding */ remoteViewController;
    void /* unknown type, empty encoding */ popoverPresentationLocation;
    void /* unknown type, empty encoding */ presentationDelegate;
    void /* unknown type, empty encoding */ sendDelegate;
    void /* unknown type, empty encoding */ touchTrackingGesture;
    void /* unknown type, empty encoding */ initialPresentationStyle;
    void /* unknown type, empty encoding */ shouldOverrideExceptionsOnDismissal;
    void /* unknown type, empty encoding */ cachedCompactDetentHeight;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)setShowingDarkEffect:(BOOL)a0 isInDarkMode:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)checkForTouchInRemoteProcessIfNecessaryWithCompletion:(id /* block */)a0;
- (void)closeButtonPressed;

@end
