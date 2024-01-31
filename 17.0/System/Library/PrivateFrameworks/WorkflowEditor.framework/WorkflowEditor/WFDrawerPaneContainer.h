@class UIViewController, NSString, WFDrawerAnimationManager, UIView, WFDrawerDismissalHelper, WFDrawerGestureCoordinator;
@protocol WFDrawerPaneContainerDelegate, WFDrawerPane;

@interface WFDrawerPaneContainer : UIViewController <WFDrawerGestureCoordinatorDelegate>

@property (readonly, nonatomic) WFDrawerGestureCoordinator *gestureCoordinator;
@property (readonly, nonatomic) WFDrawerAnimationManager *animationManager;
@property (readonly, nonatomic) WFDrawerDismissalHelper *dismissalHelper;
@property (readonly, weak, nonatomic) UIView *backgroundDimmingView;
@property (readonly, weak, nonatomic) UIView *foregroundDimmingView;
@property (weak, nonatomic) id<WFDrawerPaneContainerDelegate> delegate;
@property (readonly, nonatomic) UIViewController<WFDrawerPane> *drawerPane;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, nonatomic) unsigned long long dimming;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *drawerView;
@property (readonly, nonatomic) double minimumDrawerHeight;
@property (readonly, nonatomic) double maximumDrawerHeight;
@property (readonly, nonatomic) double drawerHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } grabberAreaBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)gestureCoordinatorDidBeginInteraction:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (double)heightForVisibility:(unsigned long long)a0;
- (unsigned long long)closestVisibilityForHeight:(double)a0;
- (unsigned long long)closestVisibilityWithVelocity:(double)a0 acceleration:(double)a1 previousVisibility:(unsigned long long)a2;
- (void)gestureCoordinator:(id)a0 didContinueInteractionWithDrawerHeight:(double)a1;
- (void)gestureCoordinator:(id)a0 didFinishInteractionWithVelocity:(double)a1 acceleration:(double)a2 animation:(id)a3;
- (unsigned long long)growingVisibilityForHeight:(double)a0;
- (id)initWithDrawerPane:(id)a0;
- (void)installForegroundDimmingViewIfNeeded;
- (void)layoutDrawerViewController;
- (void)layoutDrawerViewControllerForDrawerHeight:(double)a0;
- (void)removeForegroundDimmingViewIfUnused;
- (void)setupDimmingViewsForAnimationToDimming:(unsigned long long)a0;
- (unsigned long long)shrinkingVisibilityForHeight:(double)a0;
- (void)transitionToVisibility:(unsigned long long)a0 withDimming:(unsigned long long)a1 animated:(BOOL)a2 interruptible:(BOOL)a3 completion:(id /* block */)a4;
- (void)transitionWithPushedAnimationToVisibility:(unsigned long long)a0 withDimming:(unsigned long long)a1 animated:(BOOL)a2 interruptible:(BOOL)a3 completion:(id /* block */)a4;

@end
