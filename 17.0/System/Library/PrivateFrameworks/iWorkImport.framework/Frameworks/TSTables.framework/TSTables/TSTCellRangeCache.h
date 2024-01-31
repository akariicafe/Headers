@interface TSTCellRangeCache : NSObject {
    struct unordered_map<unsigned long, TSUModelCellRect, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSUModelCellRect>>> { struct __hash_table<std::__hash_value_type<unsigned long, TSUModelCellRect>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, TSUModelCellRect>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSUModelCellRect>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSUModelCellRect>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _mergeRanges;
    struct TSCECellRangeRTree { struct TSCECellRangeRTree_Int { struct Node *m_root; } _rTree; } _mergeRangesRTree;
    struct TSCEBitGrid { struct vector<TSCEBitGridTile *, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__begin_; struct TSCEBitGridTile **__end_; struct __compressed_pair<TSCEBitGridTile **, std::allocator<TSCEBitGridTile *>> { struct TSCEBitGridTile **__value_; } __end_cap_; } _tiles; unsigned long long _count; unsigned long long _lastTileFoundAtIndex; } _mergedAtCellIds;
    void *_transaction;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)clear;
- (void)dealloc;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })cellRangeAtIndex:(unsigned long long)a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRanges;
- (id)mergedGridIndicesForDimension:(long long)a0;
- (void)collectIndexes:(id)a0 forRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1;
- (void)commitRewritingTransaction;
- (void)enumerateCacheItemsIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 includeCrumbs:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateCacheItemsIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateCacheItemsIntersectingBaseCellRegion:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateCacheItemsUsingBlock:(id /* block */)a0;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })expandBaseCellRectToCoverMergedCells:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (id)expandBaseCellRegionToCoverMergedCells:(id)a0;
- (BOOL)hasRangeSpanningRowsForCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)hasRangeSpanningRowsForCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)hasRangeSpanningRowsForCellRegion:(id)a0;
- (id)indexesForBaseCellRegion:(id)a0;
- (id)indexesForRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesIntersectingBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 includeCrumbs:(BOOL)a1;
- (struct vector<TSUModelCellRect, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; struct TSUModelCellRect *x1; struct __compressed_pair<TSUModelCellRect *, std::allocator<TSUModelCellRect>> { struct TSUModelCellRect *x0; } x2; })mergeRangesIntersectingBaseCellRegion:(id)a0;
- (struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })mergedRangeForBaseCellCoord:(struct TSUModelCellCoord { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; })a0;
- (void)openRewritingTransaction;
- (void)p_updateIndexesForReplacingRangeAtIndex:(unsigned long long)a0 withRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a1;
- (BOOL)partiallyIntersectsBaseCellRect:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0;
- (BOOL)partiallyIntersectsBaseCellRegion:(id)a0;
- (void)removeCellRangeAtIndex:(unsigned long long)a0;
- (void)setCellRange:(struct TSUModelCellRect { struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; })a0 atIndex:(unsigned long long)a1;

@end
