@class NSXPCListener, NSString, NSObject;
@protocol OS_dispatch_queue, SYAddLinkContextServiceDelegate;

@interface SYAddLinkContextService : NSObject <NSXPCListenerDelegate, SYAddLinkContextServiceProtocol>

@property (retain, nonatomic) NSXPCListener *_listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_serviceQueue;
@property (readonly, nonatomic) BOOL _forTesting;
@property (weak, nonatomic) id<SYAddLinkContextServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (oneway void)userDidRemoveContentItemDatas:(id)a0;
- (id)_listenerEndpoint;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)userEditDidAddContentItemDatas:(id)a0;
- (void)beginListeningToConnections;
- (void).cxx_destruct;
- (id)initForTesting:(BOOL)a0;
- (oneway void)userWillAddLinkWithActivityData:(id)a0 completion:(id /* block */)a1;

@end
