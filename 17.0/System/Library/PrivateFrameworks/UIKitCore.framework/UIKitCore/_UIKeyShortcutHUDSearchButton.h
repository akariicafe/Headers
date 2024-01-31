@class UICollectionView, NSString, _UIKeyShortcutHUDCollectionViewManager, UICollectionViewDiffableDataSource, _UIKeyShortcutHUDToolbarViewController, UICollectionViewCellRegistration, _UIKeyShortcutHUDIndexPath;
@protocol _UIKeyShortcutHUDSearchButtonDelegate;

@interface _UIKeyShortcutHUDSearchButton : UIView <_UIKeyShortcutHUDCollectionViewManagerClient>

@property (retain, nonatomic) UICollectionViewCellRegistration *searchCellRegistration;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (weak, nonatomic) id<_UIKeyShortcutHUDSearchButtonDelegate> delegate;
@property (weak, nonatomic) _UIKeyShortcutHUDToolbarViewController *toolbarVC;
@property (readonly, nonatomic) _UIKeyShortcutHUDIndexPath *searchButtonIndexPath;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_collectionViewLayout;
- (void)_configureCollectionView;
- (void)_setupSubviews;
- (void)didCompleteSearchTransition;
- (void)didScrollCollectionView;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)a0;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)a0;
- (void)performActionForSelectingCellAtIndexPath:(id)a0;
- (void)prepareForSearchTransition:(BOOL)a0;
- (BOOL)selectionFollowsFocusForItemAtIndexPath:(id)a0;
- (BOOL)shouldPersistSelectionForCellAtIndexPath:(id)a0;

@end
