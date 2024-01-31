@class AKAdaptiveService, NSXPCListenerEndpoint;

@interface AKAuthorizationNotificationService : NSObject {
    AKAdaptiveService *_service;
    NSXPCListenerEndpoint *_daemonEndpoint;
}

+ (id)_sharedService;
+ (void)startServiceWithNotificationHandler:(id)a0;
+ (void)startServiceWithStateBroadcastHandler:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)_configureNotificationServiceWithCompletion:(id /* block */)a0;
- (void)_configureStateBroadcastServiceWithCompletion:(id /* block */)a0;
- (void)startWithNotificationHandler:(id)a0 completion:(id /* block */)a1;
- (void)startWithStateBroadcastHandler:(id)a0 completion:(id /* block */)a1;

@end
