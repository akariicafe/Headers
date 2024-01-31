@interface ContactlessReaderUI.TapRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    void /* unknown type, empty encoding */ supressor;
    void /* unknown type, empty encoding */ dismissalExpected;
    void /* unknown type, empty encoding */ hideMenuIndicatorTimer;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ showStatusBar;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) unsigned long long preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)handleHomeButtonPressed;
- (void)handlePanWithSender:(id)a0;

@end
