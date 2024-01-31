@class NSXPCListener, NSString, SYDocumentWorkflowsRepository, NSObject;
@protocol OS_dispatch_queue;

@interface SYDocumentWorkflowsService : NSObject <NSXPCListenerDelegate> {
    SYDocumentWorkflowsRepository *_repository;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;

- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)beginListeningToConnections;
- (void).cxx_destruct;

@end
