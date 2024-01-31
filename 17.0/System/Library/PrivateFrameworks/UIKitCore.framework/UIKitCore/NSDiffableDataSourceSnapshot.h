@class NSArray, __UIDiffableDataSourceSnapshot;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying>

@property (readonly, nonatomic) __UIDiffableDataSourceSnapshot *impl;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property (readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;

- (void)validateIdentifiers;
- (id)init;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)appendItemsWithIdentifiers:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (id)state;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)deleteAllItems;
- (long long)numberOfItemsInSection:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)initWithState:(id)a0;
- (id)description;
- (id)initWithDataSource:(id)a0;
- (id)_identifierBeforeIdentifier:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)_initWithImpl:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)identifierForIndexPath:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)indexPathForIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_identifierAfterIdentifier:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sectionGlobalItemRangeForSection:(long long)a0;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;

@end
