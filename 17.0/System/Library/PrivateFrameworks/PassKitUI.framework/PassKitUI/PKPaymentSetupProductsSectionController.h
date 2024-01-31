@class PKPaymentProvisioningController, NSArray, NSString, NSMutableDictionary, NSDictionary, NSLocale, NSObject, NSCharacterSet, CLLocation, PKPaymentSetupProductsSectionListItem;
@protocol PKPaymentSetupProductsSectionControllerDelegate, OS_dispatch_queue;

@interface PKPaymentSetupProductsSectionController : PKPaymentSetupListSectionController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentSetupProductsSectionListItem *_addADifferentCardListItem;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSDictionary *_sectionIdentifierToItemIdentifierMapping;
    NSArray *_orderedSectionIdentifiers;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSCharacterSet *_tokenizerCharacterSet;
    struct CGSize { double width; double height; } _iconSize;
    CLLocation *_cachedLocation;
    NSLocale *_currentLocale;
    NSString *_primaryRegion;
    NSString *_primaryCountryName;
    NSString *_secondaryRegion;
    NSString *_secondaryCountryName;
    BOOL _showSectionHeaders;
    BOOL _didHideLoadingIndicators;
}

@property (weak, nonatomic) id<PKPaymentSetupProductsSectionControllerDelegate> delegate;

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)updateWithPaymentSetupProducts:(id)a0;
- (id)_cleanedSearchTermsFromString:(id)a0;
- (id)_listItemFromProduct:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)_needsManualEntryButton;
- (id)_sectionIdentifierForProduct:(id)a0 alwaysWantsHeaders:(BOOL *)a1 wantsAddAdifferentCardButton:(BOOL *)a2;
- (void)_updateItemWithIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1 animated:(BOOL)a2;
- (void)applySearchString:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (void)hideLoadingIndicatorsAnimated:(BOOL)a0;
- (id)initWithProvisoningController:(id)a0;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
