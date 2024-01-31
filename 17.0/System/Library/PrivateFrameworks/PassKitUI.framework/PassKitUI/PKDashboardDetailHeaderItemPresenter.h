@class UIColor, UIVisualEffect, PKMapsSnapshotManager, NSString, PKPaymentService, PKContactAvatarManager, UIImage, PKObjectDownloader, UICollectionViewCell, PKContactResolver;

@interface PKDashboardDetailHeaderItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKObjectDownloader *_fileDownloader;
    PKPaymentService *_paymentService;
    UICollectionViewCell *_templateCell;
    UIImage *_logoImage;
    UIImage *_logoBackgroundImage;
    UIImage *_heroImage;
    BOOL _hasNetworkAccess;
}

@property (retain, nonatomic) PKMapsSnapshotManager *snapshotManager;
@property (retain, nonatomic) PKContactResolver *contactResolver;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (retain, nonatomic) UIVisualEffect *overlayEffect;
@property (retain, nonatomic) UIColor *shadowColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (Class)itemClass;
- (id)_transactionTypeHeaderCellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)_backgroundImageFromLogoImage:(id)a0;
- (void)_configureCategoryHeaderCell:(id)a0 forItem:(id)a1 isUpdate:(BOOL)a2;
- (void)_configureCell:(id)a0 withRegion:(id)a1 isUpdate:(BOOL)a2;
- (void)_configureInstallmentProductHeaderCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)_configureMerchantHeaderCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)_configurePeerPaymentHeaderCell:(id)a0 forItem:(id)a1;
- (void)_configureTransactionTypeHeaderCell:(id)a0 forItem:(id)a1;
- (void)_downloadLogoForItem:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_installmentProductHeaderCellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)_merchantHeaderCellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)_peerPaymentHeaderCellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)_transactionGroupHeaderCellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)_updateMerchantHeaderImagesOnCell:(id)a0 item:(id)a1;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
