@class UIView;
@protocol MKLookAroundFullScreenViewControllerDelegate;

@interface MKLookAroundFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long originalAutoresizingMask;
@property (weak, nonatomic) id<MKLookAroundFullScreenViewControllerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)attachContentView;
- (void)detachContentView;

@end
