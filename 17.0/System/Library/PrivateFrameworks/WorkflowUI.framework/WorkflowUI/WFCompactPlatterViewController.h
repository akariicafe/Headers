@class NSString, WFCompactPlatterView, WFWorkflowRunningContext, UIScrollView, WFCompactPlatterTransitioningDelegate, UIViewController;
@protocol WFCompactPlatterContentContainer, BNPresentableContext, WFCompactAppearanceProvider;

@interface WFCompactPlatterViewController : UIViewController <WFCompactPlatterSizingDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WFCompactPlatterPresentation, WFBannerPresentable>

@property (retain, nonatomic) WFCompactPlatterTransitioningDelegate *wf_transitioningDelegate;
@property (nonatomic) struct CGSize { double width; double height; } minimumPlatterSize;
@property (readonly, weak, nonatomic) WFCompactPlatterView *platterView;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) WFWorkflowRunningContext *associatedRunningContext;
@property (retain, nonatomic) id<WFCompactAppearanceProvider> appearanceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFCompactPlatterContentContainer> platterContentContainer;
@property (nonatomic) BOOL platterHeightAnimationsDisabled;
@property (readonly, nonatomic) BOOL providesHostedContent;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)scrollToTopAnimated:(BOOL)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setTransitioningDelegate:(id)a0;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (double)contentHeightForWidth:(double)a0 withMaximumVisibleHeight:(double)a1;
- (void)invalidateContentSize;
- (void)invalidatePlatterSize;
- (double)maximumExpectedVisibleContentHeight;
- (double)platterHeightForWidth:(double)a0 withMaximumHeight:(double)a1;
- (void)platterViewDidInvalidateSize:(id)a0;
- (BOOL)shouldHideSashView;
- (void)systemDismissedBanner;
- (void)updateContentSizeAndPlatterPosition;
- (void)updatePlatterPosition;
- (void)updateScrollViewSeparators;

@end
