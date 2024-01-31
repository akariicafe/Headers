@class PKTransactionSourceCollection, NSArray, PKDashboardPaymentTransactionItemPresenter, PKFamilyMemberCollection;
@protocol PKPeerPaymentRecurringPaymentSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentSectionController : PKDynamicListSectionController {
    PKDashboardPaymentTransactionItemPresenter *_presenter;
}

@property (retain, nonatomic) NSArray *payments;
@property (retain, nonatomic) PKTransactionSourceCollection *sourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (weak, nonatomic) id<PKPeerPaymentRecurringPaymentSectionControllerDelegate> delegate;

- (id)init;
- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_applyMaskToCell:(id)a0 firstInSection:(BOOL)a1 lastInSection:(BOOL)a2;
- (id)cellRegistrationForItem:(id)a0;
- (id)paymentTransactionItemForPayment:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
