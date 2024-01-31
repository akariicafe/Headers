@class NSString, NSXPCConnection, ARRemoteService, NSObject;
@protocol OS_os_activity, ARRemoteServiceBaseProtocol, OS_os_transaction, ARDaemonServiceDelegate, ARDaemonServiceDataSource;

@interface ARDaemonService : NSObject <ARServiceType, ARDaemonServiceBaseProtocol> {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_os_activity> *_daemonServiceActivity;
    BOOL _authorized;
    BOOL _immersive;
}

@property (class, readonly, nonatomic) Class remoteServiceClass;
@property (class, readonly, nonatomic) BOOL requiresImmersive;
@property (class, readonly, nonatomic) BOOL isUnique;
@property (class, readonly, nonatomic) BOOL isSupported;

@property (retain) NSXPCConnection *connection;
@property (retain) ARRemoteService *remoteService;
@property (readonly) id<ARRemoteServiceBaseProtocol> clientService;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, nonatomic) NSString *clientProcessName;
@property (weak, nonatomic) id<ARDaemonServiceDataSource> dataSource;
@property (weak, nonatomic) id<ARDaemonServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)suspend;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (void)interruptionHandler;
- (void)startService:(id /* block */)a0;
- (void)_commonInitWithProcessName:(id)a0 processIdentifier:(int)a1 bundleIdentifier:(id)a2;
- (id)initAsLocalService;
- (id)initWithConnection:(id)a0 exportedInterface:(id)a1 remoteObjectInterface:(id)a2;
- (id)initWithRemoteService:(id)a0;

@end
