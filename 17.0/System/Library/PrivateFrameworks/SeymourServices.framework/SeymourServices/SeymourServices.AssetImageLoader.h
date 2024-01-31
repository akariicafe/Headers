@interface SeymourServices.AssetImageLoader : NSObject <NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ assetFileStore;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ taskCompletions;
    void /* unknown type, empty encoding */ taskResults;
    void /* unknown type, empty encoding */ requestIdentifierToTask;
}

- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
