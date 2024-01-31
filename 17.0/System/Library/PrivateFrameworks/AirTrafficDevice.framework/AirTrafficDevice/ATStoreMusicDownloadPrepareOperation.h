@class ICMediaRedownloadRequest;

@interface ATStoreMusicDownloadPrepareOperation : ATStoreDownloadPrepareOperation {
    ICMediaRedownloadRequest *_redownloadRequest;
}

- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
