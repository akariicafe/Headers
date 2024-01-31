@class NSXPCListener, NSString, TCTextServer, NSObject;
@protocol OS_dispatch_queue;

@interface TCXPCServer : NSObject <NSXPCListenerDelegate> {
    TCTextServer *_server;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithTextServer:(id)a0;

@end
