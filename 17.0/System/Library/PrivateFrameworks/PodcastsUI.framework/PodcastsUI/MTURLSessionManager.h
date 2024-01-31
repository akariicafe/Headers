@class NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface MTURLSessionManager : MTSingleton <NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate, MTRestorableBackgroundSession>

@property (retain, nonatomic) NSURLSession *sessionForForegroundDownloads;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *startQueue;
@property (retain, nonatomic) NSURLSession *sessionForBackgroundDownloads;
@property (copy, nonatomic) id /* block */ sessionCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originalURLForTask:(id)a0;
+ (void)purgeExternalCookies;
+ (long long)statusCodeForTask:(id)a0;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)_assertSubclassRequirements;
- (void)_invokeURLSessionBackgroundEventsCompletionHandler;
- (void)_showCredentialsActionControllerForHost:(id)a0 signIn:(id /* block */)a1 cancel:(id /* block */)a2;
- (BOOL)_subclassImplementsConfigureSession;
- (BOOL)_subclassImplementsDataDidDownload;
- (BOOL)_subclassImplementsDidFailWithError;
- (BOOL)_subclassImplementsInstanceMethod:(SEL)a0;
- (BOOL)_subclassImplementsURLDidDownload;
- (id)backgroundSessionConfigurationIdentifier;
- (void)configureSession:(id)a0;
- (void)loadSessionsIfNeeded;
- (id)sessionForConfiguration:(id)a0;
- (void)startDownloadTaskForURL:(id)a0 userInitiated:(BOOL)a1 useBackgroundFetch:(BOOL)a2 usePrivatePath:(id)a3 downloadStartedBlock:(id /* block */)a4;
- (void)task:(id)a0 didCompleteWithData:(id)a1;
- (void)task:(id)a0 didCompleteWithDownloadedContentUrl:(id)a1;
- (void)task:(id)a0 didFailWithError:(id)a1 orStatusCode:(long long)a2;

@end
