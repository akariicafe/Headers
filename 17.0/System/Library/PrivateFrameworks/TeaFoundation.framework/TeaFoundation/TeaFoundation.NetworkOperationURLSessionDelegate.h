@interface TeaFoundation.NetworkOperationURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate> {
    void /* unknown type, empty encoding */ taskLock;
    void /* unknown type, empty encoding */ runningTasks;
    void /* unknown type, empty encoding */ observerLock;
    void /* unknown type, empty encoding */ sessionDidFinishObservers;
}

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;

@end
