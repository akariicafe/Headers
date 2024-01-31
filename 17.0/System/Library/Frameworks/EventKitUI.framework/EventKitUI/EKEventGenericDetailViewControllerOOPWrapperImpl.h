@class UIColor, NSArray, _TtC10EventKitUI41EKEventGenericDetailViewControllerOOPImpl, EKUIEmailCompositionManager, NSString, EKEvent;
@protocol EKEditItemViewControllerDelegate;

@interface EKEventGenericDetailViewControllerOOPWrapperImpl : UIViewController <EKEditItemViewControllerProtocol> {
    NSString *_viewID;
    EKEvent *_event;
}

@property (retain, nonatomic) _TtC10EventKitUI41EKEventGenericDetailViewControllerOOPImpl *vc;
@property (retain, nonatomic) NSArray *leftBarButtonItems;
@property (retain, nonatomic) NSArray *rightBarButtonItems;
@property (retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager;
@property (retain, nonatomic) NSArray *leftBarButtonActions;
@property (retain, nonatomic) NSArray *rightBarButtonActions;
@property (retain, nonatomic) UIColor *oopContentBackgroundColor;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithTitle:(id)a0 viewID:(id)a1 event:(id)a2 leftBarButtonActions:(id)a3 rightBarButtonActions:(id)a4;
- (id)initWithTitle:(id)a0 viewID:(id)a1 leftBarButtonActions:(id)a2 rightBarButtonActions:(id)a3;
- (void)leftBarButtonTapped:(id)a0;
- (void)rightBarButtonTapped:(id)a0;

@end
