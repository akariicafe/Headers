@protocol PSEnrollmentNavigationControllerDismissalDelegate;

@interface PSEnrollmentNavigationController : UINavigationController

@property (weak, nonatomic) id<PSEnrollmentNavigationControllerDismissalDelegate> dismissalDelegate;

- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_backgroundColorForModalFormSheet;
- (BOOL)canBeShownFromSuspendedState;

@end
