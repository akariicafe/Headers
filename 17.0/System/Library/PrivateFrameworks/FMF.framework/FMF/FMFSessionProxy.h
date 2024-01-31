@class FMFSession, NSString;

@interface FMFSessionProxy : NSObject <FMFXPCInternalClientProtocol>

@property (weak, nonatomic) FMFSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)didAddFollowerHandle:(id)a0;
- (oneway void)didRemoveFollowerHandle:(id)a0;
- (void)didReceiveFriendshipRequest:(id)a0;
- (oneway void)didUpdateActiveDeviceList:(id)a0;
- (oneway void)didChangeActiveLocationSharingDevice:(id)a0;
- (oneway void)abPreferencesDidChange;
- (oneway void)didUpdateHideFromFollowersStatus:(BOOL)a0;
- (oneway void)sendMappingPacket:(id)a0 toHandle:(id)a1;
- (oneway void)didUpdateFollowing:(id)a0;
- (oneway void)didUpdatePreferences:(id)a0;
- (oneway void)didStopFollowingHandle:(id)a0;
- (oneway void)didUpdateFollowers:(id)a0;
- (oneway void)abDidChange;
- (oneway void)didStartFollowingHandle:(id)a0;
- (oneway void)didUpdateFences:(id)a0;
- (oneway void)didUpdatePendingOffersForHandles:(id)a0;
- (oneway void)didReceiveServerError:(id)a0;
- (oneway void)modelDidLoad;
- (oneway void)didUpdateFavorites:(id)a0;
- (oneway void)failedToGetLocationForHandle:(id)a0 error:(id)a1;
- (oneway void)didUpdateLocations:(id)a0;
- (oneway void)networkReachabilityUpdated:(BOOL)a0;
- (oneway void)setLocations:(id)a0;
- (void).cxx_destruct;
- (id)initWithFMFSession:(id)a0;

@end
