@class NSArray, PKPaymentRequest, PKPaymentPass;
@protocol PKPaymentMethodSectionControllerDelegate;

@interface PKPaymentMethodPassesSectionController : PKDynamicListSectionController {
    id<PKPaymentMethodSectionControllerDelegate> _delegate;
    NSArray *_passes;
    PKPaymentPass *_selectedPass;
    PKPaymentRequest *_request;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (id)initWithDelegate:(id)a0 request:(id)a1 selectedPass:(id)a2;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
