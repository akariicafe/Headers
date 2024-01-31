@interface PKDeallocationGuard : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _invalidated;
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (BOOL)invalidate;
- (void).cxx_destruct;

@end
