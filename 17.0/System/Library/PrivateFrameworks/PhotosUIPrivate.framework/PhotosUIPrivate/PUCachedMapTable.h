@class NSMapTable, NSMutableOrderedSet;

@interface PUCachedMapTable : NSObject <NSCopying>

@property (readonly, nonatomic) NSMapTable *_mapTable;
@property (readonly, nonatomic) NSMutableOrderedSet *_cachedObjects;
@property (nonatomic) unsigned long long cacheCountLimit;
@property (readonly, nonatomic) unsigned long long accurateCount;

- (id)_cachedObjectsCreateIfNeeded:(BOOL)a0;
- (void)removeAllObjects;
- (unsigned long long)_initialCapacity;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)_objectWasRecentlyUsed:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)_mapTableCreateIfNeeded:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
