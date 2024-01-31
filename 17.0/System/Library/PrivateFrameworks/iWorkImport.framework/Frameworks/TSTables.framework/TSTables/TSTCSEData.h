@class NSMutableDictionary, NSMutableArray;

@interface TSTCSEData : NSObject {
    struct unordered_map<unsigned long, TSTCSENodeData, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, TSTCSENodeData>>> { struct __hash_table<std::__hash_value_type<unsigned long, TSTCSENodeData>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, TSTCSENodeData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, TSTCSENodeData>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, TSTCSENodeData>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _nodesToData;
    NSMutableDictionary *_hashesToNodeSets;
    NSMutableArray *_retainedExpressions;
}

- (id)init;
- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)expressionSize:(id)a0;
- (id)expressionsIdenticalToExpression:(id)a0;
- (id)expressionsMatchingCSENodeData:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a0 forNode:(id)a1;
- (void)recordExpression:(id)a0 data:(struct TSTCSENodeData { unsigned long long x0; unsigned long long x1; })a1;

@end
