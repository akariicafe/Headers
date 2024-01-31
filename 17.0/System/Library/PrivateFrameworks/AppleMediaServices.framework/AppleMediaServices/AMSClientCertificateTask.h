@class AMSKeychainOptions;

@interface AMSClientCertificateTask : AMSTask

@property (readonly, copy, nonatomic) AMSKeychainOptions *options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (id)performClientCertChainRequest;

@end
