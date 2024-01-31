@class UIWindowScene, NSMutableArray, SBRootSceneWindow;

@interface SBMainDisplayRootWindowScenePresentationBinder : SBRootWindowScenePresentationBinder {
    NSMutableArray *_disconnectionAssertions;
    UIWindowScene *_disconnectedFromScene;
}

@property (readonly, nonatomic) SBRootSceneWindow *rootWindow;

+ (id)sharedInstance;

- (id)_init;
- (void)_disconnectFromRenderServer;
- (void).cxx_destruct;
- (void)_reconnectToRenderServer;
- (id)assertDisconnectionFromRenderServerForReason:(id)a0;

@end
