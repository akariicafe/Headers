@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface NFRemoteAdminManager : NSObject <NSXPCConnectionDelegate, NFRemoteAdminManagerCallbacks> {
    NSXPCConnection *_connection;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRemoteAdminManager;

- (void)registerEventListener:(id)a0;
- (id)init;
- (void)unregisterEventListener:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)registrationInfo;
- (id)primaryRegionTopic;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_connectIfNeeded;
- (void)appletStateChange:(id)a0;
- (BOOL)cancelCardIngestion;
- (void)connectToServer:(id)a0 initialClientRequestInfo:(id)a1 callback:(id /* block */)a2;
- (void)getSELDInfoForBroker:(id /* block */)a0;
- (void)ingestCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)queueServerConnection:(id)a0;
- (BOOL)queueServerConnectionForApplets:(id)a0;
- (void)readerModeCardIngestionStatus:(unsigned long long)a0;
- (void)readerModeCardSessionToken:(id)a0;
- (BOOL)setRegistrationInfo:(id)a0 primaryRegionTopic:(id)a1;
- (void)connectToServer:(id)a0 callback:(id /* block */)a1;
- (id)deleteAllAppletsAndCleanupWithTSM;
- (void)didInterruptXPCConnection:(id)a0;
- (void)didInvalidateXPCConnection:(id)a0;
- (id)getAPNPublicToken;
- (id)nextRequestForServer:(id)a0;

@end
