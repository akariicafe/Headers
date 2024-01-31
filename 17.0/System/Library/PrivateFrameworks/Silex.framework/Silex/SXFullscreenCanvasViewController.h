@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<SXFullscreenCanvasViewControllerDelegate> delegate;

- (void)dismiss;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)keyCommands;
- (BOOL)prefersStatusBarHidden;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)preferredStatusBarUpdateAnimation;
- (void)scrollToNext;
- (void)scrollToPrevious;

@end
