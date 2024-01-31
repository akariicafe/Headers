@class NSXPCConnection;

@interface CarbonComponentScannerXPCClient : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (id)xpcConnection;
- (void)handleConnectionError:(BOOL)a0;
- (struct AudioComponentVector { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<APComponent> *, std::allocator<std::shared_ptr<APComponent>>> { void *x0; } x2; BOOL x3; })initialScan:(id)a0;
- (void)rescan:(id)a0 added:(void *)a1 removed:(void *)a2;

@end
