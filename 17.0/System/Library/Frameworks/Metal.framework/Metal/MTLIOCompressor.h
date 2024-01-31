@interface MTLIOCompressor : NSObject {
    void *context;
}

- (long long)close;
- (void)appendData:(id)a0;
- (void)dealloc;
- (id)initWithType:(long long)a0 dst:(id)a1 chunkSize:(unsigned long long)a2;

@end
