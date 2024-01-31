@class NSString, _PASSqliteDatabase;

@interface TRISQLiteMADatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSString *_parentDir;
    NSString *_assetDir;
    _PASSqliteDatabase *_db;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)migrations;
- (BOOL)vacuum;
- (id)init;
- (void)closePermanently;
- (void)endAllPreviousLocksOfSelectorSync:(id)a0 forClientName:(id)a1;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (void)endAllPreviousLocksOfReasonSync:(id)a0 forAssetSelector:(id)a1;
- (void)eliminatePromotedNeverLockedForSelector:(id)a0 completion:(id /* block */)a1;
- (void)eliminateAllForSelector:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)databaseHandle;
- (BOOL)dropTableWithName:(id)a0 transaction:(id)a1;
- (id)_predicateForAssetSelector:(id)a0;
- (void)addAutoAssetWithId:(id)a0 atPath:(id)a1;
- (unsigned long long)assetSizeForSelector:(id)a0;
- (id)initWithParentDir:(id)a0;
- (id)lockContentSync:(id)a0 forAssetSelector:(id)a1 withUsagePolicy:(id)a2 withTimeout:(long long)a3 lockedAssetSelector:(id *)a4 newerInProgress:(id *)a5 error:(id *)a6;
- (id)locksForSelector:(id)a0;

@end
