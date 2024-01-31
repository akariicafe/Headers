@class NSString;

@interface OUPointCloud : NSObject <OUPointCloud> {
    struct OUPointCloudCpp { struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } rgb; struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } xyz; struct vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned char * __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } labels; struct vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__begin_; void *__end_; struct __compressed_pair<unsigned short * __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> { void *__value_; } __end_cap_; } votes; } point_cloud;
    struct unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>> { struct __hash_table<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned int __attribute__((ext_vector_type(2)))>, std::equal_to<std::string>, std::hash<std::string>>> { float __value_; } __p3_; } __table_; } pointRangeOfKeyframes;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const void *points;
@property (readonly, nonatomic) const void *semanticLabels;
@property (readonly, nonatomic) const void *semanticVotes;
@property (readonly, nonatomic) void *colors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (id).cxx_construct;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)append:(unsigned long long)a0 points:(const void *)a1 semanticLabels:(const void *)a2 semanticVotes:(const void *)a3;
- (void)append:(unsigned long long)a0 points:(const void *)a1 semanticLabels:(const void *)a2 semanticVotes:(const void *)a3 colors:(const void *)a4;
- (const void *)getCpp;
- (id)initWithCount:(unsigned long long)a0 points:(const void *)a1 semanticLabels:(const void *)a2 semanticVotes:(const void *)a3;
- (id)initWithCount:(unsigned long long)a0 points:(const void *)a1 semanticLabels:(const void *)a2 semanticVotes:(const void *)a3 colors:(const void *)a4;
- (void)resample:(unsigned long long)a0;

@end
