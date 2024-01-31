@class BSUIOrientationTransformWrapperView;
@protocol SBSwitcherViewControllerDelegate;

@interface SBSwitcherViewController : UIViewController {
    BSUIOrientationTransformWrapperView *_contentWrapperView;
}

@property (weak, nonatomic) id<SBSwitcherViewControllerDelegate> delegate;
@property (nonatomic) long long contentOrientation;

- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)a0;
- (long long)_overrideInterfaceOrientationMechanics;
- (void)viewDidLoad;
- (void)addContentView:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
