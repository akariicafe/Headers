@class UIFont, NSString, PKMapsSnapshotManager, UIImage, PKPaymentTransactionCollectionViewCell, PKContactAvatarManager, NSCache, NSDateFormatter, PKPaymentTransactionIconGenerator, PKContactResolver;
@protocol PKPaymentDataProvider;

@interface PKTransactionGroupItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKPaymentTransactionCollectionViewCell *_sampleCell;
    UIFont *_transactionCellPrimaryLabelFont;
    UIFont *_transactionCellValueLabelFont;
    UIFont *_transactionCellSecondaryLabelFont;
    UIImage *_emptyImage;
    UIImage *_cashbackImage;
    UIImage *_transactionListImage;
    UIImage *_interestImage;
    UIImage *_appleCardImage;
    UIImage *_refundsImage;
    UIImage *_adjustmentsImage;
    NSCache *_iconsPerMerchantCategory;
    struct CGSize { double width; double height; } _groupSize;
    BOOL _needsSizing;
    NSDateFormatter *_formatterYear;
    NSDateFormatter *_formatterMonth;
    BOOL _useAccessibilityLayout;
    PKPaymentTransactionIconGenerator *_iconGenerator;
}

@property (retain, nonatomic) PKContactResolver *contactResolver;
@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager;
@property (retain, nonatomic) id<PKPaymentDataProvider> paymentDataProvider;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void).cxx_destruct;
- (id)_contactKeysToFetch;
- (Class)itemClass;
- (void)_configureCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3 forSizing:(BOOL)a4;
- (void)_applyTokenFiltersFromItem:(id)a0 toFetcher:(id)a1;
- (void)_updateAvatarOnTransactionCell:(id)a0 withGroup:(id)a1 contact:(id)a2;
- (void)_updatePrimaryLabelOnTransactionCell:(id)a0 withPeerPaymentCounterpartHandle:(id)a1 contact:(id)a2;
- (void)_viewControllerForItem:(id)a0 withCompletion:(id /* block */)a1;
- (id)adjustmentsImage;
- (id)appleCardImage;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cashbackImage;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (id)interestImage;
- (id)refundsImage;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (id)transactionListImage;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
