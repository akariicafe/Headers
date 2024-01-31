@interface SGLazyInit : NSObject {
    id /* block */ _initializer;
    id /* block */ _destructor;
    id _cachedObject;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)getObject;
- (id)initWithInitializer:(id /* block */)a0 destructor:(id /* block */)a1;
- (void)destroyCachedObject;
- (id)peekAtCachedObject;

@end
