@class VUIMenuDataSource, NSString, NSArray, VUIMenuSectionHeaderCollectionViewCell, UICollectionViewDiffableDataSource, _UIDiffableDataSourceSectionController, VUILegacyCollectionView, UICollectionViewCell, VUICollectionConfiguration;
@protocol VUIMenuCollectionViewControllerDelegate;

@interface VUIMenuCollectionViewController : UIViewController <UICollectionViewDelegate, VUILegacyCollectionViewDelegate>

@property (retain, nonatomic) VUICollectionConfiguration *collectionConfiguration;
@property (nonatomic) BOOL shouldMarkFirstCategorySelected;
@property (nonatomic) BOOL genresOnlyMenu;
@property (retain, nonatomic) VUILegacyCollectionView *menuCollectionView;
@property (retain, nonatomic) UICollectionViewCell *sizingCell;
@property (retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSArray *mainMenuItems;
@property (retain, nonatomic) NSArray *genreMenuItems;
@property (retain, nonatomic) _UIDiffableDataSourceSectionController *sectionController;
@property (weak, nonatomic) id<VUIMenuCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) VUIMenuDataSource *categories;
@property (nonatomic) BOOL shouldShowLeftBarButton;
@property (nonatomic) BOOL shouldShowBackButton;
@property (nonatomic) BOOL shouldDeselectOnViewAppear;
@property (nonatomic) BOOL isInPrimaryOnlyMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)viewWillLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setTitle:(id)a0;
- (id)_backButton;
- (id)_leftBarButton;
- (BOOL)_menuHasContent;
- (void)_selectFirstMenuItemIfNecessary;
- (void)_applySnapshotsToSectionController:(BOOL)a0;
- (void)_backSelected:(id)a0;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (void)_leftBarButtonSelected:(id)a0;
- (void)_setGenreMenuItemsForCategories:(id)a0;
- (void)_updateNavigationBarPadding;
- (id)initWithCategories:(id)a0 gridConfiguration:(id)a1;
- (void)updateWithCategories:(id)a0;

@end
