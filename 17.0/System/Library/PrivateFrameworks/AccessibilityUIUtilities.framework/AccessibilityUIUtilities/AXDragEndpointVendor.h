@class NSString, NSXPCListener, NSMutableSet;
@protocol AXDragEndpointVendorDelegate;

@interface AXDragEndpointVendor : NSObject <NSXPCListenerDelegate, AXDragEndpointRequestSatisfierDelegate> {
    NSXPCListener *_listener;
    NSMutableSet *_activeConnections;
}

@property (weak, nonatomic) id<AXDragEndpointVendorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithXPCListener:(id)a0;
- (id)endpointForConnection:(id)a0 forEndpointRequestSatisfier:(id)a1;
- (void)endpointRequestSatisfierDidDisconnect:(id)a0;

@end
