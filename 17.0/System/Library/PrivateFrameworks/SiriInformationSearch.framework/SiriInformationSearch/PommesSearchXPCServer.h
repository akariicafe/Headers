@interface PommesSearchXPCServer : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ pommesSearchService;
    void /* unknown type, empty encoding */ listener;
}

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
