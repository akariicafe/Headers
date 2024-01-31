@class NSMutableDictionary, NSMutableArray;
@protocol PKPaymentSetupCategoriesSectionControllerDelegate;

@interface PKPaymentSetupCategoriesSectionController : PKPaymentSetupListSectionController {
    NSMutableDictionary *_sectionIdentifierToSectionTitleMapping;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifiersToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    struct CGSize { double width; double height; } _iconSize;
    unsigned long long _currentConfiguredRequirements;
    BOOL _didHideLoadingIndicators;
    BOOL _hasCardsOnFileSelectable;
}

@property (weak, nonatomic) id<PKPaymentSetupCategoriesSectionControllerDelegate> delegate;

- (id)init;
- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_listItemForItemIdentifier:(id)a0 paymentSetupProductModel:(id)a1;
- (void)_updateItemIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1 animated:(BOOL)a2;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (void)hideLoadingIndicatorsAnimated:(BOOL)a0;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (BOOL)updateWithRequirements:(unsigned long long)a0 provisioningController:(id)a1 paymentSetupProductModel:(id)a2 forceProductConfiguration:(BOOL)a3;

@end
