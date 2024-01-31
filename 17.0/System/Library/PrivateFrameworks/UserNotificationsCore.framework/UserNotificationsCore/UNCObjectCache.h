@class NSHashTable;

@interface UNCObjectCache : NSObject {
    NSHashTable *_cache;
}

- (id)init;
- (id)cacheObject:(id)a0;
- (void).cxx_destruct;

@end
