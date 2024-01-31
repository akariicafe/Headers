@class NSMutableArray, NSMutableIndexSet;

@interface _UIUpdateVisibleCellsContext : NSObject {
    NSMutableArray *_sizes;
    NSMutableArray *_attributes;
    NSMutableArray *_indexPaths;
    NSMutableIndexSet *_sectionIndexes;
    long long _visibleCellsRefCount;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
