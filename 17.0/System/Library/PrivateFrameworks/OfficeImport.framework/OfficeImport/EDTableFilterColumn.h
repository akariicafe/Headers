@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {
    unsigned long long mColumnIndex;
    NSMutableArray *mFilters;
    int mFiltersRelation;
}

- (id)init;
- (void)addFilter:(id)a0;
- (id)description;
- (unsigned long long)filterCount;
- (id)filterAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)columnIndex;
- (void)setColumnIndex:(unsigned long long)a0;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)a0;

@end
