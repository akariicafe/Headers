@interface SBSceneDisconnectionManager : NSObject

@property (nonatomic) unsigned long long numberOfRecentScenesExcludedFromDisconnection;
@property (nonatomic) BOOL isExecuting;

+ (id)sharedManager;

- (BOOL)shouldDisconnectScene:(id)a0 inSwitcher:(id)a1;
- (id)init;
- (void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)a0;
- (id)sceneManager;
- (void)disconnectScenes:(id)a0 completion:(id /* block */)a1;
- (id)liveScenesForApplication:(id)a0;
- (unsigned long long)positionOf:(id)a0 inSwitcher:(id)a1;

@end
