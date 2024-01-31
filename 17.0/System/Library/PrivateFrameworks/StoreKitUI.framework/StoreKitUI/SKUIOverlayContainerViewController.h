@class UIColor, NSArray, UIControl, NSString, NSMutableArray, UITapGestureRecognizer;
@protocol SKUIOverlayContainerDelegate;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIControl *_backstopView;
    BOOL _isAdjustingViewsForDismiss;
    long long _popViewControllerCount;
    long long _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property (readonly, nonatomic) UIColor *dimmingViewColor;
@property (readonly, nonatomic) UIControl *backstopControl;
@property (readonly, copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id<SKUIOverlayContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)popViewControllerAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_tapAction:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_selectedViewController;
- (void)_pushViewController:(id)a0;
- (void)_removeChildren;
- (long long)_indexOfViewControllerForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredFrameForViewController:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_fadeInViewController:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_frameAction:(id)a0;
- (struct CGSize { double x0; double x1; })_overlaySizeForController:(id)a0 atBoundsSize:(struct CGSize { double x0; double x1; })a1;
- (double)_overlaySpacingForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_popViewControllers;
- (void)_positionViewControllersForSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (void)_slideInViewController:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_viewControllerForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dismissWithFadeTransitionCompletionBlock:(id /* block */)a0;
- (void)dismissWithFlipTransition:(id)a0 completionBlock:(id /* block */)a1;
- (void)popViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)replaceViewController:(id)a0 withViewController:(id)a1;
- (void)showViewController:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)showViewController:(id)a0 withFlipTransition:(id)a1 completionBlock:(id /* block */)a2;
- (void)showViewControllers:(id)a0;

@end
