@class FCPuzzleRecordSource, FCPuzzleTypeController, NSString, FCAssetManager, NSCache;
@protocol FCCoreConfigurationManager;

@interface FCPuzzleController : NSObject <FCPuzzleFetchOperationDelegate, FCJSONEncodableObjectProviding>

@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) FCPuzzleRecordSource *puzzleRecordSource;
@property (retain, nonatomic) FCPuzzleTypeController *puzzleTypeController;
@property (retain, nonatomic) NSCache *fastCache;
@property (retain, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)jsonEncodableObject;
- (void).cxx_destruct;
- (id)_cachedPuzzleForPuzzleID:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_cachedPuzzlesForPuzzleIDs:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_fetchOperationForPuzzleWithIDs:(id)a0;
- (void)_fetchPuzzleForPuzzleID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_fetchPuzzlesForPuzzleIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_refreshPuzzlesBasedOnAgeForPuzzles:(id)a0;
- (void)_savePuzzlesToCache:(id)a0;
- (id)fastCachedPuzzleForID:(id)a0;
- (void)fetchPuzzleForPuzzleID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchPuzzlesForPuzzleIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithContentDatabase:(id)a0 assetManager:(id)a1 puzzleTypeController:(id)a2 puzzleRecordSource:(id)a3 configurationManager:(id)a4;
- (void)puzzleFetchOperation:(id)a0 didFetchPuzzles:(id)a1;
- (id)slowCachedPuzzleForID:(id)a0;

@end
