@class LAUIPhysicalButtonView;

@interface BKUIIndicatorViewController : UIViewController

@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL shouldShow;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateUI;

@end
