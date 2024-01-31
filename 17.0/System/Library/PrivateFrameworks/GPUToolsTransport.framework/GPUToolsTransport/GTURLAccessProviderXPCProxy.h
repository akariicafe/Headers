@class NSSet;
@protocol GTXPCConnection;

@interface GTURLAccessProviderXPCProxy : NSObject <GTURLAccessProvider> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)copyIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)makeURL:(id)a0;
- (void)securityScopedURLFromSandboxID:(id)a0 completionHandler:(id /* block */)a1;
- (void)transferIdentifier:(id)a0 toDevice:(id)a1 completionHandler:(id /* block */)a2;
- (id)urlForPath:(id)a0;

@end
