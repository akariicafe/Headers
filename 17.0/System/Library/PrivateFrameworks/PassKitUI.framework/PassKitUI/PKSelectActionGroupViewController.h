@class PKPaymentPass, NSString, NSArray, PKPerformActionPassView, PKSelectActionGroupView, PKPaymentPassActionGroup, PKPaymentWebService;
@protocol PKPaymentDataProvider, PKSelectActionGroupViewControllerDelegate;

@interface PKSelectActionGroupViewController : UIViewController <PKSelectActionGroupViewDelegate, PKRemoteActionGroupViewControllerDelegate> {
    PKPerformActionPassView *_passView;
    PKPaymentPass *_pass;
    NSArray *_actionGroups;
    PKSelectActionGroupView *_actionGroupView;
    PKPaymentPassActionGroup *_selectedActionGroup;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
}

@property (weak, nonatomic) id<PKSelectActionGroupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)_reloadActionGroupView;
- (void)_rightBarButtonPressed:(id)a0;
- (id)initWithPass:(id)a0 actionGroups:(id)a1 paymentDataProvider:(id)a2 webService:(id)a3;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)remoteGroupActionsViewControllerDidCancel:(id)a0;
- (void)remoteGroupActionsViewControllerDidPerformFetchActionGroup:(id)a0;
- (void)selectActionGroupViewDidSelectActionGroup:(id)a0;
- (void)setRightBarButtonEnabled:(BOOL)a0;

@end
