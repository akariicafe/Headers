@class NSString;
@protocol NSXPCProxyCreating;

@interface SPRObject : NSObject {
    id /* block */ _connector;
}

@property (readonly) id<NSXPCProxyCreating> connection;
@property (readonly) NSString *proxyDescription;

- (void)dealloc;
- (id)initWithConnector:(id /* block */)a0;
- (void)invalidate;
- (id)connectionWithErrorHandler:(id /* block */)a0;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)onDisconnect;
- (id)asyncProxyWithErrorHandler:(id /* block */)a0;
- (id)connectAndReturnError:(id *)a0;
- (id)mapXPCConnectionError:(id)a0;

@end
