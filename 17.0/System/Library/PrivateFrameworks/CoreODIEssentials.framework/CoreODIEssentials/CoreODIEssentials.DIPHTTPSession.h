@class NSString;

@interface CoreODIEssentials.DIPHTTPSession : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_urlSession;
    void /* unknown type, empty encoding */ $__lazy_storage_$_anonymousURLSession;
    void /* unknown type, empty encoding */ nsurlSessionConfiguration;
    void /* unknown type, empty encoding */ anonymousNSURLSessionConfiguration;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ retrier;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) NSString *description;

- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
