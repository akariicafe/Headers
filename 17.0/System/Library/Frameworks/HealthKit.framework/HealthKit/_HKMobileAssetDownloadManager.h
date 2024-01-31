@class NSString, NSMutableSet, MADownloadOptions, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _HKMobileAssetDownloadManager : NSObject {
    NSMutableArray *_pendingOperations;
    NSMutableSet *_downloadingQueryParams;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_retainedSelf;
}

@property (nonatomic) BOOL shouldQueryLocalAssetsFirst;
@property (nonatomic) BOOL shouldAutoDownloadRemoteAssets;
@property (nonatomic) long long maxNumberOfRetriesAllowed;
@property (readonly, copy, nonatomic) NSString *mobileAssetTypeName;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) long long mobileAssetQueryReturnTypes;
@property (copy, nonatomic) MADownloadOptions *mobileAssetDownloadOptions;
@property (copy, nonatomic) id /* block */ mobileAssetDownloadCompletionHandler;

- (id)_errorWithDomain:(id)a0 code:(long long)a1;
- (void)dealloc;
- (id)initWithMobileAssetTypeName:(id)a0 queue:(id)a1;
- (void)_queue_fetchAssetsWithQuery:(id)a0 onlyLocal:(BOOL)a1 completion:(id /* block */)a2;
- (id)_generateAssetQueryFromQueryParams:(id)a0 returnTypes:(long long)a1;
- (void)_queue_fetchAssetsWithLocalInformation:(BOOL)a0 shouldRequery:(BOOL)a1 queryParams:(id)a2 returnTypes:(long long)a3;
- (id)unitTesting_queue;
- (void)downloadMobileAssets:(id)a0 completion:(id /* block */)a1;
- (void)removeMobileAssets:(id)a0 completion:(id /* block */)a1;
- (void)fetchAssetsWithQueryParams:(id)a0 onlyLocal:(BOOL)a1 completion:(id /* block */)a2;
- (id)description;
- (void)_queue_downloadAssets:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_callDownloadCompletionHandlerWithAssets:(id)a0 queryParams:(id)a1;
- (void)downloadAssetsWithQueryParams:(id)a0;
- (void)_callErrorHandlerWithError:(id)a0;
- (void)fetchAssetsWithQueryParams:(id)a0 onlyLocal:(BOOL)a1 returnTypes:(long long)a2 completion:(id /* block */)a3;

@end
