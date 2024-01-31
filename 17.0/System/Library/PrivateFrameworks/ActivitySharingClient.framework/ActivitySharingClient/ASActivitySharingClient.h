@class NSString, _ASActivitySharingClient;

@interface ASActivitySharingClient : NSObject <ASActivitySharingClientProtocol>

@property (readonly, nonatomic) _ASActivitySharingClient *activitySharingClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)activateWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidateWithCompletionHandler:(id /* block */)a0;
- (void)allFriendsWithCompletion:(id /* block */)a0;
- (void)expireChangeTokenWithCompletion:(id /* block */)a0;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)removeFriendWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchActivityDataIfGreaterThanLastFetchElapsedMinimum:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pushActivityDataWithCompletion:(id /* block */)a0;
- (void)removeAllFriendsWithCompletion:(id /* block */)a0;
- (void)acceptCompetitionInviteFromFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)acceptFriendInviteFromFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)appBadgeCountWithCompletion:(id /* block */)a0;
- (void)areMultipleDevicesSharingDataForSnapshotIndex:(id)a0 completion:(id /* block */)a1;
- (void)completeCompetitionWithFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)friendWithRemoteRelationshipUUID:(id)a0 completion:(id /* block */)a1;
- (void)ignoreCompetitionInviteFromFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)ignoreFriendInviteFromFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)immediateFetchActivityDataWithCompletion:(id /* block */)a0;
- (void)isCloudKitAccountActiveWithCompletion:(id /* block */)a0;
- (void)pushFakeActivityDataWithCompletion:(id /* block */)a0;
- (void)sendCompetitionInviteToFriendUUID:(id)a0 completion:(id /* block */)a1;
- (void)sendFriendInviteToDestination:(id)a0 callerID:(id)a1 serviceIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)setActivityDataVisible:(BOOL)a0 friendUUID:(id)a1 completion:(id /* block */)a2;
- (void)setMuteEnabled:(BOOL)a0 friendUUID:(id)a1 completion:(id /* block */)a2;
- (void)withdrawFriendInviteToFriendUUID:(id)a0 completion:(id /* block */)a1;

@end
