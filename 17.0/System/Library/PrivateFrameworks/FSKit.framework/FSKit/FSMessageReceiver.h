@class NSXPCListener, FSMessageReceiverDelegate, NSXPCListenerEndpoint;

@interface FSMessageReceiver : NSObject

@property (readonly) NSXPCListener *listener;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) FSMessageReceiverDelegate *delegate;

+ (id)newWithDelegate:(id)a0;
+ (id)newWithDelegate:(id)a0 Locale:(id)a1 preferredLanguages:(id)a2;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)getConnection;
- (id)initWithDelegate:(id)a0 Locale:(id)a1 preferredLanguages:(id)a2;

@end
