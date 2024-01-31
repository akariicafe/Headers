@class IMDaemonListener, NSString, NSArray, IMMultiplexedDaemonConnection, NSMutableDictionary, NSDictionary, IMDaemonQueryController, IMDistributingProxy, NSMapTable, IMDaemonConnection;
@protocol IMDaemonProtocol;

@interface IMDaemonController : NSObject <IMDaemonControlling_Private, IMDaemonControlling>

@property (class, readonly, nonatomic) IMDaemonController *sharedController;

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) IMDaemonConnection *connection;
@property (readonly, nonatomic) IMDistributingProxy *remoteDaemonProxy;
@property (readonly, nonatomic) NSMapTable *multiplexedConnections;
@property (readonly, nonatomic) NSMutableDictionary *retainedMultiplexedConnections;
@property (readonly, nonatomic) NSDictionary *processContext;
@property (retain, nonatomic) IMMultiplexedDaemonConnection *anonymousMultiplexedConnection;
@property (readonly, nonatomic) unsigned long long processCapabilities;
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow;
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny;
@property (retain, nonatomic, setter=_setListenerID:) NSString *listenerID;
@property (weak, nonatomic) id delegate;
@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) id<IMDaemonProtocol> remoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> synchronousRemoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> synchronousReplyingRemoteDaemon;
@property (readonly, nonatomic) id<IMDaemonProtocol> replyingRemoteDaemon;
@property (readonly, nonatomic) IMDaemonQueryController *queryController;
@property (readonly, nonatomic) IMDaemonListener *listener;
@property (readonly, nonatomic) unsigned int capabilities;

+ (id)sharedInstance;
+ (void)_blockUntilSendQueueIsEmpty;

- (BOOL)hasListenerForID:(id)a0;
- (BOOL)removeListenerID:(id)a0;
- (id)init;
- (void)_capabilitiesDidChangeWithContextChange:(BOOL)a0;
- (id)_multiplexedConnectionWithUniqueID:(id)a0 label:(id)a1 capabilities:(unsigned long long)a2 context:(id)a3 retain:(BOOL)a4;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1 blockUntilConnected:(BOOL)a2;
- (void)disconnectFromDaemon;
- (void)blockUntilConnected;
- (BOOL)_hasMultiplexedConnectionWithUniqueID:(id)a0;
- (unsigned int)capabilitiesForListenerID:(id)a0;
- (void)_noteSetupComplete;
- (void)_invalidateMultiplexedConnectionWithUniqueID:(id)a0;
- (void)_connectWithContextChange:(BOOL)a0;
- (BOOL)_clientRequiresSynchronousConnectionRescueWithListenerID:(id)a0;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)setCapabilities:(unsigned int)a0 forListenerID:(id)a1;
- (void)_capabilitiesDidChange;
- (void).cxx_destruct;
- (BOOL)connectToDaemon;
- (void)_updateAnonymousMultiplexedConnectionWithAddedCapabilities:(unsigned long long)a0;
- (unsigned long long)_clientCapabilitiesForLegacyClientWithListenerID:(id)a0 requestedCapabilities:(unsigned long long)a1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (BOOL)addListenerID:(id)a0 capabilities:(unsigned int)a1;
- (unsigned long long)_capabilitiesForMultiplexedConnectionWithUniqueID:(id)a0;
- (void)requestSetup;
- (void)killDaemon;
- (id)multiplexedConnectionWithLabel:(id)a0 capabilities:(unsigned long long)a1 context:(id)a2;
- (void)sendQueryWithReply:(BOOL)a0 query:(id /* block */)a1;
- (void)_connectWithCompletion:(id /* block */)a0;

@end
