@class ICMusicRestoreRequest;

@interface ATStoreMusicRestorePrepareOperation : ATStoreDownloadPrepareOperation {
    ICMusicRestoreRequest *_restoreRequest;
}

- (void)execute;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishWithError:(id)a0 operationResult:(id)a1;

@end
