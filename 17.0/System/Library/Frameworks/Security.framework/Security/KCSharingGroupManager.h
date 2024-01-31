@class KCSharingDaemonConnection, NSString;

@interface KCSharingGroupManager : NSObject <KCSharingXPCClientProtocol>

@property (retain, nonatomic) KCSharingDaemonConnection *daemonConnection;
@property (retain) NSString *cachedCurrentUserIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)accountChanged;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)acceptInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)checkAvailabilityForHandle:(id)a0 completion:(id /* block */)a1;
- (void)checkAvailabilityForHandles:(id)a0 completion:(id /* block */)a1;
- (void)createGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)declineInviteForGroupID:(id)a0 completion:(id /* block */)a1;
- (void)deleteGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentUserIdentifierWithReply:(id /* block */)a0;
- (void)getGroupByGroupID:(id)a0 completion:(id /* block */)a1;
- (void)getGroupsWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonConnection:(id)a0;
- (void)leaveGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)performMaintenanceWithCompletion:(id /* block */)a0;
- (void)provisionWithReply:(id /* block */)a0;
- (void)updateGroupWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)verifyGroupsInSyncWithCompletion:(id /* block */)a0;

@end
