@class NSXPCListenerEndpoint;

@interface STConcretePasscodeAuthenticationProviderService : NSObject <STPasscodeAuthenticationResultReceiverInterface, STPasscodeAuthenticationProviderService>

@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint;
@property (copy) id /* block */ pendingAuthenticationCompletionHandler;

- (id)description;
- (void).cxx_destruct;
- (id)initWithClientListenerEndpoint:(id)a0;
- (void)authenticatePasscodeWithCommunicationServiceProxy:(id)a0 completionHandler:(id /* block */)a1;
- (void)receivePasscodeAuthenticationResult:(id)a0 completionHandler:(id /* block */)a1;

@end
