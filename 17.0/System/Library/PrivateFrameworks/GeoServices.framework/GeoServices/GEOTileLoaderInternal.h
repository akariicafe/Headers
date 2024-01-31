@class GEOTilePool;

@interface GEOTileLoaderInternal : NSObject {
    struct list<LoadItem, std::allocator<LoadItem>> { struct __list_node_base<LoadItem, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<LoadItem, void *>>> { unsigned long long __value_; } __size_alloc_; } _loadItems;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::default_delete<geo::DispatchTimer>> { struct __compressed_pair<geo::DispatchTimer *, std::default_delete<geo::DispatchTimer>> { struct DispatchTimer *__value_; } __ptr_; } _timer;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::allocator<_CacheRequester<void (^)(unsigned long long)>>> { struct __list_node_base<_CacheRequester<void (^)(unsigned long long)>, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<_CacheRequester<void (^)(unsigned long long)>, void *>>> { unsigned long long __value_; } __size_alloc_; } _freeableSizeRequesters;
    _Atomic int _memoryHits;
    _Atomic int _diskHits;
    _Atomic int _networkHits;
    struct deque<ErrorInfo, std::allocator<ErrorInfo>> { struct __split_buffer<ErrorInfo *, std::allocator<ErrorInfo *>> { struct ErrorInfo **__first_; struct ErrorInfo **__begin_; struct ErrorInfo **__end_; struct __compressed_pair<ErrorInfo **, std::allocator<ErrorInfo *>> { struct ErrorInfo **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<ErrorInfo>> { unsigned long long __value_; } __size_; } _recentErrors;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
