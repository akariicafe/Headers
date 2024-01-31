@class NSString, FCPuzzleTypeRecordSource, FCAssetManager, NSCache;
@protocol FCContentContext;

@interface FCPuzzleTypeController : NSObject <FCPuzzleTypeFetchOperationDelegate, FCJSONEncodableObjectProviding>

@property (retain, nonatomic) FCAssetManager *assetManager;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) FCPuzzleTypeRecordSource *puzzleTypeRecordSource;
@property (retain, nonatomic) NSCache *fastCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)jsonEncodableObject;
- (void).cxx_destruct;
- (id)_cachedPuzzleTypeForPuzzleTypeID:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_cachedPuzzleTypesForPuzzleTypeIDs:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_fetchOperationForPuzzleTypeWithIDs:(id)a0;
- (void)_fetchPuzzleTypeForPuzzleTypeID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_fetchPuzzleTypesForPuzzleTypeIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)_refreshPuzzleTypesBasedOnAgeForPuzzleTypes:(id)a0;
- (void)_savePuzzleTypesToCache:(id)a0;
- (id)fastCachedPuzzleTypeForID:(id)a0;
- (void)fetchPuzzleTypeForPuzzleTypeID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)fetchPuzzleTypesForPuzzleTypeIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 callbackQueue:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithContentDatabase:(id)a0 context:(id)a1 assetManager:(id)a2 puzzleTypeRecordSource:(id)a3 configurationManager:(id)a4;
- (void)puzzleTypeFetchOperation:(id)a0 didFetchPuzzleTypes:(id)a1;
- (id)slowCachedPuzzleTypeForID:(id)a0;

@end
