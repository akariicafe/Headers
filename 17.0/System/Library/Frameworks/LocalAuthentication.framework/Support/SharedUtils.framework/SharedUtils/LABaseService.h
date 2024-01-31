@class NSXPCListenerEndpoint, NSString, NSMutableDictionary, NSXPCListener, NSObject;
@protocol OS_dispatch_queue, LAServiceManager;

@interface LABaseService : NSObject <LAService, NSXPCListenerDelegate> {
    NSMutableDictionary *_clients;
    BOOL _terminating;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) unsigned long long clientsCount;
@property (weak, nonatomic) id<LAServiceManager> manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_assertRunningInCorrectQueue;
- (void)_disconnectClient:(id)a0;

@end
