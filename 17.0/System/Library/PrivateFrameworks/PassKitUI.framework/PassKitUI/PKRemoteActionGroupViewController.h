@class PKPaymentPass, NSString, PKSelectActionGroupActionsView, PKPaymentPassActionGroup, PKPaymentWebService, PKPaymentPassAction;
@protocol PKRemoteActionGroupViewControllerDelegate, PKPaymentDataProvider;

@interface PKRemoteActionGroupViewController : UIViewController <PKSelectActionGroupActionsViewDelegate, PKPerformActionViewControllerDelegate> {
    PKPaymentPass *_pass;
    PKPaymentPassActionGroup *_actionGroup;
    PKSelectActionGroupActionsView *_actionGroupActionView;
    PKPaymentPassAction *_selectedAction;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    BOOL _remoteContentFetched;
}

@property (weak, nonatomic) id<PKRemoteActionGroupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)_fetchRemoteContentIfNeeded;
- (void)_reloadActionGroupActionsView;
- (void)_rightBarButtonPressed:(id)a0;
- (void)_showGenericErrorAlert:(id /* block */)a0;
- (id)initWithPass:(id)a0 actionGroup:(id)a1 paymentDataProvider:(id)a2 webService:(id)a3;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)selectActionGroupActionsViewDidSelectActionGroupAction:(id)a0;
- (void)setRightBarButtonEnabled:(BOOL)a0;

@end
