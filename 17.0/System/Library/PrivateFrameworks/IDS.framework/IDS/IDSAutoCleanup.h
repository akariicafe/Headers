@interface IDSAutoCleanup : NSObject {
    id /* block */ _cleanupBlock;
    int _accessCount;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)incrementAccessCount;

@end
