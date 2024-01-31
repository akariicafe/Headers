@class NSArray;

@interface _UITraitTokenSet : NSObject <NSCopying, NSFastEnumeration> {
    struct unordered_set<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { struct __hash_table<unsigned long, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<unsigned long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long, void *> *>, std::allocator<std::__hash_node<unsigned long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long>> { float __value_; } __p3_; } __table_; } _set;
    NSArray *_cachedArrayRepresentation;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
