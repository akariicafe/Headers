@interface HMXPCServerInternal : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ modelController;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ proxies;
    void /* unknown type, empty encoding */ storeServer;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (id)init;
- (id)initWithStoreURL:(id)a0;
- (void).cxx_destruct;

@end
