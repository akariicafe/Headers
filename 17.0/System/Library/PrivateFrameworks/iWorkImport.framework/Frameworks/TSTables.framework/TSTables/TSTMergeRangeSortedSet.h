@interface TSTMergeRangeSortedSet : NSObject {
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> { struct __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::allocator<TSTMergeRangeElem>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<TSTMergeRangeElem, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, TSTMergeRangeElemCompare> { unsigned long long __value_; } __pair3_; } __tree_; } _set;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateMergeRangesUsingBlock:(id /* block */)a0;
- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0 height:(double)a1 paddingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 isCheckbox:(BOOL)a3;

@end
