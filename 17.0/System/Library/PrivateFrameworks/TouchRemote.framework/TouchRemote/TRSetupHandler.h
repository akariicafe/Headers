@protocol TRSetupHandlerDelegate;

@interface TRSetupHandler : NSObject

@property (weak, nonatomic) id<TRSetupHandlerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)registerMessageHandlersForSession:(id)a0;
- (void)_handleActivationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleCompanionAuthenticationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleCompletionRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleConfigurationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleHandshakeRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleNetworkRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleProxyAuthenticationRequest:(id)a0 withResponseHandler:(id /* block */)a1;
- (void)_handleProxyDeviceRequest:(id)a0 withResponseHandler:(id /* block */)a1;

@end
