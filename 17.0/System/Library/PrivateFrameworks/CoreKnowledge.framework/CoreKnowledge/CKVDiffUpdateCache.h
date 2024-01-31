@interface CKVDiffUpdateCache : NSObject {
    struct unordered_set<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct __hash_table<long long, std::hash<long long>, std::equal_to<long long>, std::allocator<long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<long long, void *> *>, std::allocator<std::__hash_node<long long, void *>>> { struct __hash_node_base<std::__hash_node<long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<long long>> { float __value_; } __p3_; } __table_; } _unmodified_set;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _modified_field_types;
}

- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id).cxx_construct;
- (id)modifiedFieldTypes;
- (void).cxx_destruct;
- (BOOL)addModifiedItem:(id)a0;
- (BOOL)addUnmodifiedItemIdHash:(id)a0;
- (BOOL)hasUnmodifiedItemIdHash:(id)a0;
- (unsigned long long)unmodifiedItemCount;

@end
