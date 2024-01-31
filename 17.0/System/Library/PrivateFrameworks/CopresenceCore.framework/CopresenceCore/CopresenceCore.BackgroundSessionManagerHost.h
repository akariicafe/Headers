@interface CopresenceCore.BackgroundSessionManagerHost : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ clientIdentifierToDataSourceMap;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connections;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
