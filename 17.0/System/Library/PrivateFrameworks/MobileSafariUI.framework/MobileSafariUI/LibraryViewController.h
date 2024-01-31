@class UIView, LibraryItemController, NSArray, NSString, LibraryConfiguration, UICollectionViewDiffableDataSource, UICollectionView, WebBookmarkCollection;
@protocol LibraryViewControllerDelegate;

@interface LibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, LibraryContentObserver> {
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_floatingCollectionViewDataSource;
    UICollectionView *_floatingCollectionView;
    UIView *_separator;
    struct { BOOL needsReload; BOOL needsReloadForProfileSwitcher; BOOL animated; } _reloadFlags;
}

@property (weak, nonatomic) id<LibraryViewControllerDelegate> delegate;
@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (retain, nonatomic) LibraryConfiguration *configuration;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (retain, nonatomic) LibraryItemController *selectedItemController;
@property (retain, nonatomic) LibraryItemController *presentedItemController;
@property (readonly, nonatomic) NSArray *profilesInSwitcherMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemsAtIndexPaths:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)updateSelection;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)collectionView:(id)a0 performPrimaryActionForItemAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForFloatingCollectionView;
- (void)librarySectionContentDidChange:(id)a0;
- (void)_applySnapshotForSection:(id)a0 animated:(BOOL)a1;
- (void)_collectionViewDidSelectItem:(id)a0 atIndexPath:(id)a1;
- (id)_diffableDataSourceForCollectionView:(id)a0;
- (void)_enumerateItemControllersWithBlock:(id /* block */)a0;
- (void)_layOutFloatingViews;
- (void)_reloadFloatingSectionControllersImmediately;
- (void)_reloadSectionControllersImmediatelyAnimated:(BOOL)a0;
- (id)_swipeActionsConfigurationForIndexPath:(id)a0;
- (void)collectionViewContentSizeDidChange:(id)a0;
- (void)reloadExpansionStateForItem:(id)a0 inSection:(id)a1;
- (void)reloadSectionControllersIfNeeded;
- (void)setNeedsReloadForProfileSwitcher;
- (void)setNeedsReloadSectionControllersAnimated:(BOOL)a0;
- (void)updateSelectionByIgnoringExistingSelection:(BOOL)a0;

@end
