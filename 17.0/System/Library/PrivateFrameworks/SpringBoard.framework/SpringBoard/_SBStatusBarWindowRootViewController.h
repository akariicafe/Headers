@class SBStatusBarWindow;

@interface _SBStatusBarWindowRootViewController : UIViewController

@property (weak, nonatomic) SBStatusBarWindow *statusBarWindow;

- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (void)loadView;
- (id)initWithWindow:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
