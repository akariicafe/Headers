@class NSError, GKPlayer, GKGame;

@interface GameCenterFoundation.GKGroupActivityManager : NSObject {
    void /* unknown type, empty encoding */ matchmakingSupport;
    void /* unknown type, empty encoding */ managerSupport;
    void /* unknown type, empty encoding */ groupSessionEligibilityObserver;
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ messenger;
    void /* unknown type, empty encoding */ previousMatchRequest;
    void /* unknown type, empty encoding */ groupSessionStateAndMessagesObserver;
    void /* unknown type, empty encoding */ inviteesManager;
    void /* unknown type, empty encoding */ cachedDevicePushToken;
    void /* unknown type, empty encoding */ hasRequestedToJoin;
}

- (id)init;
- (void)update;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)resetWithCompletionHandler:(void (^)(void))a0;
- (BOOL)isEligibleForGroupSession;
- (void)startGame;
- (void)endWithCompletionHandler:(void (^)(void))a0;
- (void)activateWithGame:(GKGame *)a0 completionHandler:(void (^)(NSError *))a1;
- (id)initWithMatchmakingSupport:(id)a0;
- (void)leaveWithCompletionHandler:(void (^)(void))a0;
- (void)playerDisconnectWithPlayer:(GKPlayer *)a0 completionHandler:(void (^)(void))a1;
- (id)sharingControllerItemProviderWithGame:(id)a0 error:(id *)a1;
- (void)startLookingForSessions;

@end
