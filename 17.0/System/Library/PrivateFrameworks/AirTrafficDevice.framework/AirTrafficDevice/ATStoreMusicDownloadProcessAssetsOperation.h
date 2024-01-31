@class ICSongDownloadDoneRequest;

@interface ATStoreMusicDownloadProcessAssetsOperation : ATStoreDownloadProcessAssetsOperation {
    ICSongDownloadDoneRequest *_downloadDoneRequest;
}

- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (void)_removeDRMFromDownloadedAssetWithCompletion:(id /* block */)a0;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
