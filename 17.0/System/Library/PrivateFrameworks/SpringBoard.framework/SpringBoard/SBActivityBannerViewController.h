@class NSString, PLPlatterView, UIView, UIViewController;
@protocol SBActivityBannerViewControllerDelegate, BNPresentableContext;

@interface SBActivityBannerViewController : SBActivityViewController <ACUISActivityHostViewControllerDelegate, BNPresentable>

@property (class, readonly, copy) NSString *requesterIdentifier;

@property (readonly, nonatomic) PLPlatterView *platterView;
@property (readonly, nonatomic) UIView *backgroundTintView;
@property (weak, nonatomic) id<SBActivityBannerViewControllerDelegate> bannerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;

- (void)_layoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (id)_activityIdentifier;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(id)a0;
- (BOOL)_hasBackgroundTintColor;
- (BOOL)_shouldHaveBackgroundTint;
- (BOOL)_shouldSetBlackBackground;

@end
