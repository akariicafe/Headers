@class PKXPCService;

@interface PKDeviceRegistrationService : NSObject {
    PKXPCService *_remoteService;
    BOOL _isRegistering;
}

+ (id)sharedInstance;

- (id)_remoteObjectProxy;
- (id)init;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)performDeviceRegistrationReturningContextForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)performDeviceRegistrationForReason:(id)a0 brokerURL:(id)a1 actionType:(long long)a2 completion:(id /* block */)a3;
- (void)performDeviceRegistrationWithCompletion:(id /* block */)a0;

@end
