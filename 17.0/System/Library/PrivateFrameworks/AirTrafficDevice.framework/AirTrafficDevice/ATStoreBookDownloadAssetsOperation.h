@class NSString;

@interface ATStoreBookDownloadAssetsOperation : ATStoreDownloadAssetsOperation <BLDownloadQueueNonUIObserving> {
    NSString *_bookDownloadID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadQueue:(id)a0 downloadStates:(id)a1 didCompleteWithError:(id)a2;
- (void)downloadQueue:(id)a0 downloadStatesDidChange:(id)a1;
- (void)dealloc;
- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
