@class NSString;

@interface APBrokerHTTPUtilsTaskDelegate : NSObject <NSURLSessionTaskDelegate> {
    void *_logContext;
    NSString *_sslCertificateHostName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (id)initWithLogContext:(void *)a0 sslCertificateHostName:(id)a1;

@end
