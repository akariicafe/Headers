@class NSCache;

@interface ARUIRingUniformsCache : NSObject {
    NSCache *_cache;
}

+ (id)defaultCache;
+ (id)cacheWithLimit:(unsigned long long)a0;

- (void)clearCache;
- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0;
- (id)uniformsForRing:(id)a0 renderedInContext:(id)a1;

@end
