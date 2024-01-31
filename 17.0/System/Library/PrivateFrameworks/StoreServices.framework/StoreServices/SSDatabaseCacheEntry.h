@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {
    SSPersistentCache *_persistentCache;
}

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (unsigned long long)_fetchPersistentID:(id)a0 inDatabase:(id)a1;

- (void)dealloc;
- (id)description;
- (id)dataBlob:(BOOL *)a0;
- (id)initWithLookupKey:(id)a0 inDatabase:(id)a1;
- (void)setPersistentCache:(id)a0;

@end
