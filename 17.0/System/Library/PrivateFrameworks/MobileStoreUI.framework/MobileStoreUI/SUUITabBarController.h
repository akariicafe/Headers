@class NSString, UIViewController, SUUIFloatingOverlayView;

@interface SUUITabBarController : UITabBarController <SUUIMoreNavigationControllerDelegate> {
    SUUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    long long _forcedUserInterfaceStyle;
}

@property (nonatomic) BOOL sizeTransitionInProgress;
@property (readonly, nonatomic) BOOL containsTransientViewControllerOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_moreNavigationControllerClass;

- (id)init;
- (id)traitCollection;
- (void)viewDidLayoutSubviews;
- (long long)preferredUserInterfaceStyle;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_setSelectedViewController:(id)a0;
- (id)moreNavigationController;
- (void)setTransientViewController:(id)a0 animated:(BOOL)a1;
- (void)_layoutFloatingOverlayView;
- (void)cancelTransientViewController:(id)a0;
- (id)floatingOverlayViewController;
- (long long)forcedUserInterfaceStyle;
- (void)moreNavigationController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)setFloatingOverlayViewController:(id)a0 animated:(BOOL)a1;
- (void)setForcedUserInterfaceStyle:(long long)a0;

@end
