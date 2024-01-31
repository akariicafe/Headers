@class UITapGestureRecognizer, NSString, NSHashTable, NCNotificationRequest, NCCarPlayBannerContentView, UIViewController;
@protocol BNPresentableContext, NCCarPlayBannerPresentableViewControllerDelegate;

@interface NCCarPlayBannerPresentableViewController : UIViewController <NCCarPlayBannerContentViewDelegate, BNPresentable, BNPresentableObservable> {
    NCCarPlayBannerContentView *_bannerContentView;
    NSHashTable *_observers;
    UITapGestureRecognizer *_contentSelectPressGesture;
}

@property (class, readonly, copy, nonatomic) NSString *requesterIdentifier;

@property (readonly, nonatomic) NCNotificationRequest *notificationRequest;
@property (weak, nonatomic) id<NCCarPlayBannerPresentableViewControllerDelegate> delegate;
@property (nonatomic) BOOL fillsContainer;
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

- (id)initWithNotificationRequest:(id)a0;
- (void)_wheelChangedWithEvent:(id)a0;
- (void)viewDidLoad;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void)loadView;
- (void)userInteractionDidEndForBannerForPresentable:(id)a0;
- (void)presentableWillDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)userInteractionWillBeginForBannerForPresentable:(id)a0;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void)presentableWillAppearAsBanner:(id)a0;
- (id)_platterView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bannerContentOutsets;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithPresentationSize:(struct CGSize { double x0; double x1; })a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)presentableDescription;
- (void)_handleSwipeGesture:(id)a0;
- (void)addPresentableObserver:(id)a0;
- (BOOL)bn_shouldAnimateViewTransitionToSize:(struct CGSize { double x0; double x1; })a0;
- (void)removePresentableObserver:(id)a0;
- (void)_handleBackGesture:(id)a0;
- (void)_handleTapOnContent:(id)a0;
- (BOOL)bannerContentViewShouldShowOKButton:(id)a0;
- (void)invalidateDisplayProperties;
- (void)updateRequestToInstance:(id)a0;

@end
