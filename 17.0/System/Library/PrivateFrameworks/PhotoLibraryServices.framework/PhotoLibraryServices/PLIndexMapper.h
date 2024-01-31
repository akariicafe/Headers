@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : NSObject {
    id<PLIndexMapperDataSource> _dataSource;
}

- (id)backingIndexesForIndexes:(id)a0;
- (id)initWithDataSource:(id)a0;
- (id)indexesForBackingIndexes:(id)a0;
- (BOOL)applyContainerChangeNotification:(id)a0 changeTypes:(int)a1 toFilteredIndexes:(id)a2;
- (unsigned long long)indexForBackingIndex:(unsigned long long)a0;
- (unsigned long long)backingIndexForIndex:(unsigned long long)a0;

@end
