@class NSMutableArray;
@protocol _UIDiffableDataSourceState;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {
    id<_UIDiffableDataSourceState> _state;
    NSMutableArray *_pendingSnapshotUpdates;
}

- (id)indexPathForItemIdentifier:(id)a0;
- (void)appendSectionWithIdentifier:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)reconfiguredItemIdentifiers;
- (id)sectionIdentifierForIndex:(long long)a0;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)init;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)itemIdentifierForIndexPath:(id)a0;
- (void)_commitUpdateAtomic:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (id)_identifiersForSectionsOrItems:(BOOL)a0 reconfiguredOrReloaded:(BOOL)a1;
- (id)state;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (id)reloadedSectionIdentifiers;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)deleteAllItems;
- (long long)numberOfItemsInSection:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)initWithState:(id)a0;
- (id)description;
- (id)itemIdentifiers;
- (long long)numberOfItems;
- (long long)numberOfSections;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_prepareForApplyToDataSource;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)reloadedItemIdentifiers;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)pendingSnapshotUpdates;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (id)sectionIdentifiers;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;

@end
