@class NSMutableIndexSet;

@interface _UITreeDataSourceSnapshotter : NSObject <_UITreeDataSourceSnapshotter, NSCopying> {
    struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode *__begin_; struct _UIOutlineNode *__end_; struct __compressed_pair<_UIOutlineNode *, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode *__value_; } __end_cap_; } _nodes;
    NSMutableIndexSet *_expandedIndexes;
}

@property (nonatomic) long long count;

- (id)init;
- (id)visualDescription;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)expandedIndexes;
- (BOOL)indexIsVisible:(long long)a0;
- (id)_allIndexes;
- (long long)_binarySearchForGlobalIndex:(long long)a0 startIndex:(long long)a1 endIndex:(long long)a2;
- (long long)_childNodeIndexForGloalIndex:(long long)a0;
- (id)_childrenForParent:(long long)a0;
- (id)_deleteChildNodesForParentNodeIndex:(long long)a0;
- (long long)_indexForInsertingAfterIndex:(long long)a0;
- (long long)_insertCount:(long long)a0 afterIndex:(long long)a1;
- (void)_insertCount:(long long)a0 beforeIndex:(long long)a1;
- (void)_insertSubtreeFromSnapshotter:(id)a0 atIndex:(long long)a1 adjustedIndex:(long long)a2;
- (BOOL)_isNodeIndexVisible:(long long)a0;
- (struct _UIOutlineNode { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })_nextNodeForNodeIndex:(long long *)a0;
- (struct _UIOutlineNode { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; } *)_nodeForGlobalIndex:(long long)a0;
- (long long)_nodeIndexForGlobalIndex:(long long)a0;
- (long long)_parentNodeIndexForNodeIndex:(long long)a0;
- (void)_recomputeExpandedIndexesForDeletedIndexes:(id)a0;
- (void)_recomputeExpandedIndexesForInsertedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_recomputeRangeOffsetForGlobalIndex:(long long)a0;
- (BOOL)_shouldSplitNodeAtInsertionIndex:(long long)a0;
- (id)_snapshotterByNormalizingRangeOffsets;
- (id)_snapshotterByShiftingIndexesByCount:(long long)a0;
- (void)_splitNodeAtInsertionIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })appendChildItemsWithCount:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })appendChildItemsWithCount:(long long)a0 toParentIndex:(long long)a1;
- (id)childrenForParentAtIndex:(long long)a0;
- (id)childrenForParentAtIndex:(long long)a0 recursive:(BOOL)a1;
- (void)collapseIndexes:(id)a0;
- (void)deleteIndexes:(id)a0;
- (void)deleteIndexes:(id)a0 orphanDisposition:(long long)a1;
- (void)expandIndexes:(id)a0;
- (BOOL)hasChildrenForParentAtIndex:(long long)a0;
- (BOOL)indexIsExpanded:(long long)a0;
- (id)indexesForLevel:(long long)a0;
- (id)initWithNodes:(struct vector<_UIOutlineNode, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode *x0; struct _UIOutlineNode *x1; struct __compressed_pair<_UIOutlineNode *, std::allocator<_UIOutlineNode>> { struct _UIOutlineNode *x0; } x2; })a0 count:(long long)a1 expandedIndexes:(id)a2;
- (long long)insertCount:(long long)a0 afterIndex:(long long)a1;
- (long long)insertCount:(long long)a0 afterIndex:(long long)a1 insertionMode:(long long)a2;
- (void)insertCount:(long long)a0 beforeIndex:(long long)a1;
- (long long)insertSubtreeFromSnapshotter:(id)a0 afterIndex:(long long)a1;
- (void)insertSubtreeFromSnapshotter:(id)a0 beforeIndex:(long long)a1;
- (BOOL)isFlat;
- (long long)levelForIndex:(long long)a0;
- (long long)parentForChildAtIndex:(long long)a0;
- (void)replaceChildItemsFromSnapshotter:(id)a0 forParentIndex:(long long)a1;
- (id)rootIndexes;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)a0;
- (id)snapshotterRepresentingSubtreeForIndex:(long long)a0 includingParent:(BOOL)a1;
- (id)visibleIndexes;

@end
