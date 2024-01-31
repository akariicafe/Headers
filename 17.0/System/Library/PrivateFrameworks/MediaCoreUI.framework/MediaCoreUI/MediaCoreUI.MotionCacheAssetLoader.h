@interface MediaCoreUI.MotionCacheAssetLoader : NSObject <AVAssetDownloadDelegate> {
    void /* unknown type, empty encoding */ downloadContainers;
    void /* unknown type, empty encoding */ assetDownloadTasksMapping;
    void /* unknown type, empty encoding */ requestedCancelations;
    void /* unknown type, empty encoding */ $__lazy_storage_$_downloadSession;
}

- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;

@end
