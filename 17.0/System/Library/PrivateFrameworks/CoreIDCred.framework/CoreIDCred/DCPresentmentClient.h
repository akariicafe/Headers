@class DCXPCDisconnectHandler, NSString, NSXPCConnection;
@protocol DCPresentmentXPCProtocol;

@interface DCPresentmentClient : NSObject <DCPresentmentXPCProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (retain, nonatomic) id<DCPresentmentXPCProtocol> remoteObjectProxy;
@property (retain, nonatomic) DCXPCDisconnectHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)buildCredentialResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)buildErrorResponseWithStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)buildResponseForSelection:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPartitions:(id)a0 presentmentType:(unsigned long long)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)generateTransportKeyForSpecification:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)interpretRequest:(id)a0 completion:(id /* block */)a1;

@end
