@class NSSet, NSString, ASUserNotificationResponse, NSError, ASFriend;

@interface _ASActivitySharingClient : NSObject {
    void /* unknown type, empty encoding */ transportClient;
    void /* unknown type, empty encoding */ asListener;
}

- (id)init;
- (void)activateWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (void)invalidateWithCompletionHandler:(void (^)(void))a0;
- (void)allFriendsWithCompletion:(void (^)(NSSet *, NSError *))a0;
- (void)expireChangeTokenWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)handleNotificationResponse:(ASUserNotificationResponse *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)removeFriendWithUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)fetchActivityDataIfGreaterThanLastFetchElapsedMinimum:(unsigned long long)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)pushActivityDataWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)removeAllFriendsWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)acceptCompetitionInviteFromFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)acceptFriendInviteFromFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)appBadgeCountWithCompletion:(void (^)(long long, NSError *))a0;
- (void)areMultipleDevicesSharingDataForSnapshotIndex:(long long)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)completeCompetitionWithFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)friendWithRemoteRelationshipUUID:(NSString *)a0 completion:(void (^)(ASFriend *, NSError *))a1;
- (void)ignoreCompetitionInviteFromFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)ignoreFriendInviteFromFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)immediateFetchActivityDataWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)isCloudKitAccountActiveWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)pushFakeActivityDataWithCompletion:(void (^)(BOOL, NSError *))a0;
- (void)sendCompetitionInviteToFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (void)sendFriendInviteToDestination:(NSString *)a0 callerID:(NSString *)a1 serviceIdentifier:(NSString *)a2 completion:(void (^)(BOOL, NSError *))a3;
- (void)setActivityDataVisible:(BOOL)a0 friendUUID:(NSString *)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)setMuteEnabled:(BOOL)a0 friendUUID:(NSString *)a1 completion:(void (^)(BOOL, NSError *))a2;
- (void)withdrawFriendInviteToFriendUUID:(NSString *)a0 completion:(void (^)(BOOL, NSError *))a1;

@end
