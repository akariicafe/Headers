@class NSString, NSArray, PKUISpringAnimationFactory, NSSet, NSMutableDictionary, NSDictionary, PKDashboardTitleHeaderView, UICollectionViewLayout, PKDashboardFooterTextView;
@protocol PKDashboardDelegate, PKDashboardLayout, PKDashboardDataSource;

@interface PKDashboardViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PKDashboardDataSourceDelegate, PKDashboardViewControllerDelegateFlowLayout> {
    NSDictionary *_presentersPerIdentifier;
    struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; } *_presentersOptionalMethods;
    NSDictionary *_presenterMethodsIndexPerIdentifier;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    NSMutableDictionary *_titlesForSection;
    PKDashboardFooterTextView *_sampleFooterView;
    NSMutableDictionary *_footerTextItemsBySection;
    double _lastScrollOffset;
    BOOL _inScrollViewDidScroll;
    NSSet *_visibleCellsExcludingSafeArea;
    UICollectionViewLayout<PKDashboardLayout> *_customLayout;
    BOOL _contentIsLoaded;
    BOOL _shouldPresentAllContent;
    BOOL _presentationAnimated;
    BOOL _isHidingContent;
    PKUISpringAnimationFactory *_collectionViewFactory;
    NSMutableDictionary *_blocksOnVisibilityChange;
}

@property (readonly, nonatomic) id<PKDashboardDataSource> dataSource;
@property (weak, nonatomic) id<PKDashboardDelegate> delegate;
@property (readonly, nonatomic) BOOL isPresentingContent;
@property (nonatomic) BOOL shouldUseClearNavigationBar;
@property (readonly, nonatomic) NSArray *actualIndexPathsForSelectedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundColor;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateContent;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)reloadSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)contentIsLoaded;
- (id)_actualItemIndexPathForIndexPath:(id)a0;
- (id)_footerViewAtIndexPath:(id)a0 isCell:(BOOL)a1;
- (id)_headerViewAtIndexPath:(id)a0 isCell:(BOOL)a1;
- (void)_hideAllContentAnimated:(BOOL)a0;
- (id)_internalIndexPathForItemIndexPath:(id)a0;
- (BOOL)_isCellVisibleAtIndexPath:(id)a0 withTopSafeArea:(double)a1 contentOffset:(double)a2;
- (BOOL)_isIndexPathAFooter:(id)a0;
- (BOOL)_isIndexPathAHeader:(id)a0;
- (BOOL)_isListSectionAtIndex:(long long)a0;
- (void)_presentAllContent;
- (void)_setupPresenters:(id)a0;
- (void)_updateNavigationBarAppearance;
- (void)_updateNavigationBarVisibility;
- (BOOL)collectionView:(id)a0 layout:(id)a1 hasFooterForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 hasHeaderForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 isListSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 layout:(id)a1 trailingSwipeActionsConfigurationForItemAtIndexPath:(id)a2;
- (id)initWithDataSource:(id)a0 presenters:(id)a1 layout:(id)a2;
- (void)itemChanged:(id)a0 atIndexPath:(id)a1;
- (BOOL)itemIsIndependentInCollectionView:(id)a0 atIndexPath:(id)a1;
- (BOOL)itemIsStackableInCollectionView:(id)a0 atIndexPath:(id)a1;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; })methodsForItemIdentifier:(id)a0;
- (void)reloadNavigationBarAnimated:(BOOL)a0;
- (void)setActionForVisibilityChange:(id /* block */)a0 indexPath:(id)a1;
- (void)shouldPresentAllContent:(BOOL)a0 animated:(BOOL)a1;

@end
