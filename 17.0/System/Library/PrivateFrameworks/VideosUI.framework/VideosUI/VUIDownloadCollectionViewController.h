@class VUIDownloadCollectionViewCell, NSString, VUIViewControllerContentPresenter, NSDictionary, UICollectionViewDiffableDataSource, NSMutableArray, UIAlertController, VUILegacyCollectionView, UIBarButtonItem, VUIDownloadDataSource;

@interface VUIDownloadCollectionViewController : UIViewController <UICollectionViewDelegate, VUIDownloadDataSourceDelegate, VUILegacyCollectionViewDelegate>

@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) VUILegacyCollectionView *collectionView;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) VUIDownloadCollectionViewCell *sizingCell;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *selectAllBarButtonItem;
@property (retain, nonatomic) NSMutableArray *downloadEntities;
@property (retain, nonatomic) NSDictionary *identifierToDownloadEntityDictionary;
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove;
@property (nonatomic) double cellWidth;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL isSelectingAll;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (nonatomic) double lastViewWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)loadView;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_cancelPressed;
- (void)downloadManager:(id)a0 downloadsDidChange:(id)a1;
- (id)_identifiersForDownloadEntities;
- (void)_selectAllCells;
- (void)_batchSelectToggled;
- (void)_clearSelections;
- (double)_computeBottomMargin;
- (id)_configureAlertController;
- (void)_configureNavigationBarForEditingMode;
- (id)_createCollectionView;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createIdentifierToDownloadEntityDictionary;
- (id)_deleteActionTitleString;
- (void)_deleteDownloadEntities:(id)a0;
- (void)_deleteMediaEntitiesInDownloadEntities:(id)a0;
- (void)_editToggled;
- (void)_enterEditingMode;
- (void)_exitEditingMode;
- (void)_updateAllVisibleCellsForEditingMode;
- (void)_updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateNavigationBarPadding;
- (void)_updateSelectAllBarButtonItemIfNecessary;
- (void)downloadCellDidRequestCancelDownload:(id)a0;
- (void)downloadManager:(id)a0 downloadedFetchDidFinishWithEntities:(id)a1;

@end
