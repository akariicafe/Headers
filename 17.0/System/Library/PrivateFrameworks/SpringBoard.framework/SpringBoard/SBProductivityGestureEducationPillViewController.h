@class SBProductivityGestureEducationItem, NSString, NSURL, PLPillView, UIViewController;
@protocol BNPresentableContext, SBProductivityGestureEducationPillViewControllerDelegate;

@interface SBProductivityGestureEducationPillViewController : UIViewController <BNPresentable> {
    PLPillView *_pillView;
}

@property (weak, nonatomic) id<SBProductivityGestureEducationPillViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) SBProductivityGestureEducationItem *item;
@property (readonly, nonatomic) long long presentableBehavior;
@property (weak, nonatomic) id<BNPresentableContext> presentableContext;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) long long presentableType;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableWillNotAppearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)presentableWillAppearAsBanner:(id)a0;
- (id)initWithItem:(id)a0;
- (id)_titleString;
- (id)presentableDescription;
- (void)_handleSingleTap:(id)a0;
- (void)_marqueeStarted:(id)a0;
- (id)_pillActionContentItem;
- (id)_pillLeadingImageView;
- (id)_pillTitleContentItem;
- (id)_titleForItemType:(long long)a0;
- (id)_titleKeyForEducationType:(long long)a0;

@end
