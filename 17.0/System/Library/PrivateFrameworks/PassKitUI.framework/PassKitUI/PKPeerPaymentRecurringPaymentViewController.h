@class NSString, NSArray, PKPeerPaymentService, PKPeerPaymentRecurringPaymentSectionController;

@interface PKPeerPaymentRecurringPaymentViewController : PKDynamicCollectionViewController <PKPeerPaymentServiceObserver, PKPeerPaymentRecurringPaymentSectionControllerDelegate, PKViewControllerPreflightable> {
    PKPeerPaymentService *_peerPaymentService;
    long long _context;
    NSArray *_payments;
    PKPeerPaymentRecurringPaymentSectionController *_paymentsSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)recurringPaymentsChanged;
- (id)initWithContext:(long long)a0 peerPaymentService:(id)a1 transactionSourceCollection:(id)a2 familyCollection:(id)a3;
- (void)reloadRecurringPaymentsWithCompletion:(id /* block */)a0;
- (void)showDetailsForRecurringPaymentIdentifier:(id)a0;

@end
