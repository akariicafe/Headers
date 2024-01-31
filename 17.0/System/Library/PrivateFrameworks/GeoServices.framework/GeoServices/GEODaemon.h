@class NSString, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject <GEOPListStateCapturing> {
    NSMutableDictionary *_servers;
    NSMutableArray *_serversToStart;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_dispatch_source> *_sigTermSrc;
    NSObject<OS_dispatch_source> *_sigUsr1Src;
    NSObject<OS_xpc_object> *_listener;
    unsigned long long _stateCaptureHandle;
    NSObject<OS_xpc_object> *_offlineServiceConenction;
    NSString *_knownLocale;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (readonly, nonatomic) NSMutableSet *peers;
@property (readonly, nonatomic) BOOL isOfflineService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shutdown;
- (void)peerDidConnect:(id)a0;
- (void)_localeChanged:(id)a0;
- (void)dealloc;
- (void)_handleNewConnection:(id)a0;
- (void)start;
- (id)_createPeerForConnection:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)addServerClass:(Class)a0;
- (void).cxx_destruct;
- (id)initPrimaryDaemon;
- (void)installSignalHandlers;
- (void)addServer:(id)a0;
- (void)_shutdown;
- (id)initWithPort:(const char *)a0 createXPCListenerBlock:(id /* block */)a1;
- (void)peerDidDisconnect:(id)a0;
- (id)startServerClassIfNecessary:(Class)a0;
- (BOOL)shouldAllowIncomingConnection:(id)a0;

@end
