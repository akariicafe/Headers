@class ATStoreDownloadOperationResult;

@interface ATStoreDownloadProcessAssetsOperation : ATStoreDownloadOperation

@property (readonly, nonatomic) ATStoreDownloadOperationResult *assetsOperationResult;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 assetsOperationResult:(id)a1;

@end
