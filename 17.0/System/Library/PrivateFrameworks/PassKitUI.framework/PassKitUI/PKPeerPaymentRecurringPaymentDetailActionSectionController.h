@class NSArray, UICollectionViewCellRegistration;
@protocol PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate;

@interface PKPeerPaymentRecurringPaymentDetailActionSectionController : PKDynamicListSectionController {
    unsigned long long _action;
    BOOL _actionInProgress;
    NSArray *_rowItems;
    UICollectionViewCellRegistration *cellRegistration;
}

@property (nonatomic) unsigned long long status;
@property (readonly, weak, nonatomic) id<PKPeerPaymentRecurringPaymentDetailActionSectionControllerDelegate> delegate;

- (id)identifiers;
- (void).cxx_destruct;
- (id)cellRegistration;
- (void)setCellRegistration:(id)a0;
- (void)didSelectItem:(id)a0;
- (id)_actionSectionIdentifier;
- (void)_decorateListCell:(id)a0 forItem:(id)a1;
- (id)_spinnerAccessory;
- (id)initWithAction:(unsigned long long)a0 delegate:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)reloadItemsAnimated:(BOOL)a0;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
