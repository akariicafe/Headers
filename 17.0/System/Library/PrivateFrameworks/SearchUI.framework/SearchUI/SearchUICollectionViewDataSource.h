@class NSString, SearchUICollectionViewController, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUICollectionViewDataSource : UICollectionViewDiffableDataSource <SearchUIAsyncSectionLoaderDelegate>

@property (weak) SearchUICollectionViewController *controller;
@property (retain, nonatomic) NSMutableSet *registeredCellIdentifiers;
@property (retain) NSObject<OS_dispatch_queue> *applyQueue;
@property int numberOfUpdatesInProgress;
@property (readonly) BOOL hasFocusableElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeRowModel:(id)a0 completion:(id /* block */)a1;
- (void)reloadSection:(id)a0 animated:(BOOL)a1;
- (void)removeSectionModel:(id)a0 completion:(id /* block */)a1;
- (id)initWithController:(id)a0;
- (void)updateWithSnapshot:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateWithSnapshot:(id)a0;
- (id)cellForRowModel:(id)a0 atIndexPath:(id)a1;
- (id)currentSnapshotLayoutConfiguration;
- (void)reloadModel;
- (void)rebuildSnapshotForAsyncLoaders:(id)a0;
- (void)applySnapshot:(id)a0 animated:(BOOL)a1 skipsDiffing:(BOOL)a2 completion:(id /* block */)a3;
- (id)layoutSectionForSectionModel:(id)a0 layoutEnvironment:(id)a1 attributes:(id)a2;
- (id)pointerStringFrom:(id)a0;
- (id)rebuildAsyncLoaderResult:(id)a0 forCardSections:(id)a1;
- (void)registerCellForRowModel:(id)a0;
- (id)registerFooterView:(id)a0;
- (void)registerSupplementaryViews;
- (void)reloadSection:(id)a0 animated:(BOOL)a1 reconfigureExisting:(BOOL)a2;
- (void)removeSectionContaining:(id)a0 completion:(id /* block */)a1;
- (id)reuseIdentifierForFooterView:(id)a0;
- (id)reuseIdentifierForRowModel:(id)a0;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;

@end
