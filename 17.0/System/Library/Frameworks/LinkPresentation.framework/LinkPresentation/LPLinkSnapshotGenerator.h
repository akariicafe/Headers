@class NSXPCConnection;

@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    BOOL _active;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)snapshotForMetadata:(id)a0 configurations:(id)a1 completionHandler:(id /* block */)a2;

@end
