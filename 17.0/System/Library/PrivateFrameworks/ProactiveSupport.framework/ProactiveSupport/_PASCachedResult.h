@interface _PASCachedResult : NSObject {
    _Atomic BOOL _done;
    id _data;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (void)dealloc;
- (id)resultNonnullWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)resultWithBlock:(id /* block */)a0;

@end
