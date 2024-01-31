@class NSHashTable, NSString, NSXPCConnection;

@interface KCSharingDaemonConnection : NSObject <KCSharingXPCClientProtocol, KCSharingXPCServerProtocol, KCSharingInvitationNotificationProtocol>

@property long long type;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSHashTable *connectionListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInvitationNotifier;

- (void)dealloc;
- (void)accountChanged;
- (void)connectionWasInvalidated;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setChangeTrackingEnabled:(BOOL)a0 reply:(id /* block */)a1;
- (void)acceptInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)addConnectionListener:(id)a0;
- (void)checkAvailabilityForHandles:(id)a0 completion:(id /* block */)a1;
- (void)connectionWasInterrupted;
- (void)createGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)declineInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)deleteGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserIdentifierWithReply:(id /* block */)a0;
- (void)fetchRemoteChangesWithReply:(id /* block */)a0;
- (void)getGroupByGroupID:(id)a0 completion:(id /* block */)a1;
- (void)getGroupsWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)groupInvitationWasCancelled;
- (void)groupsUpdated;
- (id)initWithConnection:(id)a0 queue:(id)a1 type:(long long)a2;
- (void)leaveGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (void)provisionWithReply:(id /* block */)a0;
- (void)receivedGroupInvitation:(id)a0;
- (void)removeConnectionListener:(id)a0;
- (void)saveLocalChangesWithReply:(id /* block */)a0;
- (void)updateGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)verifyGroupsInSyncWithCompletion:(id /* block */)a0;
- (void)wipe:(BOOL)a0 reply:(id /* block */)a1;

@end
