@class ATXGenericFileBasedCache;

@interface ATXSleepShortcutsCache : NSObject {
    ATXGenericFileBasedCache *_cache;
}

- (void)cacheSleepShortcutsIfNecessary;
- (id)_cache;
- (void).cxx_destruct;
- (void)fetchSleepShortcutsWithCompletion:(id /* block */)a0;
- (void)_fetchAndCacheSleepShortcutsWithTransaction:(id)a0 completion:(id /* block */)a1;

@end
