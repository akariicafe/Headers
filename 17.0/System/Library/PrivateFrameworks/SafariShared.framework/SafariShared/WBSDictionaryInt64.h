@interface WBSDictionaryInt64 : NSObject <NSCoding, NSSecureCoding, NSCopying> {
    struct unordered_map<long long, long long, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, long long>>> { struct __hash_table<std::__hash_value_type<long long, long long>, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>, std::allocator<std::__hash_value_type<long long, long long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long long, long long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<long long, long long>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long long, std::__hash_value_type<long long, long long>, std::hash<long long>, std::equal_to<long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<long long, std::__hash_value_type<long long, long long>, std::equal_to<long long>, std::hash<long long>>> { float __value_; } __p3_; } __table_; } _map;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const void *map;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)copy;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMap:(const void *)a0;
- (id)initWithMovableMap:(void *)a0;

@end
