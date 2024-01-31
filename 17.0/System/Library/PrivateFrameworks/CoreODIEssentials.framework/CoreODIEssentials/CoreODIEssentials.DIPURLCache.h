@interface CoreODIEssentials.DIPURLCache : NSURLCache {
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void)storeCachedResponse:(id)a0 forRequest:(id)a1;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 directoryURL:(id)a2;
- (void).cxx_destruct;
- (void)storeCachedResponse:(id)a0 forDataTask:(id)a1;
- (id)initWithMemoryCapacity:(long long)a0 diskCapacity:(long long)a1 diskPath:(id)a2;

@end
