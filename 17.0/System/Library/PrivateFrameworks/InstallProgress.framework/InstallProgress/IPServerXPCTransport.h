@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, IPServerXPCTransportDelegate;

@interface IPServerXPCTransport : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSMutableSet *_clients;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (weak, nonatomic) id<IPServerXPCTransportDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultXPCTransport;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;
- (void)clientDisconnected:(id)a0;
- (void)disseminateProgressEndForIdenitty:(id)a0 reason:(unsigned long long)a1;
- (void)disseminateProgressUpdateForIdentity:(id)a0 currentProgress:(id)a1;

@end
