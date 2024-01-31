@class NSString, NSMutableArray, NSCache;
@protocol SWCollaborationActionHandler;

@interface SWCollaborationCoordinator : NSObject <NSCacheDelegate>

@property (class, readonly, nonatomic) SWCollaborationCoordinator *sharedCoordinator;

@property (retain, nonatomic) NSCache *actionCache;
@property (retain, nonatomic) NSMutableArray *cachedUUIDs;
@property (nonatomic) BOOL applicationIsReadyForActions;
@property (weak, nonatomic) id<SWCollaborationActionHandler> actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)applicationHasFinishedLaunching;
- (void)_sendStartCollaborationAction:(id)a0;
- (void)_sendUpdateCollaborationParticipantsAction:(id)a0;
- (void)_cacheAction:(id)a0;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (void)processIncomingAction:(id)a0;
- (void)_sendUndeliveredActionsIfNecessary;
- (void)processIncomingActions:(id)a0;
- (void)_sendActionToApp:(id)a0;

@end
