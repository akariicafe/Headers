@class UIColor;
@protocol PKPaymentMethodSectionControllerDelegate;

@interface PKPaymentMethodActionSectionController : PKDynamicListSectionController {
    id<PKPaymentMethodSectionControllerDelegate> _delegate;
    BOOL _addInProgress;
}

@property (retain, nonatomic) UIColor *linkTextColor;

- (id)identifiers;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)didSelectItem:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
