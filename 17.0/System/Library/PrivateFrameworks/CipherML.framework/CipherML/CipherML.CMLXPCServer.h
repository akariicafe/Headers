@interface CipherML.CMLXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ xpcHandler;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
