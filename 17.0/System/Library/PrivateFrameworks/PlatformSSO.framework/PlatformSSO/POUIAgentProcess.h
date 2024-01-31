@class NSString, POAgentAuthenticationProcess, NSXPCConnection, SOConfigurationHost, POConfigurationManager;

@interface POUIAgentProcess : NSObject <POUIServiceProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (retain) POConfigurationManager *configurationManager;
@property (retain) POAgentAuthenticationProcess *agentProcess;
@property (retain) SOConfigurationHost *configurationHost;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)deviceStatusWithCompletion:(id /* block */)a0;
- (id)initWithXPCConnection:(id)a0 authenticationProcess:(id)a1;
- (void)startAction:(long long)a0 forUserName:(id)a1 completion:(id /* block */)a2;
- (void)startDeviceAction:(long long)a0 completion:(id /* block */)a1;
- (void)statusForUser:(id)a0 completion:(id /* block */)a1;

@end
