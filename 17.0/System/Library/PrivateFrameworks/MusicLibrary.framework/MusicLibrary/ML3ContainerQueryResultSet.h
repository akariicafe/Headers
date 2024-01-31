@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet {
    BOOL _needsSorting;
    BOOL _needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    long long _containerPID;
    unsigned long long _entityLimit;
}

- (id)initWithQuery:(id)a0;
- (unsigned long long)entityLimit;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (BOOL)_updateToLibraryCurrentRevision;
- (void)_loadCurrentFullResults;
- (id)sortedBackingStoreForDisplayOrdering;

@end
