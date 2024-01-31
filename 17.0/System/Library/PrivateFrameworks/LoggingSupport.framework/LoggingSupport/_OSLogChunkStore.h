@interface _OSLogChunkStore : NSObject {
    const void *_ptr;
    unsigned long long _sz;
}

- (void)enumerateChunksUsingBlock:(id /* block */)a0;
- (void)enumerateChunksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithBytes:(const void *)a0 size:(unsigned long long)a1;

@end
