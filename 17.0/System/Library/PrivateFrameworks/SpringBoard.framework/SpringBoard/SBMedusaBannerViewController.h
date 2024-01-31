@class NSString, UIViewController, PLPillView;
@protocol BNPresentableContext;

@interface SBMedusaBannerViewController : UIViewController <BNPresentable> {
    PLPillView *_pillView;
    long long _type;
    long long _orientation;
    long long _peekConfiguration;
}

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
- (void).cxx_destruct;
- (id)_bannerView;
- (id)initWithType:(long long)a0 orientation:(long long)a1 peekConfiguration:(long long)a2;

@end
