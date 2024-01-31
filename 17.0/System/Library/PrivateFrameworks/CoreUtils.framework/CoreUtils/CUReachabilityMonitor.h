@class NSURLSession, NSString, NSURL, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    int _downloadStatus;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)_activate;
- (void)_complete:(id)a0;
- (void)invalidate;
- (void)activate;
- (void)_startDownload;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;

@end
