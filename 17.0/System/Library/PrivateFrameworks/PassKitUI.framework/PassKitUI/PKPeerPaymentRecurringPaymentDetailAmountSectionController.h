@class PKPeerPaymentRecurringPaymentAmountDetailRowItem;
@protocol PKPeerPaymentRecurringPaymentDetailAmountSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentDetailAmountSectionController : PKDynamicListSectionController {
    PKPeerPaymentRecurringPaymentAmountDetailRowItem *_item;
    id<PKPeerPaymentRecurringPaymentDetailAmountSectionControllerDelegate> _delegate;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_decorateListCell:(id)a0 forItem:(id)a1;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithAmount:(id)a0 currency:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
