@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)teardown;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isModalInPresentation;

@end
