@class NSObject, TSCECalculationEngine;
@protocol TSCEFormulaReplacing, OS_dispatch_queue, OS_dispatch_group;

@interface TSCEFormulasToSet : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _removeReplaceMutex;
    id<TSCEFormulaReplacing> _minion;
    unsigned char _options;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>> { unsigned long long __value_; } __pair3_; } __tree_; } _coordsForOwnerUid; } _formulasToRemove;
    struct TSCECellRefSet { struct map<TSKUIDStruct, TSCECellCoordSet, std::less<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, TSCECellCoordSet>>> { struct __tree<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>, std::allocator<std::__value_type<TSKUIDStruct, TSCECellCoordSet>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<TSKUIDStruct, TSCECellCoordSet>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<TSKUIDStruct, std::__value_type<TSKUIDStruct, TSCECellCoordSet>, std::less<TSKUIDStruct>>> { unsigned long long __value_; } __pair3_; } __tree_; } _coordsForOwnerUid; } _formulasToReset;
    struct unordered_map<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>, std::allocator<std::pair<const TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> { struct __hash_table<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>, std::allocator<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::hash<TSKUIDStruct>, std::equal_to<TSKUIDStruct>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<TSKUIDStruct, std::__hash_value_type<TSKUIDStruct, std::unordered_map<TSUCellCoord, TSCEFormulaToReplace>>, std::equal_to<TSKUIDStruct>, std::hash<TSKUIDStruct>>> { float __value_; } __p3_; } __table_; } _formulasToReplace;
    NSObject<OS_dispatch_queue> *_precedentLoadingQueue;
    NSObject<OS_dispatch_group> *_precedentLoadingGroup;
    BOOL _flushAllInProgress;
    BOOL _runningInBackground;
    NSObject<OS_dispatch_queue> *_backgroundProcessingQueue;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, nonatomic) BOOL isEmpty;

- (void)willClose;
- (void)commonInit;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeAllFormulasFromOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)removeFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)replaceFormulaAt:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 precedents:(id)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; id x6; })a3;
- (void)resetFormulaAt:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)_flushFormulasToRemoveWithDepTracker:(void *)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushFormulasToReplaceWithDepTracker:(void *)a0 startTime:(id)a1 timeout:(double)a2;
- (void)_flushFormulasToResetWithDepTracker:(void *)a0 startTime:(id)a1 timeout:(double)a2;
- (void)flushAllFormulaChanges;
- (BOOL)flushFormulaChangesForSeconds:(double)a0;
- (void)flushRemoveFormulas;
- (void)flushReplaceFormulas;
- (void)flushResetFormulas;
- (id)initWithCalcEngine:(id)a0 forMinion:(id)a1 options:(unsigned char)a2;
- (void)processInBackgroundIfNecessary;
- (void)removeFormulasAt:(const void *)a0;
- (void)removeFormulasAt:(const void *)a0 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a1 removeOutstandingReplaces:(BOOL)a2;
- (void)removeFormulasFromRange:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)replaceFormula:(id)a0 atCellCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a1 inOwner:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a2 replaceOptions:(struct TSCEReplaceFormulaOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x5; id x6; })a3;
- (void)waitForAllPrecedentsToLoad;

@end
