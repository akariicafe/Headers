@interface AXWatchRemoteScreenUI.AXTwiceCompanionMainViewController : UIViewController {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dismissButton;
    void /* unknown type, empty encoding */ watchDeviceView;
    void /* unknown type, empty encoding */ statusLabel;
    void /* unknown type, empty encoding */ pullToDismissManager;
    void /* unknown type, empty encoding */ cardBackgroundView;
}

@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)cardSwipeDownWithGesture:(id)a0;

@end
