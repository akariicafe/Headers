@class AKAuthorizationDaemonConnection;

@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection *_daemonConnection;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
