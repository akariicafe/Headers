@class AXAccessQueue, NSMutableDictionary, NSMutableArray, NSHashTable, NSObject, BSServiceConnection;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceConnectionClient;

@interface AXUIClientConnection : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serverConnectionLock;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) AXAccessQueue *connectionAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *registeredClients;
@property (retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue;
@property (nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSHashTable *stateObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateObserverQueue;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *serviceConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceConnectionQueue;
@property (retain, nonatomic) NSMutableArray *serviceRequests;

+ (id)sharedClientConnection;

- (id)init;
- (void)dealloc;
- (void)performLaunchAngelTask:(id /* block */)a0;
- (void)tearDownConnection;
- (void)registerClient:(id)a0 withIdentifier:(id)a1;
- (oneway void)sendBoardServiceMessage:(id)a0 callback:(id /* block */)a1;
- (void)_initializeServiceConnection;
- (void).cxx_destruct;
- (void)_broadcastConnectedStateChange;
- (void)unregisterConnectionStateObserver:(id)a0;
- (void)performBlockWithXPCConnection:(id /* block */)a0;
- (void)cleanUp;
- (void)registerConnectionStateObserver:(id)a0;
- (void)unregisterClient:(id)a0 withIdentifier:(id)a1;
- (id)_clientWithIdentifier:(id)a0;
- (void)_processXPCReply:(id)a0 context:(id)a1;

@end
