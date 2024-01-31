@interface PLAtomicObject : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _object;
}

- (id)initWithObject:(id)a0;
- (void)atomicallyPerformBlockAndWait:(id /* block */)a0;
- (void)invalidateWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
