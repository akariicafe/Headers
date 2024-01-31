@class GKDaemonProxy;
@protocol GKGameSessionService, GKUtilityService, GKUtilityServicePrivate;

@interface GKFoundationRuntimeStrategy : NSObject <GKRuntimeStrategy> {
    GKDaemonProxy *_daemonProxy;
}

@property (readonly) BOOL shouldRefreshPreferencesAfterBackgrounding;
@property (readonly) id<GKGameSessionService> gameSessionService;
@property (readonly) id<GKUtilityService> utilityService;
@property (readonly) id<GKUtilityServicePrivate> utilityServicePrivate;

- (void).cxx_destruct;
- (id)localPlayer;
- (id)initWithDaemonProxy:(id)a0;
- (void)requestClientsRemoteImageDataForURL:(id)a0 queue:(id)a1 reply:(id /* block */)a2;

@end
