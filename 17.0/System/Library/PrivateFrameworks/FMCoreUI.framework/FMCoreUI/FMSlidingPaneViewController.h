@class UIVisualEffect, SlidingPaneViewState, FMFuture, UIView, NSMutableArray, UIViewController;
@protocol FMSlidingPaneViewControllerDelegate;

@interface FMSlidingPaneViewController : FMViewController

@property (retain, nonatomic) SlidingPaneViewState *paneState;
@property (nonatomic) BOOL didHideToolbar;
@property (retain, nonatomic) NSMutableArray *actionFutures;
@property (readonly, nonatomic) FMFuture *currentFuture;
@property (weak, nonatomic) id<FMSlidingPaneViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *paneViewController;
@property (readonly, nonatomic) UIView *paneView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paneInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paneContentInsets;
@property (nonatomic) double animationDuration;
@property (nonatomic) double animationSpringDamping;
@property (nonatomic) double animationInitialVelocity;
@property (nonatomic) unsigned long long animationOptions;
@property (retain, nonatomic) UIVisualEffect *paneVisualEffect;
@property (readonly, nonatomic, getter=isPaneShowing) BOOL paneShowing;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)traitCollectionForChildViewController:(id)a0;
- (void)dismiss:(id)a0;
- (id)_paneParentView;
- (void)completeFuture:(id)a0;
- (void)didPresentPane:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2;
- (id)newActionFuture;
- (struct CGSize { double x0; double x1; })_normalizeSize:(struct CGSize { double x0; double x1; })a0;
- (void)_createPaneContentConstraintsForState:(id)a0;
- (void)_createPaneViewForState:(id)a0;
- (void)_crossDissolveOldPaneState:(id)a0 newPaneState:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)_dismissPaneState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_metricsFromEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_paneFrameChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_preferredSizeForPaneState:(id)a0;
- (void)_presentPaneState:(id)a0 animated:(BOOL)a1 interactive:(BOOL)a2 completion:(id /* block */)a3;
- (void)_removeChildViewControllerForState:(id)a0;
- (void)commonConfiguration;
- (void)didDismissPane:(id)a0 animated:(BOOL)a1;
- (void)dismiss:(id)a0 forEvent:(id)a1;
- (void)dismissPaneViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissSegue:(id)a0;
- (void)paneSizeChanged:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forViewController:(id)a1;
- (void)presentPaneViewController:(id)a0 fromEdge:(unsigned long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)presentPaneViewController:(id)a0 fromEdge:(unsigned long long)a1 withPercent:(double)a2 completion:(id /* block */)a3;
- (void)setPresentingConstraintConstant:(double)a0;
- (void)willDismissPane:(id)a0 animated:(BOOL)a1;
- (void)willPresentPane:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animated:(BOOL)a2;

@end
