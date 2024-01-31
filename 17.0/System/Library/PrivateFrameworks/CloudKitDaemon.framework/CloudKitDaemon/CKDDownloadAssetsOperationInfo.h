@class NSArray;

@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo

@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *packageIndexSets;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;

- (void).cxx_destruct;

@end
