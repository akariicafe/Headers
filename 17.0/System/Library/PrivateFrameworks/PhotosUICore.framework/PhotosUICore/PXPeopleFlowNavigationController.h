@class NSString, UIViewController, UIBarButtonItem;
@protocol PXPeopleFlowController, PXPeopleFlowViewController;

@interface PXPeopleFlowNavigationController : UINavigationController <PXPeopleFlowViewControllerActionDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *backButton;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIViewController<PXPeopleFlowViewController> *currentViewController;
@property (retain, nonatomic) id<PXPeopleFlowController> flowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)done:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)next:(id)a0;
- (void).cxx_destruct;
- (void)_updateActions;
- (void)cancel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)back:(id)a0;
- (id)initWithFlowController:(id)a0;
- (void)requestAdvanceToNextInFlow;
- (void)requestCancel;
- (void)requestDone;
- (void)setAdvanceButtonEnabled:(BOOL)a0;

@end
