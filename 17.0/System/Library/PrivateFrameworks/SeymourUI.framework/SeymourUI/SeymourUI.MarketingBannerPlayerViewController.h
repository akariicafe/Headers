@interface SeymourUI.MarketingBannerPlayerViewController : AVPlayerViewController {
    void /* unknown type, empty encoding */ audioSessionCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ metricPage;
    void /* unknown type, empty encoding */ videoID;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void)playerFinished:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPlayerLayerView:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
