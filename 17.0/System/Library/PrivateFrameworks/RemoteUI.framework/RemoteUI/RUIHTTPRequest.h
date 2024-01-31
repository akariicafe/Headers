@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

@interface RUIHTTPRequest : NSObject {
    NSURLRequest *_request;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_urlSession;
}

@property (weak, nonatomic) id delegate;

+ (id)errorWithCode:(unsigned long long)a0;
+ (BOOL)anyRequestLoading;
+ (id)invalidResponseErrorWithResponse:(id)a0;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)safeBaseURL;
+ (id)serviceUnavailableError;

- (id)init;
- (id)sessionConfiguration;
- (void)dealloc;
- (BOOL)isLoading;
- (void)parseData:(id)a0;
- (id)request;
- (void).cxx_destruct;
- (void)cancel;
- (void)loadRequest:(id)a0;
- (id)urlSessionDelegate;
- (void)_finishedLoading;
- (void)_startedLoading;
- (void)_loadRequestMain:(id)a0;
- (void)_preLoadCancel;
- (void)didParseData;
- (void)failWithError:(id)a0 forRequest:(id)a1;
- (id)handleWillLoadRequest:(id)a0;
- (void)loadStatusChanged;
- (BOOL)receivedValidResponse:(id)a0 forRequest:(id)a1;
- (void)shouldLoadRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willParseData;

@end
