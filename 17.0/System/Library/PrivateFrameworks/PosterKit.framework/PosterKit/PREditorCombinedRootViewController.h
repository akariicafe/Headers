@protocol PREditingLookViewProviding;

@interface PREditorCombinedRootViewController : PREditorRootViewController

@property (retain, nonatomic) id<PREditingLookViewProviding> views;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)_windowInterfaceOrientation;
- (void)_updateCounterRotationLayout;
- (void)_updateScrollViewClipping:(BOOL)a0;

@end
