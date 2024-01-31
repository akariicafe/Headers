@interface HomeEnergyDaemon.HomeEnergyListener : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ xpcListener;
}

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
