@class TRISQLiteMADatabase;

@interface TRIMAProvider : NSObject <TRIMAProviding> {
    TRISQLiteMADatabase *_db;
}

+ (id)fetchRetryDateFromAttribution:(id)a0 isDeferral:(BOOL)a1;

- (id)downloadAssets:(id)a0 attribution:(id)a1 aggregateProgress:(id)a2 group:(id)a3 completion:(id /* block */)a4;
- (BOOL)_shouldMockMobileAssets;
- (id)endAllPreviousLocksOfSelectorSync:(id)a0 forClientName:(id)a1;
- (id)createAutoAssetWithId:(id)a0 decryptionKey:(id)a1 error:(id *)a2;
- (id)_sqliteMADatabase;
- (void)eliminatePromotedNeverLockedForSelector:(id)a0 completion:(id /* block */)a1;
- (void)eliminateAllForSelector:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)endAllPreviousLocksOfReasonSync:(id)a0 forClientName:(id)a1 forAssetSelector:(id)a2;
- (id)installedAssetsMatchingFullAssetIds:(id)a0;

@end
