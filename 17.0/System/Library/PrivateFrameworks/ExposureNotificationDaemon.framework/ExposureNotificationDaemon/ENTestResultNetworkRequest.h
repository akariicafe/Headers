@class NSURLSession, NSString, NSDictionary, NSURL, NSError, NSObject, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface ENTestResultNetworkRequest : NSObject {
    unsigned long long _maxRetryTime;
    NSObject<OS_dispatch_queue> *_queue;
    NSURLSession *_URLSession;
    NSURLSessionTask *_URLSessionTask;
    id /* block */ _completionHandler;
}

@property (readonly, copy, nonatomic) NSURL *requestURL;
@property (readonly, copy, nonatomic) NSDictionary *requestHeaders;
@property (copy, nonatomic) NSString *APIKey;
@property (nonatomic) unsigned long long paddedRequestSize;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *additionalRequestHeaders;
@property (readonly, copy, nonatomic) NSDictionary *bodyJSON;

- (void)_completeWithError:(id)a0;
- (void)resumeWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)_createURLRequestWithError:(id *)a0;
- (id)_dictionaryFromData:(id)a0 response:(id)a1 error:(id *)a2;
- (id)_errorForURLRequestError:(id)a0;
- (void)_performURLRequest:(id)a0 attempt:(int)a1;
- (id)errorForUnsuccessfulResponse:(id)a0 body:(id)a1;
- (id)getPaddedBodyJSONAndReturnError:(id *)a0;
- (id)handleResponse:(id)a0 body:(id)a1;
- (void)handleURLResponse:(id)a0 data:(id)a1 error:(id)a2;
- (id)initWithRequestURL:(id)a0 URLSession:(id)a1 queue:(id)a2;
- (unsigned long long)retryCheck:(id)a0 retryAttempt:(int)a1 baseMultiplier:(int)a2;
- (void)setMaxRetryTime:(unsigned long long)a0;

@end
