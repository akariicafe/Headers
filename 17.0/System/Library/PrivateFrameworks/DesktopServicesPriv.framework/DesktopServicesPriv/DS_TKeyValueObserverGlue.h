@interface DS_TKeyValueObserverGlue : NSObject {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _functor;
    struct function<void (NSDictionary<NSString *,NSObject *> *)> { struct __value_func<void (NSDictionary<NSString *,NSObject *> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _functorWithChange;
    struct unordered_set<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { struct __hash_table<NSObject *__unsafe_unretained, std::hash<NSObject *__unsafe_unretained>, std::equal_to<NSObject *__unsafe_unretained>, std::allocator<NSObject *__unsafe_unretained>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *>, std::allocator<std::__hash_node<NSObject *__unsafe_unretained, void *>>> { struct __hash_node_base<std::__hash_node<NSObject *__unsafe_unretained, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<NSObject *__unsafe_unretained>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<NSObject *__unsafe_unretained>> { float __value_; } __p3_; } __table_; } _observedObjects;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _observedKeyPath;
}

- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)initCommon:(const void *)a0 observedKeyPath:(const void *)a1;
- (id)initWithFunctor:(const void *)a0 observedObjects:(const void *)a1 observedKeyPath:(const void *)a2;
- (id)initWithFunctorWithChange:(const void *)a0 observedObjects:(const void *)a1 observedKeyPath:(const void *)a2;

@end
