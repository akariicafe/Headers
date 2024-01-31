@class NSArray, NSString, UICollectionViewDiffableDataSource, VUILibraryLockupViewCell, VUIMediaEntitiesDataSource, VUIMediaEntity;
@protocol VUILibraryShelfCollectionViewControllerDelegate;

@interface VUILibraryShelfCollectionViewController : VUIShelfViewController {
    VUILibraryLockupViewCell *_sizingCell;
}

@property (copy, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *headerSubtitle;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) VUIMediaEntity *lastSelectedMediaEntity;
@property (nonatomic) BOOL disableSeeAllButton;
@property (weak, nonatomic) id<VUILibraryShelfCollectionViewControllerDelegate> delegate;
@property (readonly, nonatomic) VUIMediaEntitiesDataSource *dataSource;
@property (nonatomic) long long shelfType;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)_updateHeaderView;
- (void)updateWithDataSource:(id)a0;
- (void)_headerTapped:(id)a0;
- (struct CGSize { double x0; double x1; })_configureSizingCellWithEntity:(id)a0;
- (id)_attributedHeaderTitle;
- (double)_computeBottomMargin;
- (id)_createDiffableDataSourceForCollectionView:(id)a0;
- (id)_createDiffableDataSourceSnapshot;
- (void)_didPressSeeAllButton:(id)a0;
- (id)_getEntityIdentifiersFromEntities;
- (void)_reloadMediaEntity:(id)a0;
- (BOOL)_shouldHideDisclosureButton;
- (void)configureWithCollectionView:(id)a0;
- (void)setHeaderTitle:(id)a0 andSubtitle:(id)a1;

@end
