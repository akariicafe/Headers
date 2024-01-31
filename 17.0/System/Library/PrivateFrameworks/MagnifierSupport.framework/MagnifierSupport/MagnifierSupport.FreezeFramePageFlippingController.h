@interface MagnifierSupport.FreezeFramePageFlippingController : MagnifierSupport.LensFilteringViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    void /* unknown type, empty encoding */ freezeFrameDisplayAppearanceSubscription;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ pages;
    void /* unknown type, empty encoding */ thumbnailScrollingSubscriber;
    void /* unknown type, empty encoding */ activePageIndexPath;
    void /* unknown type, empty encoding */ pageSpacing;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_assetURLs;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shareBarButtonItem;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;

- (void)handleShareFreezeFrameMenuItemActionWithMenuLocation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)shareButtonAction:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)singleTap:(id)a0;

@end
