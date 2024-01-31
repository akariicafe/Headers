@class NSCache, NSArray, NSHashTable;

@interface PreflightCache : NSObject {
    NSCache *_cache;
    NSArray *_invalidationSources;
    NSHashTable *_bypassAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void)invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (void)dropAssertion:(id)a0;
- (BOOL)_isCacheable:(id)a0 callerUid:(unsigned int)a1;
- (id)acquireBypassAssertionWithReason:(id)a0;
- (void)addPreflightResult:(id)a0 forKey:(id)a1;
- (id)cachedPreflightResultForKey:(id)a0;
- (id)keyForPreflightOfACL:(id)a0 operation:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 uid:(unsigned int)a4;
- (id)keyForPreflightOfPolicy:(long long)a0 options:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 uid:(unsigned int)a3;

@end
