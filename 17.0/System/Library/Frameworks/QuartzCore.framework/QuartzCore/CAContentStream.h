@class NSObject, CAContentStreamOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CAContentStream : NSObject {
    CAContentStreamOptions *_options;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _includedContexts;
    struct unordered_map<unsigned int, unsigned int, std::hash<unsigned int>, std::equal_to<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { struct __hash_table<std::__hash_value_type<unsigned int, unsigned int>, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>, std::allocator<std::__hash_value_type<unsigned int, unsigned int>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned int, unsigned int>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::hash<unsigned int>, std::equal_to<unsigned int>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned int, std::__hash_value_type<unsigned int, unsigned int>, std::equal_to<unsigned int>, std::hash<unsigned int>>> { float __value_; } __p3_; } __table_; } _excludedContexts;
    struct small_vector<ContentStreamClientFrame, 8UL> { struct ContentStreamClientFrame *_begin; struct ContentStreamClientFrame *_end; struct ContentStreamClientFrame *_fixedStorage; unsigned long long _capacity; union { struct type { unsigned char __lx[16]; } storage[8]; struct ContentStreamClientFrame { struct __IOSurface *iosurface; unsigned int id; unsigned int port; } flat_storage[0]; } ; } _seen_surfaces;
    unsigned int _serverPort;
    struct ClientIPC { unsigned int port; unsigned int task; NSObject<OS_dispatch_queue> *queue; NSObject<OS_dispatch_source> *source; } _clientIPC;
    BOOL _started;
    struct SpinLock { struct { int x; } _l; } _callback_lock;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
}

+ (id)contentStreamWithOptions:(id)a0 queue:(id)a1 handler:(id /* block */)a2 error:(id *)a3;

- (unsigned int)streamId;
- (BOOL)stop:(id *)a0;
- (void)dealloc;
- (BOOL)start:(id *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearSeenSurfaces;
- (id)copyOptions;
- (void)produceSurface:(unsigned int)a0 withFrameInfo:(const struct CA_content_stream_frame_info { unsigned long long x0; unsigned int x1; unsigned int x2; float x3; float x4; float x5; float x6; float x7; float x8; unsigned char x9; } *)a1;
- (BOOL)releaseSurface:(struct __IOSurface { } *)a0 error:(id *)a1;
- (BOOL)releaseSurfaceWithId:(unsigned int)a0 error:(id *)a1;
- (BOOL)setExcludedContexts:(id)a0 error:(id *)a1;
- (BOOL)setIncludedContexts:(id)a0 error:(id *)a1;
- (BOOL)updateOptions:(id)a0 error:(id *)a1;

@end
