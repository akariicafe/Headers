@interface DSFileProgress : NSObject {
    struct vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__begin_; struct TKeyValueObserver *__end_; struct __compressed_pair<TKeyValueObserver *, std::allocator<TKeyValueObserver>> { struct TKeyValueObserver *__value_; } __end_cap_; } _observers;
}

- (void)stopObserving;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startObserving:(id)a0;
- (void)progressChanged:(id)a0;

@end
