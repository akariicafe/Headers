@class NSString, EKUIRecurrenceAlertController;
@protocol EKViewControllerRemoteUIDelegate, EKEditItemViewControllerDelegate, EKStyleProvider;

@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol, EKViewControllerRemoteUIProtocol> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    id<EKStyleProvider> _styleProvider;
    EKUIRecurrenceAlertController *_recurrenceAlertController;
}

@property (weak, nonatomic) id<EKViewControllerRemoteUIDelegate> remoteUIDelegate;
@property (nonatomic) unsigned long long subitem;
@property (nonatomic) BOOL modal;
@property (nonatomic) BOOL showsDoneButton;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferredViewControllerForPresentationsFromViewController:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)cancel;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)hidesBottomBarWhenPushed;
- (double)marginForTableView:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_saveAndDismissWithForce:(BOOL)a0;
- (BOOL)fitsPopoverWhenKeyboardActive;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (void)popIfNonModal;
- (void)saveAndDismiss;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)a0 checked:(BOOL)a1;
- (BOOL)validateAllowingAlert:(BOOL)a0;

@end
