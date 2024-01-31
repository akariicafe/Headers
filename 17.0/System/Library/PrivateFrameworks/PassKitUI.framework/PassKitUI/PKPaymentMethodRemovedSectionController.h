@class NSString;

@interface PKPaymentMethodRemovedSectionController : PKDynamicListSectionController {
    NSString *_removedPaymentMethodName;
    NSString *_removedPaymentMethodIdentifier;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithPaymentMethodName:(id)a0 paymentMethodIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
