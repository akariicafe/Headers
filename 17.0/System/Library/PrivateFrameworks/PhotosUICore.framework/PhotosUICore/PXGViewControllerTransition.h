@class UIView, PXGItemPlacement, NSArray, NSString, PXGViewControllerItemPlacementInterpolator, PXDisplayLink, NSMutableArray, UIPercentDrivenInteractiveTransition, UIViewController, _PXGTransitionEndPointInfo;
@protocol PXGViewControllerTransitionEndPoint, UIViewControllerContextTransitioning;

@interface PXGViewControllerTransition : PXObservable <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, PXGMutableViewControllerTransition>

@property (readonly, weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) long long transitionKind;
@property (nonatomic) BOOL isEnding;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) UIView *fromContentView;
@property (retain, nonatomic) UIView *toContentView;
@property (copy, nonatomic) id /* block */ animationUpdateBlock;
@property (retain, nonatomic) PXDisplayLink *displayLink;
@property (retain, nonatomic) PXGViewControllerItemPlacementInterpolator *itemPlacementInterpolator;
@property (readonly, nonatomic) NSMutableArray *alongsideAnimationBlocks;
@property (copy, nonatomic) NSArray *endPointInfos;
@property (readonly, nonatomic) _PXGTransitionEndPointInfo *summaryEndPointInfo;
@property (readonly, nonatomic) _PXGTransitionEndPointInfo *detailEndPointInfo;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) id<PXGViewControllerTransitionEndPoint> summaryEndPoint;
@property (readonly, nonatomic) id<PXGViewControllerTransitionEndPoint> detailEndPoint;
@property (nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) UIViewController *summaryViewController;
@property (readonly, nonatomic) UIViewController *detailViewController;
@property (readonly, nonatomic) PXGItemPlacement *summaryItemOriginalPlacement;
@property (readonly, nonatomic) PXGItemPlacement *detailItemOriginalPlacement;
@property (readonly, nonatomic) BOOL isVerticalOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double fractionCompleted;
@property (copy, nonatomic) PXGItemPlacement *summaryItemPlacementOverride;
@property (copy, nonatomic) PXGItemPlacement *detailItemPlacementOverride;

+ (id)_createTransitionWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)_transitionWithDetailViewController:(id)a0 createIfNeeded:(BOOL)a1 verticalOnly:(BOOL)a2;
+ (id)interactiveDismissalOfDetailViewController:(id)a0;
+ (void)prepareDismissalOfDetailViewController:(id)a0;
+ (void)prepareTransitionFromSummaryViewController:(id)a0 toPresentedViewController:(id)a1 detailViewController:(id)a2;
+ (id)transitionWithDetailViewController:(id)a0;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (double)transitionDuration:(id)a0;
- (void)finish;
- (id)interactionControllerForPresentation:(id)a0;
- (void)_handleDisplayLink:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_isContentViewControllerHidden:(id)a0;
- (void)setDetailItemOriginalPlacement:(id)a0;
- (void)_endTransitionAnimation:(BOOL)a0;
- (id)_initWithSummaryViewController:(id)a0 presentedViewController:(id)a1 detailViewController:(id)a2;
- (BOOL)_isTransitionAllowedWithKind:(long long)a0;
- (void)_notifyAlongsideAnimationBlocks:(double)a0;
- (void)_prepareTransitionAnimationWithReadinessHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (double)_progressForFractionCompleted:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectInContainerView:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inCoordinateSpace:(id)a2 inContentViewController:(id)a3;
- (void)_transitionDidEnd:(BOOL)a0;
- (void)_transitionDidUpdateWithTransitionTime:(double)a0;
- (id)_transitionViewControllerForContentViewController:(id)a0;
- (void)_transitionWillBegin;
- (void)_willDismissWithoutTransition;
- (void)animateAlongside:(id /* block */)a0;
- (void)installCompletionHandler:(id /* block */)a0;
- (void)setIsVerticalOnly:(BOOL)a0;
- (void)setSummaryItemOriginalPlacement:(id)a0;

@end
