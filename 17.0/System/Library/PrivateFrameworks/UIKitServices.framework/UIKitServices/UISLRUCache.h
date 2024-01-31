@class NSMutableOrderedSet;

@interface UISLRUCache : NSObject {
    NSMutableOrderedSet *_cache;
    unsigned long long _limit;
}

- (void).cxx_destruct;
- (id)initWithLimit:(unsigned long long)a0;
- (id)evictedObjectForUsedObject:(id)a0;

@end
