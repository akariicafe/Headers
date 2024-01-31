@class NSXPCListener, NSString, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface FSListener : NSObject <NSXPCListenerDelegate>

@property (readonly) NSXPCListener *listener;
@property (readonly) NSXPCInterface *interface;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSObject *proxy;
@property (readonly) Class clientClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initUsingInterface:(id)a0 clientClass:(Class)a1 queue:(id)a2 andProxy:(id)a3;

@end
