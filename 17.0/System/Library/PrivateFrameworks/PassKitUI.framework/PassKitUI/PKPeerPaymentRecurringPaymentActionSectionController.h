@class PKTransactionSourceCollection, PKPeerPaymentAccount, NSString, PKFamilyMemberCollection;
@protocol PKPeerPaymentRecurringPaymentSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentActionSectionController : PKDynamicListSectionController <PKPaymentSetupDelegate>

@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKTransactionSourceCollection *sourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (weak, nonatomic) id<PKPeerPaymentRecurringPaymentSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_beginSetupFlow;
- (id)_decorateListCell:(id)a0 forRowItem:(id)a1;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)a0 paymentSetupMode:(long long)a1;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)paymentSetupDidFinish:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
