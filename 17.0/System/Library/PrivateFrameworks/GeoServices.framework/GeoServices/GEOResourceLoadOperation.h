@class NSDate, NSString, NSURL, NSURLSession, GEOApplicationAuditToken, NSObject, NSProgress, GEOReportedProgress, NSURLSessionTask, NSMutableData;
@protocol OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {
    NSURL *_url;
    NSURL *_proxyURL;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id<GEORequestCounterTicket> _requestCounterTicket;
    NSString *_eTag;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
    NSString *_serviceAddress;
    NSDate *_starttime;
    NSURL *_downloadedFileURL;
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL preferDirectNetworking;
@property (readonly) NSProgress *progress;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)startWithCompletionHandler:(id /* block */)a0 callbackQueue:(id)a1;
- (void)cancel;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (id)initWithResource:(id)a0 eTag:(id)a1 auditToken:(id)a2 baseURL:(id)a3 alternateURLs:(id)a4 proxyURL:(id)a5 log:(id)a6;

@end
