@class NSMutableDictionary;

@interface PLCache : NSObject {
    NSMutableDictionary *_cacheEntries;
    long long _countLimit;
    long long _currentCount;
    long long _totalCostLimit;
    long long _currentCost;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    struct entryList { struct lruEntry *tqh_first; struct lruEntry **tqh_last; } _lru;
}

- (void)dealloc;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(long long)a2;
- (id)initWithCountLimit:(long long)a0 totalCostLimit:(long long)a1;

@end
