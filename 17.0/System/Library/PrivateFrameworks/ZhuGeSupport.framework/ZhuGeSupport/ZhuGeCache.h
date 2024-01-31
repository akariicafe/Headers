@class NSString, NSMutableDictionary, NSNumber, NSMutableArray;

@interface ZhuGeCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } aRecursiveMutex;
}

@property (readonly) NSString *name;
@property (readonly) NSNumber *capacity;
@property (readonly) Class cacheType;
@property (readonly) NSMutableArray *cacheList;
@property (readonly) NSMutableDictionary *cacheDict;

- (void)clearCache;
- (void).cxx_destruct;
- (void)delCacheForKey:(id)a0;
- (id)getCacheForKey:(id)a0;
- (id)initWithName:(id)a0 andCapacity:(id)a1 andCacheType:(Class)a2;
- (BOOL)setCache:(id)a0 forKey:(id)a1 withError:(id *)a2;

@end
