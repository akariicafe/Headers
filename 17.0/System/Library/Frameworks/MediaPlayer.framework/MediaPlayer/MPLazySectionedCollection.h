@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (retain, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;

- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (id)firstSection;
- (id)lastItem;
- (id)allSections;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (id)lastSection;
- (id)sectionAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)firstItem;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)_safeStateDumpObject;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;

@end
