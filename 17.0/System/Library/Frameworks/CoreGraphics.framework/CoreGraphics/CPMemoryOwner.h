@interface CPMemoryOwner : NSObject <CPDisposable> {
    void *memory;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initWithAllocatedMemory:(void *)a0;

@end
