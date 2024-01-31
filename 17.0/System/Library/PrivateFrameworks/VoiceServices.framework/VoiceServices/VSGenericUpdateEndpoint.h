@class NSXPCListener, NSXPCListenerEndpoint, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configuredEndpointWithUpdateHandler:(id /* block */)a0 withConnection:(id)a1;
+ (id /* block */)remoteUpdateHanderForEndpoint:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
