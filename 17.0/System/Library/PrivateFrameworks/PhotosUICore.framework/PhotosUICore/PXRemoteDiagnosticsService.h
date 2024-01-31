@class NSString, NSXPCListener, NSObject;
@protocol OS_dispatch_queue, PXDiagnosticsAgent;

@interface PXRemoteDiagnosticsService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_diagnosticsQueue;
}

@property (retain, nonatomic) id<PXDiagnosticsAgent> agent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startServerOnInternalDevicesWithAgentClass:(Class)a0;

@end
