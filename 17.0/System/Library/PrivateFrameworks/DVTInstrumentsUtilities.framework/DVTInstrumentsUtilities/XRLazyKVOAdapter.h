@class _XRLazyKVOBlockToken, NSArray, NSMapTable;
@protocol XRLazyKVOResponder;

@interface XRLazyKVOAdapter : NSObject {
    NSMapTable *_keyPathsByContextByClz;
    NSMapTable *_keyPathsByContextByObj;
    struct unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { struct __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> { struct __hash_node_base<std::__hash_node<const void *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<const void *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<const void *>> { float __value_; } __p3_; } __table_; } _updatedContexts;
    struct unordered_set<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { struct __hash_table<const void *, std::hash<const void *>, std::equal_to<const void *>, std::allocator<const void *>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<const void *, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<const void *, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<const void *, void *> *>, std::allocator<std::__hash_node<const void *, void *>>> { struct __hash_node_base<std::__hash_node<const void *, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<const void *>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<const void *>> { float __value_; } __p3_; } __table_; } _presentedContexts;
    id<XRLazyKVOResponder> _responder;
    BOOL _implementsWillChangeHandler;
}

@property (retain, nonatomic) _XRLazyKVOBlockToken *strongBlockAdapterToken;
@property (copy, nonatomic) NSArray *runLoopModes;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (id)observeKeyPath:(id)a0 object:(id)a1 observer:(id)a2 lazyUpdateBlock:(id /* block */)a3;
+ (id)observeKeyPathArray:(id)a0 object:(id)a1 observer:(id)a2 lazyUpdateBlock:(id /* block */)a3;

- (void)clear;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_callbackHandler;
- (void)fireCallbackContext:(const void *)a0 whenKeypaths:(id)a1 changeOnClass:(Class)a2;
- (BOOL)hasContextChanged:(const void *)a0;
- (id)initWithLazyKVOResponder:(id)a0;
- (void)observeObject:(id)a0;
- (void)removeObservationsForObject:(id)a0;

@end
