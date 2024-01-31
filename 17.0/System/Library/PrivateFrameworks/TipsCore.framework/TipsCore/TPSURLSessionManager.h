@class NSURLSession, NSMutableDictionary, PPCRedirect, NSString, NSObject;
@protocol TPSURLSessionManagerDelegate, OS_dispatch_queue, TPSURLSessionDelegate, TPSURLSessionCustomAuthHandling;

@interface TPSURLSessionManager : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {
    struct TPSURLSessionDelegateResponds { BOOL willCacheResponse; BOOL downloadTaskDidFinishDownloadingToURL; BOOL didReceiveResponse; BOOL didCompleteWithError; BOOL taskDidReceiveChallenge; } _defaultSessionDelegateResponds;
    NSObject<OS_dispatch_queue> *_sessionTaskQueue;
    NSObject<OS_dispatch_queue> *_sessionMapQueue;
}

@property (class, readonly, nonatomic) unsigned long long defaultURLCacheMemoryCapcity;
@property (class, readonly, nonatomic) unsigned long long defaultURLCacheDiskCapcity;

@property (nonatomic) BOOL respondsToDidReceiveChallenge;
@property (nonatomic) BOOL coalesceRequests;
@property (retain, nonatomic) NSMutableDictionary *coalesceTaskURLMap;
@property (retain, nonatomic) NSMutableDictionary *uncoalesceTaskMap;
@property (retain, nonatomic) NSMutableDictionary *URLSessionMap;
@property (retain, nonatomic) NSURLSession *defaultURLSession;
@property (retain, nonatomic) PPCRedirect *urlRedirector;
@property (weak, nonatomic) id<TPSURLSessionManagerDelegate> delegate;
@property (weak, nonatomic) id<TPSURLSessionDelegate> defaultSessionDelegate;
@property (retain, nonatomic) id<TPSURLSessionCustomAuthHandling> authenticationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)dealloc;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (id)URLSessionForAttributionIdentifier:(id)a0;
- (id)_mappedURLRequest:(id)a0;
- (BOOL)allowsNetworkAttribution;
- (void)cancelSessionItem:(id)a0;
- (id)newURLSessionItemWithRequest:(id)a0 identifier:(id)a1 attributionIdentifier:(id)a2 requestType:(id)a3 completionHandler:(id /* block */)a4;
- (id)newURLSessionItemWithRequest:(id)a0 identifier:(id)a1 attributionIdentifier:(id)a2 requestType:(id)a3 networkDelegate:(id)a4 completionHandler:(id /* block */)a5;
- (void)removeTaskFromMap:(id)a0;
- (void)resumeSessionItem:(id)a0;
- (void)sessionTask:(id)a0 didCompleteWithError:(id)a1;
- (id)sessionTaskForTask:(id)a0;

@end
