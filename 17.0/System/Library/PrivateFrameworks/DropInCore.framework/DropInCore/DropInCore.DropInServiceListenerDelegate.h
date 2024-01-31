@interface DropInCore.DropInServiceListenerDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ xpcDispatcher;
    void /* unknown type, empty encoding */ xpcServerInterface;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _xpcClients;
    void /* unknown type, empty encoding */ xpcClientDelegate;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
