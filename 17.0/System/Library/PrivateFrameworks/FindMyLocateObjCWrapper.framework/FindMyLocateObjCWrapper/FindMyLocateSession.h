@class _TtC23FindMyLocateObjCWrapper13ObjCBootstrap;

@interface FindMyLocateSession : NSObject

@property (retain, nonatomic) _TtC23FindMyLocateObjCWrapper13ObjCBootstrap *trampoline;
@property (copy, nonatomic) id /* block */ locationUpdateCallback;
@property (copy, nonatomic) id /* block */ friendshipUpdateCallback;
@property (copy, nonatomic) id /* block */ meDeviceUpdateCallback;

+ (BOOL)FMFRestricted;
+ (BOOL)FMFAllowed;

- (id)init;
- (void).cxx_destruct;
- (id)cachedLocationForHandle:(id)a0;
- (void)stopSharingLocationWith:(id)a0 isFromGroup:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendFriendshipOfferToHandles:(id)a0 expiration:(long long)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)startMonitoringActiveLocationSharingDeviceChangeWithCompletion:(id /* block */)a0;
- (long long)cachedCanShareLocationWithHandle:(id)a0 isFromGroup:(BOOL)a1;
- (id)cachedFriendsFollowingMyLocation;
- (id)cachedFriendsSharingLocationsWithMe;
- (id)cachedOfferExpirationForHandle:(id)a0 groupId:(id)a1;
- (void)getActiveLocationSharingDeviceWithCompletion:(id /* block */)a0;
- (void)getFriendsFollowingMyLocationWithCompletion:(id /* block */)a0;
- (void)getFriendsSharingLocationsWithMeWithCompletion:(id /* block */)a0;
- (void)startRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(BOOL)a2 reverseGeocode:(BOOL)a3 completion:(id /* block */)a4;
- (void)startUpdatingFriendsWithInitialUpdates:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)setActiveLocationSharingDevice:(id)a0 completion:(id /* block */)a1;
- (id)cachedLocationForHandle:(id)a0 includeAddress:(BOOL)a1;
- (void)canShareLocationWithHandle:(id)a0 isFromGroup:(BOOL)a1 completion:(id /* block */)a2;
- (void)friendshipStateWithHandle:(id)a0 isFromGroup:(BOOL)a1 completion:(id /* block */)a2;
- (void)getOfferExpirationForHandle:(id)a0 groupId:(id)a1 completion:(id /* block */)a2;
- (void)sendFriendshipInviteToHandle:(id)a0 from:(id)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendFriendshipInviteToHandle:(id)a0 isFromGroup:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendFriendshipOfferToHandles:(id)a0 from:(id)a1 expiration:(long long)a2 isFromGroup:(BOOL)a3 completion:(id /* block */)a4;
- (void)startRefreshingLocationForHandles:(id)a0 priority:(long long)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)stopRefreshingLocationWithCompletion:(id /* block */)a0;
- (void)stopSharingLocationWith:(id)a0 from:(id)a1 isFromGroup:(BOOL)a2 completion:(id /* block */)a3;
- (void)stopUpdatingFriendsWithCompletion:(id /* block */)a0;

@end
