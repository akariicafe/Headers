@class NSString, NSHTTPCookie, NSURLSession;

@interface FBKSHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, FBKSHTTPClientProtocol>

@property (retain) NSURLSession *session;
@property (retain) NSHTTPCookie *seedPortalSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dataForURL:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (id)formattedRequestHeader:(id)a0 session:(id)a1 cookies:(id)a2;
- (void)jsonForURLRequest:(id)a0 success:(id /* block */)a1 error:(id /* block */)a2;
- (void)dataForURLRequest:(id)a0 successWithResponse:(id /* block */)a1 error:(id /* block */)a2;
- (id)logHTTPErrorWithResponse:(id)a0 withData:(id)a1 fromRequest:(id)a2;

@end
