@class PKFamilyMemberCollection, NSString, UIView, UIBarButtonItem, PKPeerPaymentRecurringPayment, PKPeerPaymentRemoteMessagesComposer, CNComposeRecipient, PKAvatarView, PKPeerPaymentMessagesContentAmountEntryViewController;

@interface PKAmountKeypadViewController : UIViewController <PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate, PKPeerPaymentRecurringPaymentDetailViewControllerDelegate, PKPaymentSetupDelegate> {
    CNComposeRecipient *_recipient;
    long long _sendFlowType;
    PKPeerPaymentRemoteMessagesComposer *_remoteMessagesComposer;
    PKPeerPaymentMessagesContentAmountEntryViewController *_amountEntryViewController;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentRecurringPayment *_recurringPayment;
    UIView *_containerView;
    PKAvatarView *_avatarView;
    UIBarButtonItem *_nextButton;
}

@property (nonatomic) BOOL showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (id)currentBalance;
- (void)setRecurringPeerPayment:(id)a0;
- (double)percentExpanded;
- (id)_composeRecipientForAddress:(id)a0;
- (void)_configureAvatarView;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)a0 paymentSetupMode:(long long)a1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (id)_peerPaymentController;
- (void)_presentRecurringDetailViewController;
- (void)handleAction:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRemoteMessagesComposer:(id)a0 recipient:(id)a1 sendFlowType:(long long)a2 familyCollection:(id)a3;
- (id)initWithRemoteMessagesComposer:(id)a0 recipientAddress:(id)a1 sendFlowType:(long long)a2 familyCollection:(id)a3;
- (id)maximumTransferAmount;
- (id)minimumTransferAmount;
- (void)paymentSetupDidFinish:(id)a0;
- (struct { BOOL x0; long long x1; })pkui_navigationStatusBarStyleDescriptor;
- (void)recurringPaymentDetailViewControllerDidDisappearWithRecurringPayment:(id)a0;
- (void)setUpContainerView;
- (void)setUpNavigationBar;

@end
