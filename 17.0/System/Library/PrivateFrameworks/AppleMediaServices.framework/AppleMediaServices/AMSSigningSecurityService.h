@protocol AMSDServiceBrokerProtocol;

@interface AMSSigningSecurityService : NSObject

@property (readonly, nonatomic) id<AMSDServiceBrokerProtocol> serviceBroker;

- (id)signatureForRequest:(id)a0;
- (id)init;
- (id)headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2;
- (id)initWithServiceBroker:(id)a0;
- (void)_handleSecurityServicePromise:(id)a0 onConnected:(id /* block */)a1 onDenied:(id /* block */)a2 onError:(id /* block */)a3;
- (id)_defaultSecurityServiceWithDelegate:(id)a0;
- (id)handleResponse:(id)a0 bag:(id)a1;
- (id)_handleResponse:(id)a0 bag:(id)a1 securityServicePromise:(id)a2 onDenied:(id /* block */)a3;
- (id)_headersForRequest:(id)a0 buyParams:(id)a1 bag:(id)a2 securityServicePromise:(id)a3 onDenied:(id /* block */)a4;
- (void).cxx_destruct;

@end
