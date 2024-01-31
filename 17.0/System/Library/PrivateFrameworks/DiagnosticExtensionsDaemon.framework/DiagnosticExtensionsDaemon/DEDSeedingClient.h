@class NSURLSession, NSString, DEDBugSessionConfiguration, NSObject;
@protocol OS_os_log, DEDSeedingClientDelegate;

@interface DEDSeedingClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) DEDBugSessionConfiguration *config;
@property (weak) id<DEDSeedingClientDelegate> uploadDelegate;
@property (retain) NSURLSession *foregroundSession;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) NSURLSession *backgroundSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)baseURL;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)cleanup;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (id)HTTPErrorWithResponse:(id)a0 withData:(id)a1;
- (id)_formEncodedBodyForDictionary:(id)a0;
- (id)_keyValuePairsForKey:(id)a0 value:(id)a1;
- (id)_serverErrorFromTask:(id)a0;
- (id)beginUploadWithRequest:(id)a0 fromFileURL:(id)a1 error:(id *)a2;
- (id)bodyDataForParameters:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
- (void)cancelPromise:(id)a0 withSuccess:(id /* block */)a1 error:(id /* block */)a2;
- (id)contentTypeForParameterEncoding:(unsigned long long)a0;
- (void)dataForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)deleteResourceAtURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (id)filePromiseURLForPromise:(id)a0;
- (id)filerURL;
- (void)getFilerTokenForPromise:(id)a0 withSuccess:(id /* block */)a1 error:(id /* block */)a2;
- (void)getPromise:(id)a0 withSuccess:(id /* block */)a1 error:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 sessionID:(id)a1 delegate:(id)a2;
- (BOOL)isLoggedIn;
- (void)jsonForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)jsonForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (id)loginWithTokenURL;
- (void)makePromiseWithUUID:(id)a0 extensionID:(id)a1 success:(id /* block */)a2 error:(id /* block */)a3;
- (id)newFilePromiseURL;
- (id)newFilerTokenURL;
- (id)ongoingUploads;
- (void)performHTTPMethod:(id)a0 toURL:(id)a1 parameters:(id)a2 encoding:(unsigned long long)a3 success:(id /* block */)a4 error:(id /* block */)a5;
- (void)postToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (id)promiseConfiguration;
- (void)putToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)seedingLoginWithSuccess:(id /* block */)a0 error:(id /* block */)a1;
- (id)seedingURL;
- (void)sendFile:(id)a0 promise:(id)a1 withCompletion:(id /* block */)a2;
- (void)updatePromise:(id)a0 withAttachmentGroup:(id)a1 status:(long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)updatePromise:(id)a0 withFilename:(id)a1 size:(long long)a2 extensionID:(id)a3 status:(long long)a4 success:(id /* block */)a5 error:(id /* block */)a6;
- (void)updatePromise:(id)a0 withFilename:(id)a1 size:(long long)a2 status:(long long)a3 success:(id /* block */)a4 error:(id /* block */)a5;

@end
