@class TSPTemporaryObjectContextDelegate, TSPObjectContext;

@interface TSTCellDictionary : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock[20];
    struct unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> { struct __hash_table<std::__hash_value_type<TSUCellCoord, TSTCell *>, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>>, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>>, std::allocator<std::__hash_value_type<TSUCellCoord, TSTCell *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSUCellCoord, TSTCell *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSUCellCoord, std::__hash_value_type<TSUCellCoord, TSTCell *>, std::equal_to<TSUCellCoord>, std::hash<TSUCellCoord>>> { float __value_; } __p3_; } __table_; } _cellsByCoord[20];
    struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>> { unsigned long long __value_; } __pair3_; } __tree_; } _rowsPerColumn; } _cellCoordsToStyleUpgradeForFormulatext[20];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hasRichTextLock;
}

@property (readonly, nonatomic) TSPTemporaryObjectContextDelegate *temporaryObjectContextDelegate;
@property (readonly, nonatomic) TSPObjectContext *temporaryContext;
@property (readonly, nonatomic) BOOL hasAnyRichTextCells;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyBlockToAllCells:(id /* block */)a0;
- (id)cellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (void)removeAllCells;
- (void)setCell:(id)a0 atCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a1;
- (id)cellMap;
- (struct TSCECellCoordSet { struct map<unsigned short, TSUIndexSet, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, TSUIndexSet>>> { struct __tree<std::__value_type<unsigned short, TSUIndexSet>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, TSUIndexSet>>> { void *x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, TSUIndexSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, TSUIndexSet>, std::less<unsigned short>>> { unsigned long long x0; } x2; } x0; } x0; })allCellCoords;
- (id)concurrentCellMapForTable:(id)a0;
- (BOOL)hasCellAtCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (BOOL)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (BOOL)shouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;
- (void)upgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

@end
