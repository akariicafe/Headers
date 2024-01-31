@interface UAFAutoAssetManager : NSObject

+ (BOOL)assetSetAvailable:(id)a0 error:(id *)a1;
+ (BOOL)autoAssetExistsWithEntries:(id)a0;
+ (id)configureAssetSet:(id)a0 assetSetUsages:(id)a1 configurationManager:(id)a2 changed:(BOOL *)a3;
+ (void)configureAutoAssetsFromAssetSetUsages:(id)a0 configurationManager:(id)a1 lockIfUnchanged:(BOOL)a2;
+ (id)getAutoAssetSet:(id)a0 specifiers:(id)a1 addEntries:(BOOL)a2 configured:(BOOL *)a3;
+ (id)getAutoSetEntries:(id)a0 specifiers:(id)a1;
+ (id)getConcurrentQueue;
+ (id)getCurrentSpecifiers:(id)a0 expectedAutoAssetType:(id)a1;
+ (unsigned long long)getDownloadStatusFromAssetSetUsages:(id)a0 configurationManager:(id)a1;
+ (id)getReason:(id)a0 operation:(id)a1;
+ (id)getSerialQueue;
+ (id)getSpecifiers:(id)a0 assetSetUsages:(id)a1;
+ (void)handleDownloadedAndUnavailable:(id)a0 assetSetUsages:(id)a1 configurationManager:(id)a2 lockIfUnchanged:(BOOL)a3 autoAssetSet:(id)a4 assetSetAvailableError:(id)a5 checkAtomicError:(id)a6;
+ (void)lockLatestAssetSet:(id)a0;
+ (void)manageAssetSet:(id)a0 assetSetUsages:(id)a1 configurationManager:(id)a2 lockIfUnchanged:(BOOL)a3 eliminateAndRetry:(BOOL)a4;
+ (void)observeAssetSet:(id)a0;
+ (void)removeAutoAssetSet:(id)a0;
+ (void)setLatestAtomicInstance:(id)a0 autoAssetSet:(id)a1;
+ (void)updateAutoAssetsFromAssetSetUsages:(id)a0 configurationManager:(id)a1 expensiveNetworking:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;

@end
