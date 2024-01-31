@class NSString, NSHTTPCookie, NSURLSession;

@interface FBKHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, FBKForegroundDataClient, FBKLoginManagerDelegate>

@property (retain) NSURLSession *session;
@property BOOL didTearDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSHTTPCookie *seedPortalSession;

- (id)init;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)bundle;
- (void)tearDown;
- (void).cxx_destruct;
- (id)_formEncodedBodyForDictionary:(id)a0;
- (id)_keyValuePairsForKey:(id)a0 value:(id)a1;
- (id)bodyDataForParameters:(id)a0 encoding:(unsigned long long)a1 error:(id *)a2;
- (id)contentTypeForParameterEncoding:(unsigned long long)a0;
- (void)dataForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)deleteResourceAtURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)jsonForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)jsonForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)performHTTPMethod:(id)a0 toURL:(id)a1 parameters:(id)a2 encoding:(unsigned long long)a3 success:(id /* block */)a4 error:(id /* block */)a5;
- (void)postToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)putToURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)dataForURL:(id)a0 successWithResponse:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 successWithResponse:(id /* block */)a1 error:(id /* block */)a2;
- (void)deleteAtURL:(id)a0 parameters:(id)a1 encoding:(unsigned long long)a2 success:(id /* block */)a3 error:(id /* block */)a4;
- (void)didLogInWithLoginUserInfo:(id)a0 completion:(id /* block */)a1;
- (void)didLogOutWithCompletion:(id /* block */)a0;
- (id)logHTTPErrorWithResponse:(id)a0 withData:(id)a1 fromRequest:(id)a2;

@end
