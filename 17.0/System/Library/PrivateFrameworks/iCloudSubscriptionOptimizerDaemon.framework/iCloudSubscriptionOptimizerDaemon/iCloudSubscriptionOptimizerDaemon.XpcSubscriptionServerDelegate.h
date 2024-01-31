@interface iCloudSubscriptionOptimizerDaemon.XpcSubscriptionServerDelegate : NSObject <NSXPCListenerDelegate>

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
