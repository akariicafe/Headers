@class NSArray, NSSet, __UIDiffableDataSource, NSMapTable, _UIDiffableDataSourceSectionControllerHandlers;
@protocol _UIDiffableDataSourceSectionControllerDelegate;

@interface _UIDiffableDataSourceSectionController : NSObject <NSCopying> {
    __UIDiffableDataSource *_dataSource;
    NSMapTable *_snapshotsMap;
    id<_UIDiffableDataSourceSectionControllerDelegate> _delegate;
}

@property (readonly, nonatomic) NSArray *itemRenderers;
@property (readonly, nonatomic) NSSet *associatedSectionIdentifiers;
@property (copy, nonatomic) _UIDiffableDataSourceSectionControllerHandlers *handlers;

- (id)snapshotForSection:(id)a0;
- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 completion:(id /* block */)a3;
- (id)delegate;
- (id)_collectionView;
- (void).cxx_destruct;
- (void)setDataSource:(id)a0;
- (void)setDelegate:(id)a0;
- (id)dataSource;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_queryClientShouldCollapseItem:(id)a0;
- (id)initWithDiffableDataSourceImpl:(id)a0;
- (void)__applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 viewPropertyAnimator:(id)a3 animationsProvider:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2 viewPropertyAnimator:(id)a3 animationsProvider:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_configureCell:(id)a0 forItem:(id)a1;
- (void)_configureForDataSource:(id)a0;
- (void)_configureForItemRenderersIfNeeded:(id)a0;
- (id /* block */)_customCollapseExpandAnimationsForSnapshot:(id)a0 initialSectionSnapshot:(id)a1 finalSectionSnapshot:(id)a2 viewPropertyAnimator:(id)a3 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 sectionIndex:(long long)a5;
- (id)_extantMutableSnapshotForItem:(id)a0;
- (id)_extantMutableSnapshotForSection:(id)a0;
- (id)_parentFocusItemForItem:(id)a0;
- (BOOL)_performDisclosureAction:(unsigned long long)a0 forItem:(id)a1;
- (BOOL)_queryClientShouldExpandItem:(id)a0;
- (BOOL)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)a0;
- (id)_queryClientSnapshotForExpandingParentItemForItem:(id)a0 currentSectionSnapshot:(id)a1;
- (void)_queryClientWillCollapseItem:(id)a0;
- (void)_queryClientWillExpandItem:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (BOOL)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)a0 finalSnapshot:(id)a1;
- (id)_snapshotForSectionContainingItem:(id)a0;
- (BOOL)_snapshotHasExpandOrCollapseUpdates:(id)a0;
- (id)_snapshotsMap;
- (void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)a0;
- (void)_updateSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)applySnapshot:(id)a0 toSection:(id)a1 animatingDifferences:(BOOL)a2;
- (void)applySnapshot:(id)a0 toSection:(id)a1 customAnimationsProvider:(id /* block */)a2;
- (void)applySnapshot:(id)a0 toSection:(id)a1 viewPropertyAnimator:(id)a2 customAnimationsProvider:(id /* block */)a3;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)initWithDiffableDataSource:(id)a0;
- (id)initWithItemRenderers:(id)a0;
- (id)initWithItemRenderers:(id)a0 associatedSectionIdentifiers:(id)a1;
- (id)initWithItemRenderers:(id)a0 associatedSectionIdentifiers:(id)a1 snapshotsMap:(id)a2 dataSource:(id)a3;
- (id)snapshotForItem:(id)a0;

@end
