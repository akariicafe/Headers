@class _UIKeyShortcutHUDCollectionViewManager, UICollectionView, UIVisualEffectView, UICollectionViewSupplementaryRegistration, UIPageControl, UICollectionViewDiffableDataSource, UICollectionViewCellRegistration, UIView, _UIKeyShortcutHUDSeparatorView, _UIKeyShortcutHUDIndexPath, _UIKeyShortcutHUDSearchButton, _UIKeyShortcutHUDCell, UIKeyShortcutHUDMetrics, _UIKeyShortcutHUDSearchBar, NSString, _UIKeyShortcutHUDMenu;
@protocol _UIKeyShortcutHUDToolbarViewControllerDelegate;

@interface _UIKeyShortcutHUDToolbarViewController : UIViewController <_UIKeyShortcutHUDSearchButtonDelegate, _UIKeyShortcutHUDSearchBarDelegate, _UIKeyShortcutHUDCollectionViewManagerClient>

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIView *toolbarContentView;
@property (retain, nonatomic) UIView *categoriesContentView;
@property (retain, nonatomic) _UIKeyShortcutHUDSeparatorView *scrollingSeparatorView;
@property (retain, nonatomic) UIPageControl *categoriesPageControl;
@property (retain, nonatomic) UICollectionViewCellRegistration *categoryCellRegistration;
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *cellSeparatorRegistration;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic, getter=isPreparingSearchTransition) BOOL preparingSearchTransition;
@property (weak, nonatomic) _UIKeyShortcutHUDCell *cellForSearchTransition;
@property (weak, nonatomic) id<_UIKeyShortcutHUDToolbarViewControllerDelegate> delegate;
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *menu;
@property (weak, nonatomic) UIKeyShortcutHUDMetrics *metrics;
@property (readonly, nonatomic) _UIKeyShortcutHUDIndexPath *firstCategoryIndexPath;
@property (retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton;
@property (retain, nonatomic) _UIKeyShortcutHUDSearchBar *searchBar;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_collectionViewLayout;
- (void)_configureCollectionView;
- (void)_configureSeparatorViewAppearance:(id)a0;
- (void)_setupSubviews;
- (BOOL)_shouldHideScrollingSeparatorView;
- (void)categoriesPageControlCurrentPageChanged:(id)a0;
- (void)didCompleteSearchTransition;
- (void)didScrollCollectionView;
- (void)flashCategoryAtIndex:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)hudWillBecomeHidden:(BOOL)a0;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)a0;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)a0;
- (void)performActionForSelectingCellAtIndexPath:(id)a0;
- (void)prepareForSearchTransition:(BOOL)a0;
- (void)searchBar:(id)a0 didUpdateSearchText:(id)a1;
- (void)searchBarDidPressCancelButton:(id)a0;
- (void)searchButtonDidPress:(id)a0;
- (void)selectCategory:(id)a0 withCategoryIndex:(long long)a1;
- (BOOL)selectionFollowsFocusForItemAtIndexPath:(id)a0;
- (BOOL)shouldPersistSelectionForCellAtIndexPath:(id)a0;
- (void)updateScrollingSeparatorViewVisibility;

@end
