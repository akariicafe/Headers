@class PKPaymentDigitalIssuanceMetadata, NSArray, UIImage, PKPaymentSetupChooseProductListItem, UICollectionViewCellRegistration;
@protocol PKPaymentSetupChooseProductListSectionControllerDelegate;

@interface PKPaymentSetupChooseProductListSectionController : PKDynamicListSectionController {
    PKPaymentSetupChooseProductListItem *_postPaidItem;
    PKPaymentSetupChooseProductListItem *_autoTopUpItem;
    NSArray *_balanceAndCommutePlansItems;
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKPaymentSetupChooseProductListSectionControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *cardImage;

- (void).cxx_destruct;
- (id)defaultListLayout;
- (void)didSelectItem:(id)a0;
- (void)_generateItems;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithImage:(id)a0 digitalIssuanceMetadata:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)showLoadingIndicatorsForItemIdentifier:(id)a0 show:(BOOL)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
