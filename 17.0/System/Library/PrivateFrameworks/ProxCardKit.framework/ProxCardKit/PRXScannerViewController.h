@class PRXScannerIndicatorView, UIViewController;

@interface PRXScannerViewController : PRXCardContentViewController

@property (readonly, nonatomic) PRXScannerIndicatorView *indicatorView;
@property (readonly, nonatomic) UIViewController *scannerEngine;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithScannerEngine:(id)a0;
- (void)resetConfirmationRing;
- (void)showConfirmationRing;

@end
