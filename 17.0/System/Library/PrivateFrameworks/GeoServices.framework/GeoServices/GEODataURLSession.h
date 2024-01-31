@class NSString, NSMutableDictionary, GEODataURLSessionList, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, GEOSystemMonitorSystemSleepObserver> {
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _symptomsAlternateAdviceToken;
}

@property (class, readonly, nonatomic) GEODataURLSession *sharedDataURLSession;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEODataURLSessionList *urlSessions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly, nonatomic) NSOperationQueue *sessionIsolationOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *sessionTasks;
@property (nonatomic) unsigned int nextSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)asynchronousGetURL:(id)a0 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 auditToken:(id)a2 requestCounterTicket:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)dealloc;
- (id)taskForURLSession:(id)a0 task:(id)a1;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)taskWithRequest:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (double)_wifiAssistRetryDelay;
- (void)_considerRetryingDueToAlternateAdvice;
- (void)_configureTask:(id)a0 withRequest:(id)a1;
- (id)activeSessionIdentifiers;
- (void)finishTasksAndInvalidateForegroundSessions:(id /* block */)a0;
- (void)tearDown;
- (void)replaceBackingTask:(id)a0 withTask:(id)a1 forURLSession:(id)a2;
- (void)pruneInactiveSessions;
- (id)taskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)asynchronousGetURL:(id)a0 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 auditToken:(id)a2 requestCounterTicket:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (id)createNewURLSessionWithRequest:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 _willSendRequestForEstablishedConnection:(id)a2 completionHandler:(id /* block */)a3;
- (void)systemWillSleep:(id /* block */)a0;
- (id)urlSessionForRequest:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)configureTask:(id)a0 withRequest:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void).cxx_destruct;
- (void)didReceiveMemoryPressureWarning;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (BOOL)_wifiAssistRetryEnabled;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)systemDidWake;
- (void)systemCanSleep:(id /* block */)a0;
- (id)downloadTaskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)removeTaskForURLSession:(id)a0 task:(id)a1;

@end
