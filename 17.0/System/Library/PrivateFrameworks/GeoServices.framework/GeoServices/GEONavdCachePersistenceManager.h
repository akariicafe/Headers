@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (id)init;
- (void)removeAllEntries;
- (id)entryWithRowId:(long long)a0;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (id)readValueWithKey:(id)a0;
- (void)tearDown;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (double)nextTimeStampForRefreshTimer;
- (void).cxx_destruct;
- (long long)numberOfEntries;
- (void)deleteFromDiskWithKey:(id)a0;

@end
