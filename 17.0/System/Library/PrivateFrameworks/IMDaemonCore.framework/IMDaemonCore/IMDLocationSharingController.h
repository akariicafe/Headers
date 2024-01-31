@class FMFSession;

@interface IMDLocationSharingController : NSObject {
    FMFSession *_session;
}

@property (retain, nonatomic) id fmlSession;

+ (id)sharedInstance;
+ (void)_addLocationShareItemToMatchingChats:(id)a0 handleID:(id)a1 hasStoredItem:(BOOL)a2 broadcastChanges:(BOOL)a3;
+ (void)addLocationShareItemToMatchingChats:(id)a0;

- (void)didStartSharingMyLocationWithHandle:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_configureFindMyLocateSession;
- (void)receivedIncomingLocationSharePacket:(id)a0;
- (void)didStartAbilityToGetLocationForHandle:(id)a0;
- (void)didStopSharingMyLocationWithHandle:(id)a0;
- (void)_setUpFindMyLocateSessionCallbacks;
- (void)_generateLocationSharingItemWithHandleID:(id)a0 direction:(long long)a1 action:(long long)a2;
- (void)didFailToHandleMappingPacket:(id)a0 error:(id)a1;
- (void)_initializeFindMySessionIfInAllowedProcess;
- (void)_startFMLSessionMonitoring;
- (void)_forwardMappingPacket:(id)a0 toID:(id)a1 account:(id)a2;
- (void)sendMappingPacket:(id)a0 toHandle:(id)a1 account:(id)a2;
- (void)_postFMLFriendshipChangeForHandleID:(id)a0 handleType:(long long)a1 updateType:(long long)a2 isFromMessages:(BOOL)a3;
- (void)didStopAbilityToGetLocationForHandle:(id)a0;

@end
