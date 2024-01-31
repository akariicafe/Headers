@class NSMutableDictionary, CWFXPCProxyConnection, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CWFXPCClient : NSObject <CWFXPCEventProtocolPrivate, NSXPCProxyCreating> {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventIDMap;
    NSMutableDictionary *_mutableActivityMap;
    NSMutableDictionary *_mutableEventCallbackMap;
    NSMutableDictionary *_mutableEventAckMap;
    NSXPCConnection *_XPCConnection;
}

@property BOOL invalidated;
@property (retain, nonatomic) CWFXPCProxyConnection *remoteXPCProxyConnection;
@property (readonly) long long serviceType;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) id /* block */ invalidationHandler;
@property (readonly, retain, nonatomic) CWFXPCProxyConnection *localXPCProxyConnection;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)initWithServiceType:(long long)a0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)__acknowledgeEventWithUUID:(id)a0;
- (void)__beginActivity:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (void)__receivedEvent:(id)a0;
- (void)__startMonitoringEvent:(id)a0 requestParameters:(id)a1 reply:(id /* block */)a2;
- (BOOL)beginActivity:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (void)clearAllEventHandlers;
- (void)endActivity:(id)a0 requestParameters:(id)a1;
- (void)endAllActivities:(id)a0;
- (id /* block */)eventHandlerWithEventID:(id)a0;
- (id)initWithServiceType:(long long)a0 endpoint:(id)a1;
- (id)initWithServiceType:(long long)a0 endpoint:(id)a1 remoteXPCProxyConnection:(id)a2;
- (id)initWithServiceType:(long long)a0 remoteXPCProxyConnection:(id)a1;
- (void)receivedAcknowledgedXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)receivedXPCEvent:(id)a0;
- (void)setEventHandler:(id /* block */)a0 eventID:(id)a1;
- (BOOL)startMonitoringEvent:(id)a0 requestParameters:(id)a1 error:(id *)a2;
- (void)stopMonitoringAllEvents:(id)a0;
- (void)stopMonitoringEvent:(id)a0 requestParameters:(id)a1;

@end
