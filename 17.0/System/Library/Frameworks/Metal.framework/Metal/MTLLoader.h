@class NSObject;
@protocol OS_dispatch_queue;

@interface MTLLoader : NSObject {
    void *_global;
    NSObject<OS_dispatch_queue> *_claimQueue;
    struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> { struct __hash_table<std::__hash_value_type<MTLLoadedFile *, id>, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>>, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>>, std::allocator<std::__hash_value_type<MTLLoadedFile *, id>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<MTLLoadedFile *, id>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<MTLLoadedFile *, std::__hash_value_type<MTLLoadedFile *, id>, std::equal_to<MTLLoadedFile *>, std::hash<MTLLoadedFile *>>> { float __value_; } __p3_; } __table_; } _claims;
}

+ (BOOL)ReadHashTable:(unsigned long long)a0 begin:(unsigned int)a1 end:(unsigned int)a2 hashList:(void *)a3 reader:(id /* block */)a4 errorHandler:(id /* block */)a5 handler:(id /* block */)a6;
+ (BOOL)deserializeHashesFromAIRNTHeaderAtOffset:(unsigned long long)a0 headerSize:(unsigned long long)a1 singleHeaderExpected:(BOOL)a2 reader:(id /* block */)a3 errorHandler:(id /* block */)a4 handler:(id /* block */)a5;
+ (BOOL)deserializeObjectFromAIRNTHeaderAtSection:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; } *)a0 reader:(id /* block */)a1 errorHandler:(id /* block */)a2 handler:(id /* block */)a3;
+ (BOOL)deserializePipelinesFromAIRNTHeaderAtOffset:(unsigned long long)a0 headerSize:(unsigned long long)a1 singleHeaderExpected:(BOOL)a2 reader:(id /* block */)a3 errorHandler:(id /* block */)a4 handler:(id /* block */)a5;
+ (BOOL)isAIRHeaderExtLoadCommand:(const void *)a0 headerOffset:(unsigned long long *)a1 headerSize:(unsigned long long *)a2 headerSection:(unsigned int *)a3;

- (id)init;
- (oneway void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
