@class NSArray, NSString, FMLHandle, NSError, FMLDevice, NSDate;

@interface FindMyLocateObjCWrapper.ObjCBootstrap : NSObject {
    void /* unknown type, empty encoding */ locationUpdateCallback;
    void /* unknown type, empty encoding */ friendshipUpdateCallback;
    void /* unknown type, empty encoding */ meDeviceUpdateCallback;
    void /* unknown type, empty encoding */ locationRefreshTask;
    void /* unknown type, empty encoding */ friendsUpdateTask;
    void /* unknown type, empty encoding */ _session;
    void /* unknown type, empty encoding */ isInitialized;
    void /* unknown type, empty encoding */ initContinuations;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ followings;
    void /* unknown type, empty encoding */ followers;
    void /* unknown type, empty encoding */ pendingOffers;
    void /* unknown type, empty encoding */ locationForHandles;
}

@property (nonatomic, copy) id /* block */ locationUpdateCallback;
@property (nonatomic, copy) id /* block */ friendshipUpdateCallback;
@property (nonatomic, copy) id /* block */ meDeviceUpdateCallback;

- (id)init;
- (void).cxx_destruct;
- (void)startUpdatingFriendsWithInitialUpdates:(BOOL)a0 completionHandler:(void (^)(NSError *))a1;
- (void)stopUpdatingFriendsWithCompletionHandler:(void (^)(NSError *))a0;
- (long long)cachedCanShareLocationWithHandle:(id)a0 isFromGroup:(BOOL)a1;
- (id)cachedFriendsFollowingMyLocation;
- (id)cachedFriendsSharingLocationWithMe;
- (id)cachedFriendsWithPendingOffers;
- (id)cachedLocationFor:(id)a0 includeAddress:(BOOL)a1;
- (id)cachedOfferExpirationFor:(id)a0 groupId:(id)a1;
- (void)canShareLocationWithHandle:(FMLHandle *)a0 isFromGroup:(BOOL)a1 completionHandler:(void (^)(long long, NSError *))a2;
- (void)friendshipStateWithHandle:(FMLHandle *)a0 isFromGroup:(BOOL)a1 completionHandler:(void (^)(long long, NSError *))a2;
- (void)getActiveLocationSharingDeviceWithCompletionHandler:(void (^)(FMLDevice *, NSError *))a0;
- (void)getFriendsWith:(long long)a0 completionHandler:(void (^)(NSArray *, NSError *))a1;
- (void)getOfferExpirationForHandle:(FMLHandle *)a0 groupId:(NSString *)a1 completionHandler:(void (^)(NSDate *, NSError *))a2;
- (void)sendFriendshipInviteTo:(FMLHandle *)a0 from:(FMLHandle *)a1 isFromGroup:(BOOL)a2 completionHandler:(void (^)(NSError *))a3;
- (void)sendFriendshipOfferTo:(NSArray *)a0 from:(FMLHandle *)a1 end:(long long)a2 isFromGroup:(BOOL)a3 completionHandler:(void (^)(NSError *))a4;
- (void)setActiveLocationSharingDevice:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)startMonitoringActiveLocationSharingDeviceWithCompletionHandler:(void (^)(NSError *))a0;
- (void)startRefreshingLocationFor:(NSArray *)a0 priority:(long long)a1 isFromGroup:(BOOL)a2 reverseGeocode:(BOOL)a3 completionHandler:(void (^)(NSError *))a4;
- (void)stopRefreshingLocationFor:(NSArray *)a0 priority:(long long)a1 isFromGroup:(BOOL)a2 completionHandler:(void (^)(NSError *))a3;
- (void)stopRefreshingLocationWithCompletionHandler:(void (^)(NSError *))a0;
- (void)stopSharingLocationWith:(NSArray *)a0 from:(FMLHandle *)a1 isFromGroup:(BOOL)a2 completionHandler:(void (^)(NSError *))a3;

@end
