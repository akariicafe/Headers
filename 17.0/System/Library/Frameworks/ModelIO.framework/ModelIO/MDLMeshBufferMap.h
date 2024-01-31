@interface MDLMeshBufferMap : NSObject {
    id /* block */ _deallocator;
}

@property (readonly, nonatomic) void *bytes;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBytes:(void *)a0 deallocator:(id /* block */)a1;

@end
