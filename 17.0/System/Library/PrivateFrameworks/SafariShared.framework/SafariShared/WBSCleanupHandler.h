@interface WBSCleanupHandler : NSObject {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
