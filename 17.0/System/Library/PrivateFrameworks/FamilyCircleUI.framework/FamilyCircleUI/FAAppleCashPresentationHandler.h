@class UINavigationController, PKPeerPaymentAssociatedAccountPresentationContext, PKPassbookSettingsDefaultBehavior, PKPeerPaymentAssociatedAccountsController, PKPaymentPassDetailViewController;

@interface FAAppleCashPresentationHandler : NSObject

@property (retain, nonatomic) PKPeerPaymentAssociatedAccountsController *peerPaymentController;
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountPresentationContext *context;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) PKPaymentPassDetailViewController *passDetailsViewController;
@property (retain, nonatomic) PKPassbookSettingsDefaultBehavior *defaultBehavior;

- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (void)presentPeerPaymentControllerWithFamilyCircle:(id)a0 member:(id)a1 attributes:(id)a2;
- (id)peerPaymentPassForAccount:(id)a0 passLibraryDataProvider:(id)a1;
- (void)presentPaymentPassDetailViewController;
- (void)presentPeerPaymentControllerWithAttributes:(id)a0 completion:(id /* block */)a1;

@end
