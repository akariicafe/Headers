@class ARServerConnection, NSString, NSXPCInterface, NSMutableDictionary, NSObject;
@protocol ARDaemonServiceBaseProtocol, OS_dispatch_group, OS_os_activity, ARRemoteServiceAnchorDelegate, OS_dispatch_queue;

@interface ARRemoteService : NSObject <ARServerConnectionDelegate, ARNamedService, ARRemoteServiceBaseProtocol> {
    NSMutableDictionary *_anchorsByIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _anchorsLock;
    NSObject<OS_dispatch_queue> *_asyncServiceQueue;
    NSObject<OS_dispatch_group> *_connectionDispatchGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionDispatchGroupLock;
    NSObject<OS_os_activity> *_remoteServiceActivity;
    unsigned long long _traceIdentifier;
    BOOL _isAnchorProviding;
    struct { void /* unknown type, empty encoding */ columns[4]; } _worldOrigin;
    struct { void /* unknown type, empty encoding */ columns[4]; } _worldOriginInverse;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _worldOriginLock;
    void *_messageBuffer;
    unsigned long long _dispatchDataSize;
}

@property (class, readonly, nonatomic) NSXPCInterface *remoteServiceInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonServiceInterface;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) id<ARDaemonServiceBaseProtocol> syncService;
@property (readonly, nonatomic) id<ARDaemonServiceBaseProtocol> service;
@property unsigned long long status;
@property (weak) id<ARRemoteServiceAnchorDelegate> anchorDelegate;
@property (nonatomic) BOOL updateUnmodifiedAnchors;
@property (copy, nonatomic) id /* block */ serviceDidInvalidateBlock;
@property (retain) ARServerConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateHandlerQueue;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldFromOrigin;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } originFromWorld;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)createDaemonServiceInterface:(id)a0;
+ (id)createRemoteServiceInterface:(id)a0;
+ (BOOL)isSupportedWithError:(id *)a0;

- (int)clientProcessIdentifier;
- (id)initWithDaemon:(id)a0;
- (void)reconnect;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)clientProcessName;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)_startService;
- (id)initWithDaemon:(id)a0 startConnection:(BOOL)a1;
- (long long)_waitForDispatchGroup:(unsigned long long)a0;
- (BOOL)_waitUntilStarted:(unsigned long long)a0;
- (void)asyncServiceWithCallback:(id /* block */)a0;
- (void)connectionDispatchGroupLeave;
- (id)initWithDaemon:(id)a0 dispatchChannelQueue:(id)a1;
- (id)initWithDaemon:(id)a0 startConnection:(BOOL)a1 dispatchChannelQueue:(id)a2;
- (id)initWithDispatchChannelQueue:(id)a0;
- (id)initWithEndpoint:(id)a0 startConnection:(BOOL)a1 dispatchChannelQueue:(id)a2;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 dispatchChannelQueue:(id)a3;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3;
- (id)initWithMachServiceName:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2 endpoint:(id)a3 startConnection:(BOOL)a4 dispatchChannelQueue:(id)a5;
- (id)resolvedHandlerQueue;
- (void)serverConnectionInterrupted:(id)a0;
- (void)serverConnectionInvalidated:(id)a0;
- (void)serviceConfiguredWithCompletionHandler:(id /* block */)a0;
- (void)serviceConfiguredWithError:(id)a0;
- (void)serviceDidReconnect:(BOOL)a0;
- (void)serviceFailedWithError:(id)a0;
- (void)setService:(id)a0 syncService:(id)a1;
- (void)syncServiceWithTimeout:(unsigned long long)a0 callback:(id /* block */)a1;
- (BOOL)waitUntilStarted:(unsigned long long)a0;

@end
